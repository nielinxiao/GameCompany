using UnityEngine;
using UnityEngine.UI;

public class RoateHideShow : HideShowUtils
{
    public RectTransform rectTransform;
    public float ShowSizeDateY;
    public float HideSizeDateY;
    public Image image;
    protected override void OnChangeToHide()
    {
        rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x, HideSizeDateY);
        image.rectTransform.localEulerAngles = new Vector3(0, 0, 180);
    }
    protected override void OnChangeToShow()
    {
        rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x,ShowSizeDateY);
        image.rectTransform.localEulerAngles = new Vector3(0, 0, 0);
    }
}
