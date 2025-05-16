using System.Collections;
using UnityEngine;

public class Door : MonoBehaviour, IActivate
{
    [SerializeField] private Transform MovePositionObject;
    [SerializeField] private float moveSpeed = 2f;
    [SerializeField] private float closeDelay = 3f; // Time before auto-closing

    private Vector3 originalPosition;
    private Vector3 movePosition;
    private Coroutine moveCoroutine;

    private bool isOpen = false;
    private bool isMoving = false;

    private void Awake()
    {
        originalPosition = transform.position;
        movePosition = MovePositionObject.position;
    }

    public void StartActivate()
    {
        if (isMoving) return;

        if (!isOpen)
        {
            if (moveCoroutine != null)
                StopCoroutine(moveCoroutine);

            moveCoroutine = StartCoroutine(Open());
        }
        else
        {
            if (moveCoroutine != null)
                StopCoroutine(moveCoroutine);

            moveCoroutine = StartCoroutine(Close());
        }
    }

    public void StopActivate()
    {
    }

    private IEnumerator Open()
    {
        isMoving = true;
        while (Vector3.Distance(transform.position, movePosition) > 0.01f)
        {
            transform.position = Vector3.MoveTowards(transform.position, movePosition, moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.position = movePosition;
        isOpen = true;
        isMoving = false;

        // Wait before auto-closing
        yield return new WaitForSeconds(closeDelay);

        // Start closing only if it's still open and not already moving
        if (isOpen && !isMoving)
        {
            moveCoroutine = StartCoroutine(Close());
        }
    }

    private IEnumerator Close()
    {
        isMoving = true;
        while (Vector3.Distance(transform.position, originalPosition) > 0.01f)
        {
            transform.position = Vector3.MoveTowards(transform.position, originalPosition, moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.position = originalPosition;
        isOpen = false;
        isMoving = false;
    }

    public void OnNear()
    {
        // Optional: highlight the door or show UI
    }
}
