using UnityEngine.Events;

public interface IMiniGame
{
    UnityEvent OnGameWin { get; }
    UnityEvent OnGameLose { get; }
    void StartGame();
    void CancelGame();
}