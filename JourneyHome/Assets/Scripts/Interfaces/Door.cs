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

    public bool locked = false;

    [SerializeField] private AudioClip openSound;

    private void Awake()
    {
        originalPosition = transform.position;
        movePosition = MovePositionObject.position;
    }

    public void SetLocked(bool isLocked)
    {
        locked = isLocked;
        if(locked)
        {
            StopActivate(); // Stop any ongoing movement if locked
        }
        else
        {
            StartActivate(); // Resume movement if unlocked
        }
    }

    public void StartActivate()
    {
        if (locked) return; 
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
     
            SoundPlayer.Instance.PlaySound(openSound);
        
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
        if (isOpen && !isMoving && locked)
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

    private Material original;
    [SerializeField] private Material outlineMaterial;

    private Renderer rend;

    private void Start()
    {
        rend = GetComponent<Renderer>();
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

}
