using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class CameraSight : MonoBehaviour
{
    public float viewDistance = 10f;
    public float angleOffset = 15f;
    public int numDirections = 3;
    public LayerMask targetMask;
    public LayerMask obstacleMask;

    [SerializeField] Transform Eyes;

    private LineRenderer lineRenderer;
    private List<Vector3> endpoints = new List<Vector3>();

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.positionCount = 0;
    }

    void Update()
    {
        if (Eyes == null) return;

        Vector3 origin = Eyes.position;
        Vector3 forward = Eyes.forward; // Use Eyes' actual facing direction

        if (numDirections < 1) return;
        if (numDirections % 2 == 0) numDirections++; // Ensure it's odd

        int half = numDirections / 2;
        endpoints.Clear();

        for (int i = -half; i <= half; i++)
        {
            float angle = i * angleOffset;
            Vector3 dir = Quaternion.Euler(0, angle, 0) * forward;
            Ray ray = new Ray(origin, dir);

            Vector3 endPoint = origin + dir * viewDistance;

            if (Physics.Raycast(ray, out RaycastHit hit, viewDistance))
            {
                endPoint = hit.point;

                if ((obstacleMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.DrawLine(origin, hit.point, Color.gray);
                }
                else if ((targetMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.Log("AI sees: " + hit.collider.name);
                    YarnHelper.Instance.SeenDialog(); // If YarnHelper is optional, add null check
                    Debug.DrawLine(origin, hit.point, Color.green);
                }
                else
                {
                    Debug.DrawLine(origin, hit.point, Color.yellow);
                }
            }
            else
            {
                Debug.DrawRay(origin, dir * viewDistance, Color.red);
            }

            endpoints.Add(endPoint);
        }

        UpdateLineRenderer();
    }

    private void UpdateLineRenderer()
    {
        if (lineRenderer == null || Eyes == null) return;

        int count = endpoints.Count + 2; // Eyes position + endpoints + back to eyes
        lineRenderer.positionCount = count;

        lineRenderer.SetPosition(0, Eyes.position);
        for (int i = 0; i < endpoints.Count; i++)
        {
            lineRenderer.SetPosition(i + 1, endpoints[i]);
        }
        lineRenderer.SetPosition(count - 1, Eyes.position); // Close the loop
    }

    private void OnDrawGizmosSelected()
    {
        if (Eyes == null) return;

        Vector3 origin = Eyes.position;
        Vector3 forward = Eyes.forward;

        if (numDirections < 1) return;
        if (numDirections % 2 == 0) numDirections++;

        int half = numDirections / 2;

        for (int i = -half; i <= half; i++)
        {
            float angle = i * angleOffset;
            Vector3 dir = Quaternion.Euler(0, angle, 0) * forward;
            Ray ray = new Ray(origin, dir);

            Vector3 endPoint = origin + dir * viewDistance;

            if (Physics.Raycast(ray, out RaycastHit hit, viewDistance))
            {
                endPoint = hit.point;

                if ((obstacleMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Gizmos.color = Color.gray;
                }
                else if ((targetMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Gizmos.color = Color.green;
                }
                else
                {
                    Gizmos.color = Color.yellow;
                }
            }
            else
            {
                Gizmos.color = Color.red;
            }

            Gizmos.DrawLine(origin, endPoint);
        }
    }
}
