using EasyTransition;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class YarnHelper : MonoBehaviour
{
    public static YarnHelper Instance { get; private set; }

    private DialogueRunner dialogueRunner;

    void Awake()
    {

        Instance = this;
        dialogueRunner = GetComponent<DialogueRunner>();


    }

    void Start()
    {
        dialogueRunner.AddCommandHandler<string>("CameraSwitch", CameraSwitch);
        dialogueRunner.AddCommandHandler("Restart", Restart);
            dialogueRunner.AddCommandHandler<string>("SetGamemode", SetGamemode);
    }
    public void CameraSwitch(string targetName)
    {
        GameObject targetObject = GameObject.Find(targetName);

        if (targetObject == null)
        {
            Debug.LogWarning($"CameraSwitch: No GameObject found with name '{targetName}'");
            return;
        }

        Debug.Log($"CameraSwitch: Moving camera to {targetObject.name}");
        CameraFollow.Instance.SetTarget(targetObject.transform);
    }

    public void SeenDialog(string guardName)
    {
        dialogueRunner.StartDialogue($"Seen_{guardName}");
    }



    public void Restart()
    {
        Transition.Instance.PlayTransitionOut();
        FindObjectOfType<PlayerController>().ReturnToSpawn();
    }

    public void SetGamemode(string gamemode)
    {
        Debug.Log("Setting gamemode to: " + gamemode);
        GameManager.Instance.SetGameState((GameManager.GameState)System.Enum.Parse(typeof(GameManager.GameState), gamemode));
    }

}
