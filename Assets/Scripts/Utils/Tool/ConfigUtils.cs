using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ConfigUtils 
{
    public static string PathRoot = Application.persistentDataPath;
    public static string BundlePath = Application.persistentDataPath + "/AssestBundle";
    public static string BundlePathZip = Application.persistentDataPath + "/AssestBundle.zip";
    public static class ResourceSystem_Config
    {
        public static string ManifestPath=Application.persistentDataPath + "/AssestBundle/AssestBundle";
        public static string DataPath=Application.persistentDataPath + "/AssestBundle/Data";
        public static string AssestPath= "Default PrefabElement";
    }
    public static class IOCP_Config
    {
        public static string ip= "49.233.248.132";

        public static string EditorIp="127.0.0.1";
        //public static string EditorIp= "49.233.248.132";
        public static int port= 45677;
    }
    public static class VersionSystem_Config
    {
        public static string downLoadUrl = "https://test-nielinxiao.oss-cn-beijing.aliyuncs.com/AssestBundle.zip";
        public static string downLoadUrlMD5 = "https://test-nielinxiao.oss-cn-beijing.aliyuncs.com/MD5.byte";
        public static string versionButtonTips = "Prefab/versionButtonTips";
    }
    public static class AudioSystem_Config
    {
        public static string AudioManagerPrefab = "Audio System Manager";
    }
    public static class AudioClip_Config
    {
        public static string Button_Click_Big = "Button_Click_Big";
        public static string MainBG = "MainBG";
        public static string Player_Source = "Player Sound";
        public static string EasterEggNormalBGM = "EasterEggNormalBGM";
        public static string Money = "Gold";
        public static string PhoneMessage = "GourmetLowScore";
    }
    public static class SceneName_Config
    {
        public static string Main_Scene = "Main";
        public static string Game_Scene = "Game";
    }
    public static class Manager_Config
    {
        public static string RedPointManager = "RedPointManager";
        public static string GameManager = "GameManager";
    }
    public static class UI_Config
    {
        public static string progressElement = "progressElement";
        public static string MainCanvas = "MainCanvas";
        public static string GetReward = "GetReward";
        public static string GameIcon = "GameIcon";
        public static string MoneyBackGround = "MoneyBackGround";
        public static string CompanyInformation = "CompanyInformation";
        public static string CompanyList = "CompanyList";
        public static string IconUser = "IconUser";
        public static string Title = "Tip";
        public static string phone = "phone";
        public static string reward = "RewardUIElement";
        public static string ChatLog = "ChatLog";
        public static string NameButton = "NameButton";
        public static string PersonList = "PersonList";
        public static string PersonElement = "PersonElement";
        public static string PersonNumber = "PersonNumber";
        public static string changeNameButtonTips = "changeNameButtonTips";
        public static string BuildUIElement = "BuildUIElement";
        public static string Shop = "Shop";
        public static string Loading = "Loading";
        public static string Shop_Element = "Shop_Element";
        public static string BuildBox = "BuildBox";
        public static string Money = "Money";
        public static string Setting = "Setting";
        public static string CharacterTalk = "CharacterTalk";
        public static string JobElement = "JobElement";
        public static string Email = "Email";
        public static string SceneProgressForm = "SceneProgressForm";
        public static string UnClickTip = "UnClickTip";
    }
    public static class ServerKeys_Config
    {
        public static string url= "49.233.248.132";
        public static int port = 6379;
        public static string passWord = "666666";
        public const string icon = "icon";
        public const string company = "company";
        public const string bag = "bag";
        public const string persons = "persons";
        public const string block = "block";
        public const string time = "time";
        public const string messages = "messages";
        public const string money = "money";
        public const string StockMoney = "StockMoney";
        public const string Benefits = "Benefits";
    }
    public static class ADS
    {
        public static string _androidAdUnitId = "Rewarded_Android";
        public static string _iOsAdUnitId = "Rewarded_iOS";
        public static string AndoridID = "5830967";
        public static string IOSID = "5830966";
    }
    public static class StaffState_Config
    {
        public static class HappyWork
        {
            public static float SaveMoneySpeed = 1.5f;
            public static float fishPercent = 0;
            public static float deadPercent = 0;
        }
        public static class LittleTired
        {
            public static float TranslatePercent = 0.8f;
            public static float SaveMoneySpeed = 0.7f;
            public static float fishPercent = 0.1f;
            public static float deadPercent = 0;
        }
        public static class Tired
        {
            public static float TranslatePercent = 1.2f;
            public static float SaveMoneySpeed = 0.3f;
            public static float fishPercent =0.3f;
            public static float deadPercent = 0.05f;
        }
    }
    public static class Money_Config
    {
        public const float WaterMoney=10;
        public const float OnePieceFiveMoney=0.2f;
        public const float OnePieceGiftMoney=0.2f;
        public const float WorkTime=8f;
        public const float FiveMoneyInAll = 0.3f;
        public const float GiftMoneyInAll = 0.5f;
        public const float WorkTimeInAll = 0.2f;
        public const float LendMoneyInCompanyMoney_percent = 0.2f;
    }
    public static class BuildPrefab_Config
    {
        public static string BuildPrefab_Center= "BuildPrefabs";
        public static string Build_Canvas = "Build_Canvas";
        public static string CharacterController = "Character";
        public static string outLine = "outLine";
        public static string layerMaskName = "Plane";
    }
    public static class Materail_Config
    {
        public static string Font = "Normal_Font";
    }
    public static class Email_Config
    {
        public static string GiftPrefab= "GiftElement";
        public static string GiftPrefab_Form= "GiftMessage";
        public static string EmailPrefab= "MessageElement";
        public static string EmailPrefab_Form= "MessMessage";
        public static string MessageBox = "MessageBox";
        public static string MessageBoxScriptObejct = "MessageBoxScriptObejct";
    }
    public static class Stock_Config
    {
        public static string StockElement = "StockElement";
        public static string StockChart = "StockChart";
    }
}
[System.Serializable]
public enum MessageID
{
    Money = 0
}

