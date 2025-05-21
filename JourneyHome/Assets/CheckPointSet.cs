using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPointSet : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerController playerController = other.GetComponent<PlayerController>();
            if (playerController != null)
            {
                playerController.spawnLocation.position = transform.position;
                Debug.Log("Checkpoint set!");
            }
        }
    }
}
