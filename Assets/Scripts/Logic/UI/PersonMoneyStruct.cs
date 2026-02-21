using Newtonsoft.Json;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PersonMoneyStruct : MonoBehaviour
{
    [BoxGroup("MoneyStruct")]
    public MoneyElement workTime;
    [BoxGroup("MoneyStruct")]
    public MoneyElement fiveMoney;
    [BoxGroup("MoneyStruct")]
    public MoneyElement waterMoney;
    [BoxGroup("MoneyStruct")]
    public MoneyElement GiftMoney;
    [System.Serializable]
    public struct MoneyElement
    {
        public TextMeshProUGUI percent;
        public Slider percent_slider;
    }
    public void SetUp()
    {
        workTime.percent_slider.value = (MoneySinger.Instance.benefits.WorkTime_Percent - 0.5f);
        fiveMoney.percent_slider.value = (MoneySinger.Instance.benefits.FiveMoney_Percent - 0.5f);
        waterMoney.percent_slider.value = (MoneySinger.Instance.benefits.WaterMoney_Percent - 0.5f);
        GiftMoney.percent_slider.value = (MoneySinger.Instance.benefits.GiftMoney_Percent - 0.5f);
    }
    private void OnDisable()
    {
        SaveBenefits();
    }
    private void OnEnable()
    {
        SetUp();
        WorkTimeValueChange(workTime.percent_slider.value);
        FiveMoneyValueChange(fiveMoney.percent_slider.value);
        WaterMoneyValueChange(waterMoney.percent_slider.value);
        GiftMoneyValueChange(GiftMoney.percent_slider.value);
    }
    public void WorkTimeValueChange(float progress)
    {
        MoneySinger.Instance.benefits.WorkTime_Percent = progress+0.5f;
        MoneySinger.Instance.UpdateHappyProgress();
        workTime.percent.text = (MoneySinger.Instance.benefits.WorkTime * MoneySinger.Instance.benefits.WorkTime_Percent).ToString("0.0")+"h";
    }
    private void SaveBenefits()
    {
        string json=JsonConvert.SerializeObject(MoneySinger.Instance.benefits);
         GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.Benefits, json);
    }
    public void FiveMoneyValueChange(float progress)
    {
        MoneySinger.Instance.benefits.FiveMoney_Percent =progress+0.5f;
        MoneySinger.Instance.UpdateHappyProgress();
        fiveMoney.percent.text = ((int)(progress * 100)).ToString("0.0") +"%";
    }
    public void WaterMoneyValueChange(float progress)
    {
        MoneySinger.Instance.benefits.WaterMoney =progress+0.5f;
        MoneySinger.Instance.UpdateHappyProgress();
        waterMoney.percent.text = ((int)(progress * 100)).ToString("0.0") + "%";
    }
    public void GiftMoneyValueChange(float progress)
    {
        MoneySinger.Instance.benefits.GiftMoney_Percent =progress+0.5f;
        MoneySinger.Instance.UpdateHappyProgress();
        GiftMoney.percent.text = ((int)(progress * 100)).ToString("0.0") + "%";
    }
}
