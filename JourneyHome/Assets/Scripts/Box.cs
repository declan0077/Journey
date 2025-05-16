using UnityEngine;

public class Box : MonoBehaviour, IActivate
{
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
    public void StopActivate()
    {
        // Reset to original
        if (rend != null && original != null)
        {
            rend.material = original;
        }
    }

    public void StartActivate()
    {
        PlayerController player = GameObject.FindObjectOfType<PlayerController>();
        if (player != null && player.itemInHand == null)
        {
            player.HoldObject(gameObject);
            GetComponent<Rigidbody>().isKinematic = true;
        }
    }
}
