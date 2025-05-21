using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PlayerController : MonoBehaviour
{
    public float walkSpeed = 5f;
    public float sneakSpeed = 2f;


    [Header("Jump Settings")]
    public AnimationCurve jumpCurve;
    public float jumpDuration = 0.5f;
    public float jumpForce = 7f;
    private bool isJumping = false;
    private float jumpTimer = 0f;

    [Header("Air Control Settings")]
    public float airControlMultiplier = 0.5f;

    public LayerMask groundLayer;
    public Transform groundCheck;
    public float groundCheckRadius = 0.2f;

    private Rigidbody rb;
    private bool isGrounded;
    private bool isSneaking;


    private Animator animator;
    [SerializeField] public Transform spawnLocation;


    public bool isClimbing = false;
    public Transform model;

    private bool isHoldingObject = false;
    public Transform HoldingSpot;
    public GameObject itemInHand;
    public float throwForce = 15f;
    public float liftDuration = 0.2f;
    public float liftHeight = 1.5f;
    public LayerMask throwAimLayer;

    private void Start()
    {
        animator = GetComponent<Animator>();
        animator.applyRootMotion = false;

        rb = GetComponent<Rigidbody>();
        rb.interpolation = RigidbodyInterpolation.Interpolate;
        rb.collisionDetectionMode = CollisionDetectionMode.Continuous;
    }

    private void Update()
    {
        // Ground Check
        isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);


        if (GameManager.Instance.GetGameState() == GameManager.GameState.Dialog)
        {
            rb.velocity = Vector3.zero;
            animator.SetBool("IsWalking", false);
            return;
        }

        if (GameManager.Instance.GetGameState() == GameManager.GameState.MiniGame)
        {
            rb.velocity = Vector3.zero;
            return;
        }
        animator.SetBool("HoldingObject", isHoldingObject);

        if (Input.GetMouseButtonDown(0))
        {

            if (itemInHand != null)
                ThrowObject();
        }

        if (!isClimbing && isGrounded)
        {
            // Movement input
            float moveInput = Input.GetAxisRaw("Horizontal");

            float speed = isSneaking ? sneakSpeed : walkSpeed;
            Vector3 velocity = new Vector3(moveInput * speed, rb.velocity.y, 0f);
            rb.velocity = velocity;

            // Flip character
            if (moveInput < 0)
                transform.rotation = Quaternion.Euler(0, 270, 0);
            else if (moveInput > 0)
                transform.rotation = Quaternion.Euler(0, 90, 0);

            animator.SetBool("IsWalking", moveInput != 0);
        }



        bool sneakInput = Input.GetKey(KeyCode.LeftShift);

        if (sneakInput)
        {
            isSneaking = true;
        }
        else
        {
            if (CanGetUp())
            {
                isSneaking = false;
            }
        }

        if (!isHoldingObject)
        {
            if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
            {
                isJumping = true;
                jumpTimer = 0f;
                animator.SetTrigger("Jump");

                // Nudge the player upward to avoid clipping
                transform.position += Vector3.up * 0.05f;
            }

        }

        // Animator parameters
        animator.SetBool("IsSneaking", isSneaking);
        animator.SetBool("IsClimbing", isClimbing);
        animator.SetBool("InAir", isGrounded);

    }

    private void FixedUpdate()
    {
        if (GameManager.Instance.GetGameState() == GameManager.GameState.Play)
        {
            isGrounded = Physics.CheckSphere(groundCheck.position, groundCheckRadius, groundLayer);

            float moveInput = Input.GetAxisRaw("Horizontal");
            float speed = isSneaking ? sneakSpeed : walkSpeed;

            float horizontalSpeed = isGrounded ? speed : speed * airControlMultiplier;

            Vector3 velocity = new Vector3(moveInput * horizontalSpeed, rb.velocity.y, 0f);

            if (isJumping)
            {
                    
                jumpTimer += Time.fixedDeltaTime;
                float normalizedTime = jumpTimer / jumpDuration;

                if (normalizedTime >= 1f)
                {
                    isJumping = false;
                }
                else
                {
                    float curveValue = jumpCurve.Evaluate(normalizedTime);
                    velocity.y = curveValue * jumpForce;
                }
            }

            rb.velocity = velocity;
        }
    }


    public void HoldObject(GameObject gameObject)
    {
        isHoldingObject = true;
        if (itemInHand != null)
        {
            itemInHand.transform.SetParent(null);
        }
        itemInHand = gameObject;
        itemInHand.transform.SetParent(HoldingSpot);
        itemInHand.transform.localPosition = Vector3.zero;
        itemInHand.transform.localRotation = Quaternion.identity;
        Rigidbody itemRb = itemInHand.GetComponent<Rigidbody>();
        Collider collider = itemInHand.GetComponent<Collider>();
        if (collider != null)
        {
            collider.enabled = false;
        }
        if (itemRb != null)
        {
            itemRb.isKinematic = true;

        }
    }
    public void ThrowObject()
    {
        if (itemInHand != null)
        {
            StartCoroutine(ThrowSequence());
        }
    }

    private bool CanGetUp()
    {
        // Check if space above is clear for standing
        return !Physics.Raycast(transform.position, Vector3.up, 1f, groundLayer);
    }

    public void ReturnToSpawn()
    {
        // Return the player to the spawn location
        transform.position = spawnLocation.position;
        transform.rotation = spawnLocation.rotation;
        rb.velocity = Vector3.zero; // Reset velocity
    }


    private IEnumerator ThrowSequence()
    {
        GameObject item = itemInHand;
        itemInHand = null;
        isHoldingObject = false;

        item.transform.SetParent(null);

        // Temporarily disable physics and collider
        Rigidbody itemRb = item.GetComponent<Rigidbody>();
        Collider itemCol = item.GetComponent<Collider>();
        if (itemRb != null) itemRb.isKinematic = true;
        if (itemCol != null) itemCol.enabled = false;

        // Move above player for lift-up animation
        Vector3 start = item.transform.position;
        Vector3 end = transform.position + Vector3.up * liftHeight;

        float elapsed = 0f;
        while (elapsed < liftDuration)
        {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / liftDuration);
            item.transform.position = Vector3.Lerp(start, end, t);
            yield return null;
        }

        // Aim toward mouse
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        Vector3 throwDirection = ray.direction;

        // Apply force
        if (itemRb != null)
        {
            itemRb.isKinematic = false;
            itemRb.AddForce(throwDirection.normalized * throwForce, ForceMode.Impulse);
        }

        // Enable collider again
        if (itemCol != null)
        {
            itemCol.enabled = true;
        }
    }

    void OnDrawGizmos()
    {
        if (itemInHand != null)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            Gizmos.color = Color.green;
            Gizmos.DrawRay(itemInHand.transform.position, ray.direction * 5f);
        }
    }

    private void OnDrawGizmosSelected()
    {
        if (groundCheck != null)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(groundCheck.position, groundCheckRadius);
        }
    }
}
