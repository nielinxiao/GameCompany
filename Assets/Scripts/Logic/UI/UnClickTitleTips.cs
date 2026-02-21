using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UnClickTitleTips : UIFormBase
{
    public TextMeshProUGUI title;
    public float StartTime;
    public float showTime;
    public Image backGround;
    protected override void OnOpen()
    {
        base.OnOpen();
        backGround.color = new Color(1f, 1f, 1f);
        title.color = new Color(1f, 1f, 1f);
        Sequence sequence=DOTween.Sequence();
        sequence.AppendInterval(StartTime)
            .AppendCallback(TweenCallBack);
            
    }
    public void TweenCallBack()
    {
        backGround.rectTransform.DOAnchorPosY(390, showTime);
        title.DOColor(new Color(1, 1, 1, 0.6f), showTime);
        backGround.DOColor(new Color(1, 1, 1, 0.6f), showTime).onComplete += Close;
    }
    protected override void OnClose()
    {
        base.OnClose();
    }
}
