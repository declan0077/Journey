using System.Collections;
using UnityEngine;

public class PowerSupply : MonoBehaviour
{
    [SerializeField] private bool Lock1 = false;
    [SerializeField] private bool Lock2 = false;
    [SerializeField] private Transform Rod;
    [SerializeField] private float rotationDuration = 1.0f;
    [SerializeField] private GameObject objectToSpawn;
    [SerializeField] private Transform spawnLocation;

    [SerializeField] private GameObject[] lightsObjects;


    private bool rodSwitchedUp = false;
    private Coroutine rotationCoroutine;

    public void SetLock1() => Lock1 = !Lock1;
    public void SetLock2() => Lock2 = !Lock2;

    private void Update()
    {
        if (Lock1 && Lock2 && !rodSwitchedUp)
        {
          
            rotationCoroutine = StartCoroutine(RotateRod(-100f, () =>
            {
                rodSwitchedUp = true;
                SpawnObject();
                for (int i = 0; i < lightsObjects.Length; i++)
                {
                    lightsObjects[i].SetActive(false);
                }
            }));
        }
        else if ((!Lock1 || !Lock2) && rodSwitchedUp)
        {
            if (rotationCoroutine != null) StopCoroutine(rotationCoroutine);
            rotationCoroutine = StartCoroutine(RotateRod(0f, () =>
            {
                rodSwitchedUp = false;
            }));
        }
    }

    private IEnumerator RotateRod(float targetX, System.Action onComplete)
    {
        float elapsed = 0f;
        float startX = Rod.localEulerAngles.x;
        float endX = targetX;
        if (Mathf.Abs(endX - startX) > 180f)
        {
            if (endX > startX) startX += 360f;
            else endX += 360f;
        }
        while (elapsed < rotationDuration)
        {
            float x = Mathf.Lerp(startX, endX, elapsed / rotationDuration);
            Vector3 euler = Rod.localEulerAngles;
            euler.x = x;
            Rod.localEulerAngles = euler;
            elapsed += Time.deltaTime;
            yield return null;
        }
        Vector3 finalEuler = Rod.localEulerAngles;
        finalEuler.x = endX;
        Rod.localEulerAngles = finalEuler;
        onComplete?.Invoke();
    }

    private void SpawnObject()
    {
        if (objectToSpawn != null && spawnLocation != null)
            Instantiate(objectToSpawn, spawnLocation.position, spawnLocation.rotation);
    }
}
