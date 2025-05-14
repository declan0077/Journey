using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    // Singleton instance
    public static GameManager Instance { get; private set; }

    public enum GameState
    {
        Play,
        Dialog
    }

    [SerializeField]
    private GameState currentState = GameState.Dialog;

    private void Awake()
    {
        // Ensure only one instance exists
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
    }

    public void SetGameState(GameState state)
    {
        currentState = state;
        Debug.Log("Game state changed to: " + currentState);
    }

    public GameState GetGameState()
    {
        return currentState;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            SetGameState(GameState.Play);
        }

    }
}
