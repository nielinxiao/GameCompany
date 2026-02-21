using StackExchange.Redis;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class UserDataUI : UIFormBase
{
    public TextMeshProUGUI UserName;
    public TextMeshProUGUI UserID;
    public TextMeshProUGUI UserMoney;
    public TextMeshProUGUI Company;
    public TextMeshProUGUI CompanyWorkRoom;
    public RawImage CompanyRaw;
    public RawImage CompanyRaw_BackGround;
    public RawImage Usericon;
    protected override void OnOpen()
    {
        base.OnOpen();
        OpenByUserData();
    }
    public void ClickSettings()
    {
        UIFormBase settingsUIForm= GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Setting, Vector3.zero, transform);
        settingsUIForm.Open();
    }
    protected override void OnClose()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).PlayClickAudioClip();
        base.OnClose();
    }
    public void ButtonClose()
    {
        (PlayerCanvas.MainCanvas as GameMainMenuUI).UserClick();
    }
    public  void OpenByUserData()
    {
        Company.text = PlayerInformation.currentUserData.currentCompany.CompName;
        CompanyWorkRoom.text=PlayerInformation.currentUserData.currentCompanyWorkRoom;
        UserMoney.text=PlayerInformation.currentUserData.currentCompany.All_saveMoney + "W";
        UserID.text=PlayerInformation.currentUserData.UserID;
        UserName.text=PlayerInformation.currentUserData.UserName;
        ValueToken valueToken = new ValueToken(GetIconCallBack);
        GameRoot.redisSystem.GetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.icon, valueToken);
    }
    private void GetIconCallBack(Pkg pkg)
    {
        byte[] tex =(ReadValue)pkg.Body.serverMessage.JsonValue;
        if (tex != null)
        {
            Texture2D texture = new Texture2D(1, 1);
            texture.LoadImage(tex);
            Usericon.texture = texture;
        }
        else
        {
            Debug.Log("解析失败或者为空");
        }
    }
    public void SelectImage()
    {
        transform.parent.GetComponent<GameMainMenuUI>().PlayClickAudioClip();
        NativeGallery.GetImageFromGallery(SelectCallBack, "选择图片");
    }
    public async void SelectCallBack(string path)
    {
        if (File.Exists(path))
        {
            Texture2D texture2D = new Texture2D(1, 1);
            byte[] bytes = File.ReadAllBytes(path);
            texture2D.LoadImage(bytes);
            Usericon.texture = texture2D;
            GameRoot.redisSystem.SetValueAsync(PlayerInformation.currentUserData.UserID, ConfigUtils.ServerKeys_Config.icon, texture2D.EncodeToJPG());
        }
    }
}