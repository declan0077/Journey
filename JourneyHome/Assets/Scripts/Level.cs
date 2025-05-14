using EasyTransition;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Transition.Instance.PlayTransistionIn();
            Debug.Log("Loading next level...");
        }
        else
        {

        }

    }


}
