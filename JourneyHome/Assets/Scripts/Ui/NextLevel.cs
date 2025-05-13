using EasyTransition;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextLevel : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
          StartCoroutine(LoadNextLevel());
            Debug.Log("Loading next level...");
        }
        IEnumerator LoadNextLevel()
        {
            Transition.Instance.PlayTransistionIn();
            yield return new WaitForSeconds(1f);
            Transition.Instance.PlayTransitionOut();
        }
    }
}
