using UnityEngine;

public class AISight : MonoBehaviour
{
    public float viewDistance = 10f;
    public float angleOffset = 15f;
    public int numDirections = 3; 
    public LayerMask targetMask;
    public LayerMask obstacleMask;

    [SerializeField] Transform Eyes;

    void Update()
    {
        Vector3 origin = Eyes.position;
        Vector3 forward = transform.forward;

        if (numDirections < 1) return;
        if (numDirections % 2 == 0) numDirections++; 

        int half = numDirections / 2;

        for (int i = -half; i <= half; i++)
        {
            float angle = i * angleOffset;
            Vector3 dir = Quaternion.Euler(0, 0, angle) * forward;

            Ray ray = new Ray(origin, dir);
            if (Physics.Raycast(ray, out RaycastHit hit, viewDistance))
            {
                if ((obstacleMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.DrawLine(origin, hit.point, Color.gray);
                    continue;
                }

                if ((targetMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.Log("AI sees: " + hit.collider.name);
                    Debug.DrawLine(origin, hit.point, Color.green);
                    continue;
                }

                Debug.DrawLine(origin, hit.point, Color.yellow);
            }
            else
            {
                Debug.DrawRay(origin, dir * viewDistance, Color.red);
            }
        }
    }
}
