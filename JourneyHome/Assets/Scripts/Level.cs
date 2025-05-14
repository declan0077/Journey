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
            StartCoroutine(LoadNextLeveld());
            Debug.Log("Loading next level...");
        }
        else
        {

        }

    }

    IEnumerator LoadNextLeveld()
    {
        Transition.Instance.PlayTransistionIn();
        yield return new WaitForSeconds(1f);
        Transition.Instance.PlayTransitionOut();
    }
}
