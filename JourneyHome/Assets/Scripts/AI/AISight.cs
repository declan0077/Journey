using UnityEngine;
using System.Collections.Generic;

[RequireComponent(typeof(LineRenderer))]
public class AISight : MonoBehaviour
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

        if (IsFacingAllowedDirection())
        {
            lineRenderer.enabled = true;
            UpdateLineRenderer();
        }
        else
        {
            lineRenderer.enabled = false;
        }

        Vector3 origin = Eyes.position;
        Vector3 forward = transform.forward;

        if (numDirections < 1) return;
        if (numDirections % 2 == 0) numDirections++;

        int half = numDirections / 2;

        endpoints.Clear();

        for (int i = -half; i <= half; i++)
        {
            float angle = i * angleOffset;
            Vector3 dir = Quaternion.Euler(0, 0, angle) * forward;
            Ray ray = new Ray(origin, dir);

            Vector3 endPoint = origin + dir * viewDistance;

            if (Physics.Raycast(ray, out RaycastHit hit, viewDistance))
            {
                endPoint = hit.point;

                // Debug color visualization
                if ((obstacleMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.DrawLine(origin, hit.point, Color.gray);
                }
                else if ((targetMask.value & (1 << hit.collider.gameObject.layer)) > 0)
                {
                    Debug.Log("AI sees: " + hit.collider.name);
                    YarnHelper.Instance.SeenDialog();
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
    private bool IsFacingAllowedDirection()
    {
        float yRotation = transform.eulerAngles.y;

        bool near90 = Mathf.Abs(Mathf.DeltaAngle(yRotation, 90f)) <= 10f;
        bool near270 = Mathf.Abs(Mathf.DeltaAngle(yRotation, 270f)) <= 10f;

        return near90 || near270;
    }

    private void UpdateLineRenderer()
    {
        if (lineRenderer == null || Eyes == null) return;

        int count = endpoints.Count + 2; // Eyes position + endpoints + back to eyes
        lineRenderer.positionCount = count;

        // Start at the eye
        lineRenderer.SetPosition(0, Eyes.position);

        // Connect all endpoints
        for (int i = 0; i < endpoints.Count; i++)
        {
            lineRenderer.SetPosition(i + 1, endpoints[i]);
        }

        // Close the shape back to the eye position
        lineRenderer.SetPosition(count - 1, Eyes.position);
    }

    private void OnDrawGizmosSelected()
    {
        if (Eyes == null) return;

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
