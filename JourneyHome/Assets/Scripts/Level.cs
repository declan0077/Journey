using EasyTransition;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Level : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Transition.Instance.PlayTransistionIn();
            Debug.Log("Loading next level...");
            StartCoroutine(LoadNextLevelAfterTransition());
        }


    }

    public void NextLevel()
    {
        Transition.Instance.PlayTransistionIn();
        Debug.Log("Loading next level...");
        StartCoroutine(LoadNextLevelAfterTransition());
    }
    public void LevelSelect(int level)
    {
        Transition.Instance.PlayTransistionIn();
        Debug.Log("Loading next level...");
        SceneManager.LoadScene(level);

    }
    private IEnumerator LoadNextLevelAfterTransition()
    {
        // Wait for the transition duration (replace with actual duration if known)
        yield return new WaitForSeconds(1);

        int nextSceneIndex = SceneManager.GetActiveScene().buildIndex + 1;
        if (nextSceneIndex < SceneManager.sceneCountInBuildSettings)
        {
            SceneManager.LoadScene(nextSceneIndex);
        }
        else
        {
            Debug.Log("No more levels to load.");
        }
    }
}
