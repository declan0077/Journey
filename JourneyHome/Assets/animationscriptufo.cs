using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class animationscriptufo : MonoBehaviour
{
    public GameObject Thing;
    public GameObject ThingTrue;
    public Animator animator;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Thing.SetActive(false);
            ThingTrue.SetActive(true);
            CameraFollow.Instance.SetTarget(this.transform);
            animator.Play("ufoAnimation");
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }
}
