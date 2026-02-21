using DG.Tweening;
using System;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GetMoneyChildrenUIForm :MonoBehaviour
{
    public TextMeshProUGUI MoneyText;
    public TextMeshProUGUI Percent;
    public TextMeshProUGUI MouthMoney;
    public TextMeshProUGUI MoneyLimit;
    public Slider slider;
    public float MoneyPercent;
    public void OnEnable()
    {
        Refresh();
    }
    public void Refresh()
    {
        GetMoneyPercent();
        TranslateLendMoney();
        GetLendMoney();
        GetMouthRaise();
    }
    public void GetMoneyPercent()
    {
        MoneySinger.Instance.GetMoneyPercent(GetMoneyCallBack);
    }
    private void GetMoneyCallBack(float value)
    {
        MoneyPercent = value;
        Percent.text = MoneyPercent + "%";
    }
    public void GetMouthRaise()
    {
        MouthMoney.text = string.Format("{0:C3}", (PlayerInformation.currentUserData.currentCompany.LendMoney * MoneyPercent/100).ToString("0.00")) +"w";
    }
    StringBuilder stringBuilder = new StringBuilder();
    public void GetLendMoney(float LastLendMoney=-1)
    {
        if(LastLendMoney==-1)
        {
            stringBuilder.Clear();
            stringBuilder.Append("$");
            stringBuilder.Append(PlayerInformation.currentUserData.currentCompany.LendMoney);
            stringBuilder.Append("w");
            MoneyText.text = stringBuilder.ToString();
        }
        else
        {
            stringBuilder.Clear();
            stringBuilder.Append("$");
            stringBuilder.Append(PlayerInformation.currentUserData.currentCompany.LendMoney);
            stringBuilder.Append("w");
            MoneyText.text = stringBuilder.ToString();
            DOTween.To
                (
                ()=>LastLendMoney,
                (x)=>
                {
                    stringBuilder.Clear();
                    stringBuilder.Append("$");
                    stringBuilder.Append(x);
                    stringBuilder.Append("w");
                    MoneyText.text = stringBuilder.ToString();
                },
                PlayerInformation.currentUserData.currentCompany.LendMoney,
                1
                );
        }
    }
    public void TranslateLendMoney()
    {
        float LendMoney=PlayerInformation.currentUserData.currentCompany.LendMoney;
        float couldLendMoney = PlayerInformation.currentUserData.currentCompany.All_saveMoney * ConfigUtils.Money_Config.LendMoneyInCompanyMoney_percent;
        couldLendMoney = Mathf.Max(couldLendMoney, 0);
        if (couldLendMoney >= LendMoney) 
        {
            if(LendMoney==0)
            {
                slider.value = 0;
            }
            else
            {
                slider.value = LendMoney / couldLendMoney;
            }
        }
        else
        {
            slider.value = 1;
        }
        MoneyLimit.text = $"¥˚øÓœﬁ∂Ó£∫{string.Format("{0:C3}", couldLendMoney)}w";
    }
    public void OnSubmitGetMoney()
    {
        float LendMoney = PlayerInformation.currentUserData.currentCompany.LendMoney;
        float couldLendMoney = PlayerInformation.currentUserData.currentCompany.All_saveMoney * ConfigUtils.Money_Config.LendMoneyInCompanyMoney_percent;
        float EndLendMoney=Mathf.Max(couldLendMoney, LendMoney);
        float subLendMoney = EndLendMoney * slider.value;
        float lastLendMoney = -1;
        if(subLendMoney != 0)
        {
            if(LendMoney> subLendMoney)
            {
                //ªπ«Æ
                PlayerInformation.currentUserData.Money -= LendMoney - subLendMoney;
                lastLendMoney = PlayerInformation.currentUserData.currentCompany.LendMoney;
                PlayerInformation.currentUserData.currentCompany.LendMoney = subLendMoney;
            }
            else
            {
                //ΩË«Æ
                PlayerInformation.currentUserData.Money += subLendMoney- LendMoney;
                lastLendMoney = PlayerInformation.currentUserData.currentCompany.LendMoney;
                PlayerInformation.currentUserData.currentCompany.LendMoney = subLendMoney;
            }
        }
        else
        {
            PlayerInformation.currentUserData.Money -= LendMoney;
            lastLendMoney = PlayerInformation.currentUserData.currentCompany.LendMoney;
            PlayerInformation.currentUserData.currentCompany.LendMoney = 0;
        }
        TranslateLendMoney();
        GetMouthRaise();
        GetLendMoney(lastLendMoney);
    }
}
