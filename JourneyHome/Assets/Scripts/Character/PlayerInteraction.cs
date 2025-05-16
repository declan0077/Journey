using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteraction : MonoBehaviour
{
    public float rayDistance = 2f;
    public LayerMask interactableLayer;
    [SerializeField] private Transform Eyes;
    private IActivate currentTarget = null;

    void Update()
    {
        RaycastHit hit;
        Ray ray = new Ray(Eyes.position, transform.forward);

        if (Physics.Raycast(ray, out hit, rayDistance, interactableLayer))
        {
            IActivate activatable = hit.collider.GetComponent<IActivate>();

            if (activatable != null)
            {

                if (currentTarget != activatable)
                {
                    if (currentTarget != activatable)
                    {
                        if (currentTarget != null)
                            currentTarget.OnFar(); 

                        currentTarget = activatable;
                        currentTarget.OnNear();
                    }

                }

                if (Input.GetKeyDown(KeyCode.E))
                {
                    activatable.StartActivate();
                }
            }
        }
        else
        {
            if (currentTarget != null)
            {
                currentTarget.OnFar(); // Add this line
                currentTarget = null;
            }
        }


        Debug.DrawRay(Eyes.position, transform.forward * rayDistance, Color.yellow);
    }
}
