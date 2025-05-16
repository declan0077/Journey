using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LightsOffGame : MonoBehaviour
{
    public GameObject buttonPrefab;
    public RectTransform gridParent;
    public int gridSize = 5;

    private Button[,] buttons;
    private bool[,] states;

    void Start()
    {
        buttons = new Button[gridSize, gridSize];
        states = new bool[gridSize, gridSize];

        GridLayoutGroup grid = gridParent.GetComponent<GridLayoutGroup>();
        if (grid != null)
        {
            // Calculate cell size based on panel size
            float spacing = grid.spacing.x; // Assume uniform spacing
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

                btn.onClick.AddListener(() => Toggle(ix, iy));
                states[x, y] = Random.value > 0.5f;
                UpdateButtonColor(x, y);
            }
        }
    }

    void Toggle(int x, int y)
    {
        ToggleSingle(x, y);
        ToggleSingle(x + 1, y);
        ToggleSingle(x - 1, y);
        ToggleSingle(x, y + 1);
        ToggleSingle(x, y - 1);

        if (CheckVictory())
        {
            Debug.Log("You win!");
        }
    }

    void ToggleSingle(int x, int y)
    {
        if (x >= 0 && x < gridSize && y >= 0 && y < gridSize)
        {
            states[x, y] = !states[x, y];
            UpdateButtonColor(x, y);
        }
    }

    void UpdateButtonColor(int x, int y)
    {
        Color c = states[x, y] ? Color.yellow : Color.black;
        buttons[x, y].GetComponent<Image>().color = c;

        TextMeshProUGUI tmp = buttons[x, y].GetComponentInChildren<TextMeshProUGUI>();
        if (tmp != null)
        {
            tmp.text = states[x, y] ? "ON" : "OFF";
        }
    }

    bool CheckVictory()
    {
        foreach (var state in states)
            if (state) return false;
        return true;
    }
}
