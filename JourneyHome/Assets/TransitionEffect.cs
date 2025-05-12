using UnityEngine;

public class TransitionEffect : MonoBehaviour
{
    public static TransitionEffect Instance { get; private set; }

    private Animator animator;

    private static readonly int PlayInTrigger = Animator.StringToHash("PlayIn");
    private static readonly int PlayOutTrigger = Animator.StringToHash("PlayOut");

    private void Awake()
    {
        // Singleton setup
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        animator = GetComponent<Animator>();

        if (animator == null)
        {
            Debug.LogError("Animator component not found on TransitionEffect GameObject.");
        }
    }

    public void PlayTransitionIn()
    {
        if (animator != null)
        {
            animator.SetTrigger(PlayInTrigger);
        }
    }

    public void PlayTransitionOut()
    {
        if (animator != null)
        {
            animator.SetTrigger(PlayOutTrigger);
        }
    }
}
