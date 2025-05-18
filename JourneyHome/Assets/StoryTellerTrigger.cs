using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class StoryTellerTrigger : MonoBehaviour
{

    [SerializeField] private DialogueRunner DialogueRunner;
    [SerializeField] private string StoryDialogue = "";


    private void Start()
    {
        DialogueRunner = FindAnyObjectByType<DialogueRunner>();
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            DialogueRunner.StartDialogue(StoryDialogue);
            Destroy(gameObject);
        }
    }

}