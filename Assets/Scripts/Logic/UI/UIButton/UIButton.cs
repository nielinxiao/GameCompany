using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIButton :MonoBehaviour, IPointerClickHandler
{
    public Image redPoint;
    public UnityEvent clickEvent;
    public RedPointEnum redPointEnum;
    public void OnShowRedPoint()
    {
        redPoint.gameObject.SetActive(true);
    }
    public void OnHideRedPoint()
    {
        redPoint.gameObject.SetActive(false);
    }
    private void Start()
    {
        if (RedPointManager.Instance != null)
        {
            RedPointManager.Instance.Regist(redPointEnum, this);
        }
    }
    private void OnDestroy()
    {
        if (RedPointManager.Instance != null)
        {
            RedPointManager.Instance.UnRegist(redPointEnum);
        }
    }
    public void OnPointerClick(PointerEventData eventData)
    {
        clickEvent?.Invoke();
        RedPointManager.Instance.HideRedPoint(redPointEnum);
    }
}
