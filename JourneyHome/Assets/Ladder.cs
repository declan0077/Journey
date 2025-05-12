using System.Collections;
using UnityEngine;

public class Ladder : MonoBehaviour, IActivate
{
    [SerializeField] private float speed = 5f;
    [SerializeField] private Transform top;
    [SerializeField] private Transform bottom;

    private Transform playerTransform;
    private bool isClimbing = false;

    public void StartActivate()
    {
        if (playerTransform == null)
        {
            GameObject playerObj = GameObject.FindGameObjectWithTag("Player");
            if (playerObj != null)
                playerTransform = playerObj.transform;
            else
                return; // No player found
        }

        isClimbing = true;

        Vector3 toTop = top.position - playerTransform.position;
        Vector3 toBottom = bottom.position - playerTransform.position;

        Transform target = toTop.sqrMagnitude > toBottom.sqrMagnitude ? top : bottom;

        StartCoroutine(ClimbLadder(target));
    }

    private IEnumerator ClimbLadder(Transform target)
    {
        Rigidbody playerRb = playerTransform.GetComponent<Rigidbody>();
        if (playerRb != null)
            playerRb.isKinematic = true; // Disable physics while climbing

        while (isClimbing && Vector3.Distance(playerTransform.position, target.position) > 0.1f)
        {
            float step = speed * Time.deltaTime;
            playerTransform.position = Vector3.MoveTowards(playerTransform.position, target.position, step);
            yield return null;
        }

        playerTransform.position = target.position;

        if (playerRb != null)
            playerRb.isKinematic = false; // Re-enable physics

        isClimbing = false;
    }

    public void StopActivate()
    {
        isClimbing = false;
    }
}
