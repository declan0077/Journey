using System.Collections;
using UnityEngine;

public class Elevator : MonoBehaviour, IActivate
{
    [SerializeField] private Transform Top;
    [SerializeField] private Transform Bottom;
    [SerializeField] private float moveSpeed = 1f;

    private bool isAtTop = false;
    private bool isMoving = false;

  [SerializeField] private GameObject computer;
    private Material original;
    [SerializeField] private Material outlineMaterial;

    private Renderer rend;

    private void Start()
    {
        rend = computer.GetComponent<Renderer>();
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
        if (!isMoving)
        {
            StartCoroutine(MoveElevator());
        }
    }

    public void StopActivate()
    {
        // Optional: Add behavior for stopping the elevator
    }

    private IEnumerator MoveElevator()
    {
        isMoving = true;
        Transform target = isAtTop ? Bottom : Top;

        while (Vector3.Distance(transform.position, target.position) > 0.05f)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.position, moveSpeed * Time.deltaTime);
            yield return null;
        }

        transform.position = target.position; // Snap to final position
        isAtTop = !isAtTop;
        isMoving = false;
    }
}
