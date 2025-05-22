using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
}
