using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UISpriteButton : MonoBehaviour, IPointerClickHandler
{
    public Image Normal;
    public Image Open;
    public UnityEvent clickEvent;
    public void OnPointerClick(PointerEventData eventData)
    {
        clickEvent?.Invoke();
    }
    public void ChangeToOpen()
    {
        Normal.gameObject.SetActive(false);
        Open.gameObject.SetActive(true);
    }
    public void ChangeToNormal()
    {
        Normal.gameObject.SetActive(true);
        Open.gameObject.SetActive(false);
    }

}
