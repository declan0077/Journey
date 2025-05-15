using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PressurePad : MonoBehaviour
{
    public UnityEvent onPress;
    public UnityEvent onRelease;

    public float checkRadius = 0.5f;
    public float checkHeight = 1.0f;
    public LayerMask detectionLayer;

    private bool isPressed = false;

   [SerializeField] private Vector3 offset;
    private void Update()
    {
        Vector3 center = transform.position  + offset + Vector3.up * checkHeight;
        Collider[] hits = Physics.OverlapSphere(center, checkRadius, detectionLayer);

        bool detected = false;
        foreach (Collider hit in hits)
        {
            if (hit.CompareTag("Player") || hit.CompareTag("Box"))
            {
                detected = true;
                break;
            }
        }

        if (detected && !isPressed)
        {
            isPressed = true;
            Debug.Log("Pressed");
            onPress.Invoke();
        }
        else if (!detected && isPressed)
        {
            isPressed = false;
            Debug.Log("Released");
            onRelease.Invoke();
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.green;
        Vector3 center = transform.position + offset + Vector3.up * checkHeight;
        Gizmos.DrawWireSphere(center, checkRadius);
    }
}
