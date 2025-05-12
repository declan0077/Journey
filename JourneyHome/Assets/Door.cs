using System.Collections;
using UnityEngine;

public class Door : MonoBehaviour, IActivate
{
    [SerializeField] private Transform MovePositionObject;
    [SerializeField] private Vector3 MovePosition;
    [SerializeField] private float moveSpeed = 2f;

    private Vector3 originalPosition;
    private Coroutine moveCoroutine;

    private void Awake()
    {
        originalPosition = transform.position;
        MovePosition = MovePositionObject.transform.position;
    }

    public void StartActivate()
    {
        if (moveCoroutine != null)
            StopCoroutine(moveCoroutine);

        moveCoroutine = StartCoroutine(Open());
    }

    public void StopActivate()
    {
        if (moveCoroutine != null)
            StopCoroutine(moveCoroutine);

        moveCoroutine = StartCoroutine(Close());
    }

    private IEnumerator Open()
    {
        while (Vector3.Distance(transform.position, MovePosition) > 0.01f)
        {
            transform.position = Vector3.MoveTowards(transform.position, MovePosition, moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.position = MovePosition;
        StopActivate();
    }

    private IEnumerator Close()
    {
        while (Vector3.Distance(transform.position, originalPosition) > 0.01f)
        {
            transform.position = Vector3.MoveTowards(transform.position, originalPosition, moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.position = originalPosition;
    }
}
