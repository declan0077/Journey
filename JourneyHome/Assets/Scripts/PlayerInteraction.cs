using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteraction : MonoBehaviour
{
    public float rayDistance = 2f;
    public LayerMask interactableLayer;
    [SerializeField] private Transform Eyes;

    void Update()
    {
        RaycastHit hit;
        Ray ray = new Ray(Eyes.position, transform.forward); 

        // Check if the ray hits anything within rayDistance and is a interactableLayer
        if (Physics.Raycast(ray, out hit, rayDistance, interactableLayer))
        {
            IActivate activatable = hit.collider.GetComponent<IActivate>();

            if (activatable != null)
            {
                Debug.Log("Found an activatable object!");

                if (Input.GetKeyDown(KeyCode.E))
                {
                    activatable.StartActivate();
                }
            }
        }

        
        Debug.DrawRay(Eyes.position, transform.forward * rayDistance, Color.yellow);
    }
}
