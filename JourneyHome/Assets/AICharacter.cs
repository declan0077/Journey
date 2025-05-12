using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class AICharacter : MonoBehaviour
{
    public Transform[] patrolPoints;  // Array of patrol points
    public float speed = 2f;
    public float idleDuration = 2f;

    private Animator animator;
    private int currentPointIndex = 0;
    private bool isIdling = false;

    private void Start()
    {
        animator = GetComponent<Animator>();

        if (patrolPoints.Length > 0)
        {
            transform.position = patrolPoints[0].position; // Optional: start at first point
            currentPointIndex = 1 % patrolPoints.Length;   // Start heading to the second point
        }
    }

    private void Update()
    {
        if (isIdling || patrolPoints.Length < 2) return;

        Transform targetPoint = patrolPoints[currentPointIndex];
        Vector3 direction = targetPoint.position - transform.position;
        direction.y = 0f;
        float distance = direction.magnitude;

        if (distance < 0.1f)
        {
            StartCoroutine(IdleAndSwitchPoint());
        }
        else
        {
            animator.SetBool("IsWalking", true);
            transform.position += direction.normalized * speed * Time.deltaTime;

        }
    }

    private IEnumerator IdleAndSwitchPoint()
    {
        animator.SetBool("IsWalking", false);
        isIdling = true;

        yield return new WaitForSeconds(idleDuration);

        int nextPointIndex = (currentPointIndex + 1) % patrolPoints.Length;
        Transform nextTarget = patrolPoints[nextPointIndex];

        float moveDir = Mathf.Sign(nextTarget.position.x - transform.position.x);
        if (moveDir != 0f)
        {
            float currentYRotation = transform.eulerAngles.y;

            if ((moveDir > 0 && currentYRotation != 0f) || (moveDir < 0 && currentYRotation != 180f))
            {
                float newYRotation = (currentYRotation + 180f) % 360f;
                transform.rotation = Quaternion.Euler(0, newYRotation, 0);
            }
        }

        currentPointIndex = nextPointIndex;
        isIdling = false;
    }


    private void OnDrawGizmosSelected()
    {
        if (patrolPoints != null && patrolPoints.Length > 1)
        {
            Gizmos.color = Color.cyan;
            for (int i = 0; i < patrolPoints.Length; i++)
            {
                Gizmos.DrawSphere(patrolPoints[i].position, 0.2f);

                int nextIndex = (i + 1) % patrolPoints.Length;
                Gizmos.DrawLine(patrolPoints[i].position, patrolPoints[nextIndex].position);
            }
        }
    }
}
