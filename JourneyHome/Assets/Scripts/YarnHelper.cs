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
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;

    }

    void Start()
    {
        dialogueRunner = GetComponent<DialogueRunner>();
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

    public void SeenDialog()
    {
        dialogueRunner.StartDialogue("Seen");
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
