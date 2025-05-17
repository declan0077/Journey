using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pusher : MonoBehaviour, IActivate
{
    [SerializeField] private Transform column; // Object to move
    [SerializeField] private Transform moveUpLocation; // Target location
    [SerializeField] private float pushDuration = 1.0f; // Time taken to move

    private Vector3 originalPosition;

    private void Awake()
    {
        if (column != null)
        {
            originalPosition = column.position;
        }
    }

    public void OnFar()
    {
        StartCoroutine(ReturnToStart());
    }

    public void OnNear()
    {
        StartActivate();
    }

    public void StartActivate()
    {
        StopAllCoroutines(); 
        StartCoroutine(Push());
    }

    private IEnumerator Push()
    {
        Vector3 startPos = column.position;
        Vector3 endPos = moveUpLocation.position;
        float elapsed = 0f;

        while (elapsed < pushDuration)
        {
            column.position = Vector3.Lerp(startPos, endPos, elapsed / pushDuration);
            elapsed += Time.deltaTime;
            yield return null;
        }

        column.position = endPos; 
    }

    public void StopActivate()
    {
        StopAllCoroutines();
    }

    private IEnumerator ReturnToStart()
    {
        Vector3 startPos = column.position;
        Vector3 endPos = originalPosition;
        float elapsed = 0f;

        while (elapsed < pushDuration)
        {
            column.position = Vector3.Lerp(startPos, endPos, elapsed / pushDuration);
            elapsed += Time.deltaTime;
            yield return null;
        }

        column.position = endPos;
    }
}
