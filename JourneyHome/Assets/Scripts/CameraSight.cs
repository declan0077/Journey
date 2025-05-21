using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class CameraSight : MonoBehaviour
{
    [Header("Vision Settings")]
    public float viewDistance = 10f;
    public float angleOffset = 15f;
    public int numDirections = 3;
    public LayerMask targetMask;
    public LayerMask obstacleMask;

    [Header("Rotation Settings")]
    [SerializeField] private Transform Eyes;
    [SerializeField] private float rotationSpeed = 2f;
    [SerializeField] private float lookThreshold = 1f;

    [Header("Looking Targets")]
    [SerializeField] private bool canLook;
    [SerializeField] private Transform look1;
    [SerializeField] private Transform look2;

    private Transform currentLookTarget;
    private bool lookingAtFirst = true;

    private LineRenderer lineRenderer;
    private List<Vector3> endpoints = new List<Vector3>();

    public bool isActive = true;

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.positionCount = 0;

        if (canLook && look1 != null && look2 != null)
        {
            currentLookTarget = look1;
        }
    }

    void Update()
    {
        if (!isActive || Eyes == null) return;

        if (canLook && look1 != null && look2 != null)
        {
            RotateEyesBetweenTargets();
        }

        DrawVisionCone();
    }

    private void RotateEyesBetweenTargets()
    {
        Vector3 directionToTarget = currentLookTarget.position - Eyes.position;
        Quaternion lookRotation = Quaternion.LookRotation(directionToTarget, Vector3.up);
        Eyes.rotation = Quaternion.RotateTowards(Eyes.rotation, lookRotation, rotationSpeed * Time.deltaTime);

        float angleDifference = Quaternion.Angle(Eyes.rotation, lookRotation);
        if (angleDifference < lookThreshold)
        {
            lookingAtFirst = !lookingAtFirst;
            currentLookTarget = lookingAtFirst ? look1 : look2;
        }
    }
    private void DrawVisionCone()
    {
        Vector3 origin = Eyes.position;
        Vector3 forward = Eyes.forward;

        if (numDirections < 1) return;
        if (numDirections % 2 == 0) numDirections++; // Ensure odd count

        int half = numDirections / 2;
        endpoints.Clear();

        for (int i = -half; i <= half; i++)
        {
            float angle = i * angleOffset;
            Vector3 dir = Quaternion.Euler(0, angle, 0) * forward;
            Ray ray = new Ray(origin, dir);

            RaycastHit[] hits = Physics.RaycastAll(ray, viewDistance);
            System.Array.Sort(hits, (a, b) => a.distance.CompareTo(b.distance)); // Sort by distance

            Vector3 endPoint = origin + dir * viewDistance;
            bool hitObstacle = false;

            foreach (var hit in hits)
            {
                int layer = hit.collider.gameObject.layer;

                if ((obstacleMask.value & (1 << layer)) != 0)
                {
                    endPoint = hit.point;
                    Debug.DrawLine(origin, endPoint, Color.gray);
                    hitObstacle = true;
                    break; // Vision blocked
                }
                else if ((targetMask.value & (1 << layer)) != 0)
                {
                    Debug.Log("AI sees: " + hit.collider.name);
                    if (YarnHelper.Instance != null)
                        YarnHelper.Instance.Restart();

                    Debug.DrawLine(origin, hit.point, Color.green);
                    // Don't break — keep going to check for obstacles
                }
                else
                {
                    Debug.DrawLine(origin, hit.point, Color.yellow);
                    // Unimportant object, ignore
                }
            }

            if (!hitObstacle)
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

        int count = endpoints.Count + 2;
        lineRenderer.positionCount = count;

        lineRenderer.SetPosition(0, Eyes.position);
        for (int i = 0; i < endpoints.Count; i++)
        {
            lineRenderer.SetPosition(i + 1, endpoints[i]);
        }
        lineRenderer.SetPosition(count - 1, Eyes.position);
    }

    public void SetActive(bool active)
    {
        isActive = active;
        if (lineRenderer != null)
        {
            lineRenderer.enabled = active;
        }
    }

    public void SetLookTargets(Transform target1, Transform target2)
    {
        look1 = target1;
        look2 = target2;
        currentLookTarget = look1;
        canLook = true;
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
