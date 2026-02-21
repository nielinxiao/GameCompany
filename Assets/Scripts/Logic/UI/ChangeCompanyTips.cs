using Newtonsoft.Json;
using StackExchange.Redis;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeCompantTips : UIFormBase
{
    public GameObject ChangeNamePanel;
    public void OnClick_Money()
    {
        PlayerInformation.currentUserData.Money -= 100;
        PlayerInformation.currentUserData.SaveCompany();
        ChangeNamePanel.SetActive(true); ;
    }
    public void OnClick_ADS()
    {
        GameRoot.adsSystem.Show(OnSuccessfully, OnFailed);
    }
    public void OnSuccessfully()
    {
        ChangeNamePanel.SetActive(true);
    }
    protected override void OnOpen()
    {
        base.OnOpen();
    }
    protected override void OnClose()
    {
        base.OnClose();
        titleTips?.Close();
        titleTips?.Destory();
    }
    public void OnFailed()
    {
        
    }
    public void OnCancle()
    {
        Close();
        Destory();
    }
    [NonSerialized]
    public TitleTips titleTips;
    public InputField inputField;
    private void CompanyCallBack(Pkg pkg)
    {
        List<CompanyClass> companyClasses= JsonConvert.DeserializeObject<List<CompanyClass>> (pkg.Body.serverMessage.JsonValue);
        bool isSame = false;
        foreach (var entry in companyClasses)
        {
            if (entry.CompName == inputField.text)
            {
                isSame = true;
                break;
            }
        }
        if (isSame)
        {
            if (titleTips == null)
            {
                titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
            }
            titleTips.title.text = "公司名已存在";
            titleTips.Open();
        }
        else
        {
            PlayerInformation.currentUserData.currentCompany.CompName = inputField.text;
            PlayerInformation.currentUserData.SaveCompany();
            if (titleTips == null)
            {
                titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, PlayerCanvas.MainCanvas.transform) as TitleTips;
            }
            titleTips.title.text = $"成功更名为[{inputField.text}]";
            titleTips.Open();
            Close();
            Destory();
            (PlayerCanvas.MainCanvas as GameMainMenuUI).RefreshPlayerInformation();
        }
    }
    public void OnChangeNameButton()
    {
        ValueToken valueToken = new ValueToken(CompanyCallBack);
        GameRoot.redisSystem.GetValueAsync(ConfigUtils.ServerKeys_Config.company, valueToken);
    }
}
