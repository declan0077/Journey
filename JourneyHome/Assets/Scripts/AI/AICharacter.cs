using System.Collections;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class AICharacter : MonoBehaviour
{
    [System.Serializable]
    public class PatrolPoint
    {
        public Transform point;
        public Vector3 faceDirection = Vector3.forward; // Default to forward
    }

    public PatrolPoint[] patrolPoints;
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
            transform.position = patrolPoints[0].point.position;
            currentPointIndex = 1 % patrolPoints.Length;
        }
    }

    private void Update()
    {
        if (isIdling || patrolPoints.Length < 2) return;

        Transform targetPoint = patrolPoints[currentPointIndex].point;
        Vector3 direction = targetPoint.position - transform.position;
        direction.y = 0f;
        float distance = direction.magnitude;

        //switch on state
        if (GameManager.Instance.GetGameState() == GameManager.GameState.Dialog)
        {
            return;
        }



        if (GameManager.Instance.GetGameState() == GameManager.GameState.Play)
        {
            if (distance < 0.1f)
            {
                StartCoroutine(IdleAndSwitchPoint());
            }
            else
            {
                animator.SetBool("IsWalking", true);
                transform.position += direction.normalized * speed * Time.deltaTime;

                // Optional: face movement direction
                if (direction != Vector3.zero)
                {
                    Quaternion lookRotation = Quaternion.LookRotation(direction);
                    transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
                }
            }
        }

      
    }

    private IEnumerator IdleAndSwitchPoint()
    {
        animator.SetBool("IsWalking", false);
        animator.SetBool("IsIdle", true);
        isIdling = true;

        yield return new WaitForSeconds(idleDuration);

        // Face the specified direction at the current patrol point
        PatrolPoint currentPatrolPoint = patrolPoints[currentPointIndex];
        if (currentPatrolPoint.faceDirection != Vector3.zero)
        {
            Vector3 flatDirection = new Vector3(
                currentPatrolPoint.faceDirection.x,
                0f,
                currentPatrolPoint.faceDirection.z
            );

            if (flatDirection != Vector3.zero)
            {
                Quaternion desiredRotation = Quaternion.LookRotation(flatDirection);
                transform.rotation = Quaternion.Euler(0, desiredRotation.eulerAngles.y, 0);
            }
        }


        // Move to next patrol point
        currentPointIndex = (currentPointIndex + 1) % patrolPoints.Length;
        isIdling = false;
        animator.SetBool("IsIdle", false);

    }

    private void OnDrawGizmosSelected()
    {
        if (patrolPoints != null && patrolPoints.Length > 1)
        {
            for (int i = 0; i < patrolPoints.Length; i++)
            {
                var patrolPoint = patrolPoints[i];
                if (patrolPoint.point == null) continue;

                // Draw patrol point
                Gizmos.color = Color.cyan;
                Gizmos.DrawSphere(patrolPoint.point.position, 0.2f);

                // Draw path line
                int nextIndex = (i + 1) % patrolPoints.Length;
                if (patrolPoints[nextIndex].point != null)
                {
                    Gizmos.DrawLine(patrolPoint.point.position, patrolPoints[nextIndex].point.position);
                }

                // Draw facing direction arrow
                Vector3 origin = patrolPoint.point.position + Vector3.up * 0.5f; // lift arrow for clarity
                Vector3 direction = patrolPoint.faceDirection.normalized * 0.8f;

            Gizmos.color = Color.yellow;
            Gizmos.DrawRay(origin, direction);

            }
        }
    }

}
