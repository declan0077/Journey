using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;

public class SimonSaysGame : MonoBehaviour, IMiniGame
{
    [SerializeField] private GameObject buttonPrefab;
    [SerializeField] private RectTransform gridParent;
    [SerializeField] private int gridSize = 3;
    [SerializeField] private float flashDuration = 0.5f;
    [SerializeField] private float timeBetweenFlashes = 0.3f;

    [SerializeField] private AudioClip buttonClickSound;

    public int maxRounds = 5;

    public UnityEvent OnGameWin { get; } = new UnityEvent();
    public UnityEvent OnGameLose { get; } = new UnityEvent();

    private Button[,] buttons;
    private TextMeshProUGUI[,] buttonTexts;

    private List<Vector2Int> sequence = new List<Vector2Int>();
    private int playerIndex = 0;
    private bool playerTurn = false;

    private bool gameActive = false;

    void Start()
    {
        SetupGrid();
    }

    void SetupGrid()
    {
        buttons = new Button[gridSize, gridSize];
        buttonTexts = new TextMeshProUGUI[gridSize, gridSize];

        GridLayoutGroup grid = gridParent.GetComponent<GridLayoutGroup>();
        if (grid != null)
        {
            float spacing = grid.spacing.x;
            float totalSpacing = spacing * (gridSize - 1);
            float cellWidth = (gridParent.rect.width - totalSpacing) / gridSize;
            float cellHeight = (gridParent.rect.height - totalSpacing) / gridSize;

            grid.constraint = GridLayoutGroup.Constraint.FixedColumnCount;
            grid.constraintCount = gridSize;
            grid.cellSize = new Vector2(cellWidth, cellHeight);
        }

        for (int x = 0; x < gridSize; x++)
        {
            for (int y = 0; y < gridSize; y++)
            {
                int ix = x, iy = y;
                GameObject obj = Instantiate(buttonPrefab, gridParent);
                Button btn = obj.GetComponent<Button>();
                buttons[x, y] = btn;
                buttonTexts[x, y] = btn.GetComponentInChildren<TextMeshProUGUI>();

                btn.onClick.AddListener(() => OnButtonPressed(ix, iy));

                ResetButtonColor(x, y);
                buttonTexts[x, y].text = ""; // Optional
            }
        }
    }

    public void StartGame()
    {
        gameActive = true;
        StartCoroutine(StartGameRoutine());
    }

    IEnumerator StartGameRoutine()
    {
        yield return new WaitForSeconds(1f);
        sequence.Clear();
        AddToSequence();
        yield return PlaySequence();
        playerTurn = true;
        playerIndex = 0;
    }

    void AddToSequence()
    {
        int x = Random.Range(0, gridSize);
        int y = Random.Range(0, gridSize);
        sequence.Add(new Vector2Int(x, y));
    }

    IEnumerator PlaySequence()
    {
        playerTurn = false;

        for (int i = 0; i < sequence.Count; i++)
        {   
            Vector2Int pos = sequence[i];
            yield return FlashButton(pos.x, pos.y);
            yield return new WaitForSeconds(timeBetweenFlashes);
        }
    }

    IEnumerator FlashButton(int x, int y)
    {
        SoundPlayer.Instance.PlaySound(buttonClickSound);
        buttons[x, y].GetComponent<Image>().color = Color.yellow;
        yield return new WaitForSeconds(flashDuration);
        ResetButtonColor(x, y);
    }

    void ResetButtonColor(int x, int y)
    {
        buttons[x, y].GetComponent<Image>().color = Color.black;
    }

    void OnButtonPressed(int x, int y)
    {
        if (!playerTurn || !gameActive) return;

        StartCoroutine(FlashButton(x, y));

        if (sequence[playerIndex].x == x && sequence[playerIndex].y == y)
        {
            playerIndex++;

            if (playerIndex >= sequence.Count)
            {
                // Player completed the round
                if (sequence.Count >= maxRounds)
                {
                    GameWin();
                }
                else
                {
                    AddToSequence();
                    StartCoroutine(NextRound());
                }
            }
        }
        else
        {
            GameLose();
        }
    }

    IEnumerator NextRound()
    {
        yield return new WaitForSeconds(1f);
        yield return PlaySequence();
        playerTurn = true;
        playerIndex = 0;
    }

    public void CancelGame()
    {
        if (!gameActive) return;

        Debug.Log("Simon Says Cancelled");
        gameActive = false;
        OnGameLose.Invoke();
        Destroy(gameObject);
    }

    private void GameWin()
    {
        Debug.Log("Simon Says Win!");
        gameActive = false;
        OnGameWin.Invoke();
        Destroy(gameObject);
    }

    private void GameLose()
    {
        Debug.Log("Simon Says Lost!");
        gameActive = false;
        OnGameLose.Invoke();
        Destroy(gameObject);
    }
}
