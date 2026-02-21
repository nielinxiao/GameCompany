using DG.Tweening;
using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Reward : UIFormBase
{
    [System.Serializable]
    public class RewardImage
    {
        public Image backGround;
        public Image info;
        public Color LightColor;
    }
    public RewardImage daji;
    public RewardImage xiaoji;
    public RewardImage qiyu;
    public Image Bloom;
    public RectTransform LightsRoot;
    private Action<RewardItem> rewardCallBack;
    public List<Image> AllLights = new List<Image>();
    public Button ClickButton;
    public List<Image> NormalLight = new List<Image>();
    public float NormalShowTime;
    public float NormalHideShowTime;
    public float ScaleLight;
    public float ScaleBackGroundLight;
    public float ScaleBloom;
    public float LightStart_ShowTime;
    public float LightEnd_ShowTime;
    public float BackGround_ShowTime;
    public float Bloom_ShowTime;
    public float Bloom_HitTime;
    public float bg_Progress;
    [BoxGroup("Percent")]
    [Header("全部概率加一起必须为1")]
    [BoxGroup("Percent")]
    public float Normal_Percent;
    [BoxGroup("Percent")]
    public float Qiyu_Percent;
    [BoxGroup("Percent")]
    public float Xiaoji_Percent;
    [BoxGroup("Percent")]
    public float Daji_Percent;
    public float EndWaitTime;
    public Image Normal_Progress;
    public Image Reward_Progress;
    public GetRewardUIElement.RewardElement normal_Reward;
    public GetRewardUIElement.RewardElement xiaoji_Reward;
    public GetRewardUIElement.RewardElement daji_Reward;
    public DiceUI DicePanel;
    public enum RewardType
    {
        Qiyu,
        Daji,
        Xiaoji,
        Nomal
    }
    public struct RewardItem
    {
        public RewardType type;
        public int objID;
    }
    protected override void OnOpen()
    {
        rewardCallBack = CallBack;
        base.OnOpen();
    }
    protected override void OnClose()
    {
        rewardCallBack = null;
        base.OnClose();
    }
    GetRewardUIElement getRewardUIElement;
    public void CallBack(RewardItem rewardItem)
    {
        if (rewardItem.type == RewardType.Qiyu) 
        {
            DicePanel.OpenByIndex(UnityEngine.Random.Range(0, 6),null);
        }
        else
        {
            if(getRewardUIElement==null)
            {
                getRewardUIElement = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.GetReward, Vector3.zero, PlayerCanvas.MainCanvas.transform) as GetRewardUIElement;
            }
            getRewardUIElement.Open();
            switch(rewardItem.type)
            {
                case RewardType.Nomal:
                    getRewardUIElement.OpenBySprte(normal_Reward);
                    break;
                case RewardType.Xiaoji:
                    getRewardUIElement.OpenBySprte(xiaoji_Reward);
                    break;
                case RewardType.Daji:
                    getRewardUIElement.OpenBySprte(daji_Reward);
                    break;
            }
        }
         
    }
    private void OpenByRewardType(RewardType rewardType)
    {
        ReInit();
        switch (rewardType)
        {
            case RewardType.Qiyu:
                currentImage = qiyu;
                Bloom.color = currentImage.LightColor;
                foreach (var light in AllLights)
                {
                    light.color = currentImage.LightColor;
                }
                ShowReward(() => Complite(rewardType));
                break;
            case RewardType.Daji:
                currentImage = xiaoji;
                Bloom.color = currentImage.LightColor;
                foreach (var light in AllLights)
                {
                    light.color = currentImage.LightColor;
                }
                ShowReward(() =>
                {
                    ReInit();
                    currentImage = daji;
                    Bloom.color = currentImage.LightColor;
                    foreach (var light in AllLights)
                    {
                        light.color = currentImage.LightColor;
                    }
                    ShowReward(() => Complite(rewardType));
                });
                break;
            case RewardType.Xiaoji:
                currentImage = xiaoji;
                Bloom.color = currentImage.LightColor;
                foreach (var light in AllLights)
                {
                    light.color = currentImage.LightColor;
                }
                ShowReward(() => Complite(rewardType));
                break;
            case RewardType.Nomal:
                ShowNormal();
                return;
        }

    }
    private void ReSetUpNormal()
    {
        foreach (var light in NormalLight)
        {
            light.rectTransform.localScale = Vector3.one;
            light.color = Color.white;
            light.gameObject.SetActive(true);
        }
    }
    private void ShowNormal()
    {
        ReSetUpNormal();
        foreach (var light in NormalLight)
        {
            light.rectTransform.DOScaleX(0, NormalShowTime);
            Sequence sequence = DOTween.Sequence();
            sequence.Append(light.DOColor(new Color(1, 1, 1, 0), NormalHideShowTime))
            .AppendCallback(() => light.gameObject.SetActive(false));
        }
        Sequence sequence1 = DOTween.Sequence();
        sequence1
            .AppendInterval(Mathf.Max(NormalShowTime, NormalHideShowTime))
            .AppendCallback(() => Complite(RewardType.Nomal));
        Normal_Progress.fillAmount = 0;
        Reward_Progress.fillAmount = 0;
        Normal_Progress.DOFillAmount(1, bg_Progress);
    }
    public Dictionary<RewardType, List<RewardItem>> rewardDic = new Dictionary<RewardType, List<RewardItem>>();
    RewardImage currentImage;
    public void RegistReward(List<RewardItem> rewardItems, Action<RewardItem> action = null)
    {
        rewardCallBack = action;
        rewardDic.Clear();
        rewardDic.Add(RewardType.Nomal, new List<RewardItem>());
        rewardDic.Add(RewardType.Qiyu, new List<RewardItem>());
        rewardDic.Add(RewardType.Xiaoji, new List<RewardItem>());
        rewardDic.Add(RewardType.Daji, new List<RewardItem>());
        foreach (var item in rewardItems)
        {
            rewardDic[item.type].Add(item);
        }
    }
    private void Awake()
    {
        //测试
        Regist();
    }
    //测试方法
    [Button]
    public void Regist()
    {
        List<RewardItem> rewardItems = new List<RewardItem>();
        rewardItems.Add(new RewardItem() { objID = 0, type = RewardType.Nomal });

        rewardItems.Add(new RewardItem() { objID = 1, type = RewardType.Qiyu });

        rewardItems.Add(new RewardItem() { objID = 2, type = RewardType.Xiaoji });

        rewardItems.Add(new RewardItem() { objID = 3, type = RewardType.Daji });
        RegistReward(rewardItems);
    }
    public void OnClickButtonDown()
    {
        ClickButton.interactable = false;
        float range = UnityEngine.Random.Range(0, 1.0f);
        if (range <= Normal_Percent)
        {
            OpenByRewardType(RewardType.Nomal);
        }
        else if (range <= Normal_Percent + Qiyu_Percent)
        {
            OpenByRewardType(RewardType.Qiyu);
        }
        else if (range <= Normal_Percent + Qiyu_Percent + Xiaoji_Percent)
        {
            OpenByRewardType(RewardType.Xiaoji);
        }
        else
        {
            OpenByRewardType(RewardType.Daji);
        }
    }
    private void ShowReward(Action callBack)
    {
        currentImage.backGround.gameObject.SetActive(true);
        currentImage.info.gameObject.SetActive(true);
        Sequence sequence = DOTween.Sequence();
        sequence.Append(LightsRoot.DOScale(Vector3.one * ScaleLight, LightStart_ShowTime))
            .AppendCallback(() => StartCallBack(callBack));
        currentImage.backGround.rectTransform.DOScale(Vector3.one * ScaleBackGroundLight, BackGround_ShowTime);
        currentImage.info.rectTransform.DOScale(Vector3.one, BackGround_ShowTime).SetEase(Ease.OutBounce, 1.5f);
        Bloom.rectTransform.DOScale(Vector3.one * ScaleBloom, Bloom_ShowTime);
        Sequence sequence2 = DOTween.Sequence();
        sequence2
            .Append(Bloom.DOColor(new Color(Bloom.color.r, Bloom.color.g, Bloom.color.b, 0), Bloom_HitTime))
            .AppendCallback(() => Bloom.rectTransform.localScale = Vector3.zero);
        Sequence sequence3 = DOTween.Sequence();
        sequence3.Append(Normal_Progress.DOFillAmount(1, bg_Progress))
            .AppendCallback(() => Reward_Progress.fillAmount = 1);
    }
    private void ReInit()
    {
        LightsRoot.localScale = Vector3.zero;
        Bloom.rectTransform.localScale = Vector3.zero;
        Bloom.color = new Color(Bloom.color.r, Bloom.color.g, Bloom.color.b, 1);
        if (currentImage != null)
        {
            currentImage.backGround.rectTransform.localScale = Vector3.zero;
            currentImage.backGround.gameObject.SetActive(false);
            currentImage.info.rectTransform.localScale = Vector3.zero;
            currentImage.info.gameObject.SetActive(false);
        }
        for (int i = 0; i < AllLights.Count; i++)
        {
            AllLights[i].rectTransform.localScale = Vector3.one;
        }
    }
    TimeToken timeToken;
    private void Complite(RewardType rewardType)
    {
        ClickButton.interactable = true;
        List<RewardItem> items = rewardDic[rewardType];
        int index = UnityEngine.Random.Range(0, items.Count);
        Normal_Progress.fillAmount = 0;
        Reward_Progress.fillAmount = 0;
        /*Sequence sequence = DOTween.Sequence();
        sequence.AppendInterval(EndWaitTime)
            .AppendCallback(ReInit);*/
        if (timeToken != null&&!timeToken.isComplited)
        {
            GameRoot.timeSystem.RemoveTimeToken(timeToken);
        }
        timeToken = GameRoot.timeSystem.AddTimer(1, EndWaitTime, (index) => ReInit(), null);
        RewardCallBack(items[index]);
    }
    public void RewardCallBack(RewardItem rewardItem)
    {
        rewardCallBack?.Invoke(rewardItem);
        Debug.Log("抽到了:"+rewardItem.objID);
    }
    private void StartCallBack(Action callBack)
    {
        Debug.Log("callBack");
        RectTransform recttrans;
        foreach (var light in AllLights)
        {
            recttrans = light.GetComponent<RectTransform>();
            recttrans.DOScaleY(0, LightEnd_ShowTime);
        }
        Sequence sequence = DOTween.Sequence();
        sequence.AppendInterval(LightEnd_ShowTime)
        .AppendCallback(()=>callBack?.Invoke());
    }
}
