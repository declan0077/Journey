using UnityEditor;
using UnityEngine;

[System.Serializable]
public class PatrolPoint
{
    public Transform point;
    public Vector3 faceDirection = Vector3.forward;
    public bool shouldJump = false;
}

[RequireComponent(typeof(Rigidbody))]
public class PlayerPatrol : MonoBehaviour
{
    public PatrolPoint[] patrolPoints;
    public float speed = 2f;
    public float jumpForce = 5f;
    public Transform groundCheck;
    public float groundCheckRadius = 0.2f;
    public LayerMask groundLayer;
    public float gravityMultiplier = 2f;

    private Rigidbody rb;
    private Animator animator;
    private int currentPointIndex = 0;
    private bool isGrounded = false;
    private bool isJumping = false;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.useGravity = false; // manual gravity
        animator = GetComponent<Animator>();
    }

    void FixedUpdate()
    {
        if (GameManager.Instance.GetGameState() == GameManager.GameState.Dialog)
        {
            rb.velocity = Vector3.zero;
            animator.SetBool("IsWalking", false);
            return;
        }

        // Check if grounded
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);
        animator.SetBool("InAir", !isGrounded);

        if (patrolPoints.Length == 0) return;

        PatrolPoint currentTarget = patrolPoints[currentPointIndex];
        Vector3 direction = (currentTarget.point.position - transform.position);
        direction.y = 0f;

        // Always move toward the target (even while in the air)
        if (direction.magnitude > 0.1f)
        {
            Vector3 move = direction.normalized * speed;
            rb.velocity = new Vector3(move.x, rb.velocity.y, move.z);
            transform.forward = currentTarget.faceDirection;
            animator.SetBool("IsWalking", true);
        }
        else
        {
            animator.SetBool("IsWalking", false);

            // Jump if needed
            if (currentTarget.shouldJump && isGrounded)
            {
                Jump();
            }
            else if (!currentTarget.shouldJump || isGrounded)
            {
                AdvanceToNextPoint();
            }
        }

        ApplyGravity();
    }

    void Jump()
    {
        animator.SetTrigger("Jump");
        rb.velocity = new Vector3(rb.velocity.x, jumpForce, rb.velocity.z);
        isJumping = true;
    }

    void AdvanceToNextPoint()
    {
        currentPointIndex = (currentPointIndex + 1) % patrolPoints.Length;
        isJumping = false;
    }

    void ApplyGravity()
    {
        if (!isGrounded)
        {
            rb.velocity += Vector3.up * Physics.gravity.y * gravityMultiplier * Time.fixedDeltaTime;
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        foreach (ContactPoint contact in collision.contacts)
        {
            if (Vector3.Dot(contact.normal, Vector3.up) > 0.5f)
            {
                isGrounded = true;

                if (isJumping)
                {
                    isJumping = false;
                    AdvanceToNextPoint();
                }

                break;
            }
        }
    }

    private void OnDrawGizmosSelected()
    {
        if (patrolPoints != null && patrolPoints.Length > 1)
        {
            for (int i = 0; i < patrolPoints.Length; i++)
            {
                var patrolPoint = patrolPoints[i];
                if (patrolPoint.point == null) continue;

                Gizmos.color = Color.cyan;
                Gizmos.DrawSphere(patrolPoint.point.position, 0.2f);

                int nextIndex = (i + 1) % patrolPoints.Length;
                if (patrolPoints[nextIndex].point != null)
                {
                    Gizmos.DrawLine(patrolPoint.point.position, patrolPoints[nextIndex].point.position);
                }

                Vector3 origin = patrolPoint.point.position + Vector3.up * 0.5f;
                Vector3 direction = patrolPoint.faceDirection.normalized * 0.8f;

                Handles.color = Color.yellow;
                Handles.ArrowHandleCap(0, origin, Quaternion.LookRotation(direction), 0.8f, EventType.Repaint);
                Gizmos.DrawRay(origin, direction);
            }
        }
    }
}
