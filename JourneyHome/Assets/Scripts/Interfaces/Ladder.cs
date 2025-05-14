using System.Collections;
using UnityEngine;

public class Ladder : MonoBehaviour, IActivate
{
    [SerializeField] private float speed = 5f;
    [SerializeField] private Transform top;
    [SerializeField] private Transform bottom;
    [SerializeField] private Vector3 offset = new Vector3(0, 0, 0);


    [SerializeField] private float DelayTime = 0.5f;

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

        bool closerToTop = toTop.sqrMagnitude < toBottom.sqrMagnitude;

        Transform startPoint = closerToTop ? top : bottom;
        Transform endPoint = closerToTop ? bottom : top;

        StartCoroutine(ClimbLadder(startPoint, endPoint));
    }

    private IEnumerator ClimbLadder(Transform startPoint, Transform endPoint)
    {
        Rigidbody playerRb = playerTransform.GetComponent<Rigidbody>();
        PlayerController player = playerTransform.GetComponent<PlayerController>();
        Transform modelTransform = player.model;

        if (playerRb != null)
            playerRb.isKinematic = true;

        player.isClimbing = true;

        Quaternion originalRotation = playerTransform.rotation;
        Quaternion originalModelRotation = modelTransform.rotation;

        modelTransform.rotation = Quaternion.Euler(0, 90, 0); // Face ladder otherwise it faces the wrong way round

        // Move to start point first
        while (isClimbing && Vector3.Distance(playerTransform.position, startPoint.position) > 0.1f)
        {
            float step = speed * Time.deltaTime;
            playerTransform.position = Vector3.MoveTowards(playerTransform.position, startPoint.position, step);
            playerTransform.rotation = originalRotation;
            yield return null;
        }

        yield return new WaitForSeconds(DelayTime); 

        // Then move from start to end
        while (isClimbing && Vector3.Distance(playerTransform.position, endPoint.position) > 0.1f)
        {
            float step = speed * Time.deltaTime;
            playerTransform.position = Vector3.MoveTowards(playerTransform.position, endPoint.position, step);
            playerTransform.rotation = originalRotation;
            yield return null;
        }

        yield return new WaitForSeconds(DelayTime);
        // Move player to the final position at the end of the climb
        playerTransform.position = endPoint.position + offset;


        playerTransform.rotation = originalRotation;
        modelTransform.rotation = originalModelRotation;

        if (playerRb != null)
            playerRb.isKinematic = false;

        isClimbing = false;
        player.isClimbing = false;
    }

    public void StopActivate()
    {
        isClimbing = false;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawLine(top.position, bottom.position);
        Gizmos.DrawSphere(top.position, 0.2f);
        Gizmos.DrawSphere(bottom.position, 0.2f);
        Gizmos.DrawSphere(top.position + offset, 0.2f);

    }

   public void OnNear()
    {

    }
}
