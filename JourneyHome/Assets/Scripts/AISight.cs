using UnityEngine;

public class AISight : MonoBehaviour
{
    public float viewDistance = 10f;
    public float angleOffset = 15f;
    public LayerMask targetMask;     
    public LayerMask obstacleMask;   

    [SerializeField] Transform Eyes;

    void Update()
    {
        Vector3 origin = Eyes.position;
        Vector3 forward = transform.forward;


        Vector3[] directions = new Vector3[3];
        directions[0] = Quaternion.Euler(0, 0, 0) * forward;
        directions[1] = Quaternion.Euler(0, 0, angleOffset) * forward;
        directions[2] = Quaternion.Euler(0, 0, -angleOffset) * forward;

        foreach (Vector3 dir in directions)
        {
            Ray ray = new Ray(origin, dir);
            if (Physics.Raycast(ray, out RaycastHit hit, viewDistance))
            {
                // Check for obstacle block
                if ((obstacleMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.DrawLine(origin, hit.point, Color.gray); // Blocked
                    continue;
                }

                // Check if target is hit
                if ((targetMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.Log("AI sees: " + hit.collider.name);
                    Debug.DrawLine(origin, hit.point, Color.green);
                    continue;
                }

                // Hit something else (neutral)
                Debug.DrawLine(origin, hit.point, Color.yellow);
            }
            else
            {
                Debug.DrawRay(origin, dir * viewDistance, Color.red); // Nothing hit
            }
        }
    }
}
