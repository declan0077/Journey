using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LiftParenter : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag("Player") || other.gameObject.CompareTag("Box"))
        {
            other.transform.SetParent(transform);
        }
    }
    private void OnTriggerExit(Collider other)
    {

        if (other.gameObject.CompareTag("Player") || other.gameObject.CompareTag("Box"))
        {
            other.transform.SetParent(null);
        }
    }
}
