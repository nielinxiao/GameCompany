using DG.Tweening;
using TMPro;
using Unity.VisualScripting.Antlr3.Runtime;
using UnityEngine;
using UnityEngine.UI;

public class GetRewardUIElement : UIFormBase
{
    public bool IsOpen = false;
    public Image IconSprite;
    public GameObject IconSpriteRoot;
    public TextMeshProUGUI title;
    public Image BoxDown;
    public Image BoxUp;
    public Image BoxOpen;
    public float InteralTime;
    public float ShakeTime;
    public float OpenShakeTime;
    [System.Serializable]
    public class RewardElement
    {
        public string Rewardname;
        public Sprite icon;
        public Sprite boxDown;
        public Sprite boxUp;
        public Sprite boxOpen;
    }
    public void OpenBySprte(RewardElement rewardElement)
    {
        IsOpen=false;
        IconSprite.sprite = rewardElement.icon;
        title.text = rewardElement.Rewardname;
        BoxDown.sprite = rewardElement.boxDown;
        BoxUp.sprite = rewardElement.boxUp;
        BoxOpen.sprite = rewardElement.boxOpen;
    }
    public TimeToken timeToken;
    protected override void OnOpen()
    {
        base.OnOpen();
        timeToken = GameRoot.timeSystem.AddTimer(1, InteralTime,
            (index)=>
            {
                BoxDown.rectTransform.DOShakeScale(ShakeTime,0.2f,1);
                BoxUp.rectTransform.DOShakeScale(ShakeTime, 0.2f, 1);
                BoxOpen.rectTransform.DOShakeScale(ShakeTime, 0.2f, 1);
            },null,true
            );
        BoxOpen.gameObject.SetActive(false);
        BoxUp.gameObject.SetActive(true);

        IconSpriteRoot.SetActive(false);
        title.gameObject.SetActive(false);

    }
    private void Start()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        rectTransform.anchorMin = Vector2.zero;
        rectTransform.anchorMax = Vector2.one;
        rectTransform.offsetMin = Vector2.zero;
        rectTransform.offsetMax = Vector2.zero;
    }
    protected override void OnClose()
    {
        base.OnClose();
        GameRoot.timeSystem.RemoveTimeToken(timeToken);
    }
    public void OnClick()
    {
        if (IsOpen) 
        {
            Close();
        }
        else
        {
            IsOpen=true;
            BoxOpen.gameObject.SetActive(true);
            BoxUp.gameObject.SetActive(false);
            BoxDown.rectTransform.DOShakeScale(OpenShakeTime,0.2f,1).onComplete=()=>
            {
                IconSpriteRoot.SetActive(true);
                title.gameObject.SetActive(true);
            };
            BoxOpen.rectTransform.DOShakeScale(OpenShakeTime,0.2f,1);
          
        }
    }
}
