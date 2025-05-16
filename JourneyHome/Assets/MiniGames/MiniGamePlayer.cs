using UnityEngine;
using UnityEngine.Events;

public class MiniGamePlayer : MonoBehaviour, IActivate
{
    public GameObject MiniGamePrefab;
    public Transform MiniGameCanvasParent;

    public UnityEvent GameWon;
    public UnityEvent GameLost;

    private GameObject currentMiniGame;
    private IMiniGame miniGameScript;

    private Material original;
    [SerializeField] private Material outlineMaterial;

    private Renderer rend;

    private void Start()
    {
        rend = GetComponent<Renderer>();
        original = rend.material;
    }
    public void OnNear()
    {
        if (rend != null && outlineMaterial != null)
        {
            rend.material = outlineMaterial;
        }
    }

    public void OnFar()
    {
        if (rend != null && original != null)
        {
            rend.material = original;
        }
    }

    public void StartActivate()
    {
        if (currentMiniGame != null) return;

        currentMiniGame = Instantiate(MiniGamePrefab);
        miniGameScript = currentMiniGame.GetComponent<IMiniGame>();

        if (miniGameScript != null)
        {
            miniGameScript.OnGameWin.AddListener(OnGameWon);
            miniGameScript.OnGameLose.AddListener(OnGameLost);
            miniGameScript.StartGame();
        }
        else
        {
            Debug.LogError("MiniGamePrefab does not implement IMiniGame.");
        }
    }

    public void StopActivate()
    {
        if (miniGameScript != null)
        {
            miniGameScript.CancelGame();
        }
    }

    private void OnGameWon()
    {
        GameWon.Invoke();
        CleanUp();
    }

    private void OnGameLost()
    {
        GameLost.Invoke();
        CleanUp();
    }

    private void CleanUp()
    {
        if (currentMiniGame != null)
            Destroy(currentMiniGame);

        currentMiniGame = null;
        miniGameScript = null;
    }
}
