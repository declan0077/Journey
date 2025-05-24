using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteraction : MonoBehaviour
{
    public float rayDistance = 2f;
    public LayerMask interactableLayer;
    [SerializeField] private Transform Eyes;
    private IActivate currentTarget = null;

    [SerializeField] private GameObject Visual;
    private void Start()
    {
        Visual.SetActive(false);
    }

    void Update()
    {
        float yRot = transform.eulerAngles.y;

        if (Mathf.Approximately(yRot, 270f))
        {
            Visual.transform.localRotation = Quaternion.Euler(0, 90, 0);
        }
        else if (Mathf.Approximately(yRot, 90f))
        {
            Visual.transform.localRotation = Quaternion.Euler(0, -90, 0); // still face forward
        }

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
                        Visual.SetActive(false);



                        currentTarget = activatable;
                        currentTarget.OnNear();
                    }

                }

                Visual.SetActive(true);

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
                Visual.SetActive(false);
                currentTarget.OnFar(); // Add this line
                currentTarget = null;
            }
        }


        Debug.DrawRay(Eyes.position, transform.forward * rayDistance, Color.yellow);
    }
}
