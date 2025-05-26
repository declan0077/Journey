using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

public class OnHover : MonoBehaviour, IPointerEnterHandler
{


    public AudioClip hoverSound;
    public AudioClip UIClick;


    public void OnPointerEnter(PointerEventData eventData)
    {
        SoundPlayer.Instance.PlaySound(hoverSound);
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        SoundPlayer.Instance.PlaySound(UIClick);

    }
}
