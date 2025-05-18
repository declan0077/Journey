using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Elevator : MonoBehaviour, IActivate
{
    [SerializeField] private Transform Top;
    [SerializeField] private Transform Bottom;

    [SerializeField] private  float moveSpeed = 1f;

    public void OnFar()
    {
        throw new System.NotImplementedException();
    }

    public void OnNear()
    {
        throw new System.NotImplementedException();
    }

    public void StartActivate()
    {
               StartCoroutine(MoveElevator());
    }

    public void StopActivate()
    {
        throw new System.NotImplementedException();
    }


    IEnumerator MoveElevator()
    {
        while (Vector3.Distance(transform.position, Top.position) > 0.1f)
        {
            transform.position = Vector3.MoveTowards(transform.position, Top.position, moveSpeed * Time.deltaTime);
            yield return null;
        }
        while (Vector3.Distance(transform.position, Bottom.position) > 0.1f)
        {
            transform.position = Vector3.MoveTowards(transform.position, Bottom.position, moveSpeed * Time.deltaTime);
            yield return null;
        }

    }
}