using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StockUIForm : MonoBehaviour
{
    public Transform GridRoot;
    ABFrameWorlk.Resoure resoure;
    GameObject ElementPrefab;
    StockChartUI chartUI;
    public void Start()
    {
        chartUI = GameRoot.uISystem.LoadUI(ConfigUtils.Stock_Config.StockChart,Vector3.zero,transform)as StockChartUI;
        chartUI.gameObject.SetActive(false);
        titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, transform)as TitleTips;
        titleTips.gameObject.SetActive(false);
    }
    TitleTips titleTips;
    public void OnEnable()
    {
        if(resoure==null)
        {
            resoure = GameRoot.resourcesSystem.NameToLoad(ConfigUtils.Stock_Config.StockElement);
            ElementPrefab = resoure.GetResult() as GameObject;
        }
        Refresh();
    }
    private void Init()
    {
        foreach(var info in PlayerInformation.currentUserData.currentCompany.stocks)
        {
            GameObject game= Instantiate(ElementPrefab, GridRoot);
            game.transform.Find("CompanyName").GetComponent<TextMeshProUGUI>().text = info.CompanyName;
            game.transform.Find("MoneyName").GetComponent<TextMeshProUGUI>().text = info.Much.ToString();
            game.transform.Find("Look").GetComponent<Button>().onClick.AddListener(
                ()=>
                {
                    chartUI.OpenByStock(info.CompanyName);
                }
                );
            game.transform.Find("Sell").GetComponent<Button>().onClick.AddListener(()=>OpenSell(info));
        }
    }
    public TMP_InputField nameField;
    public void Search()
    {
        chartUI.OpenByStock(nameField.text);
    }
    public void Refresh()
    {
        for (int i = GridRoot.childCount - 1; i >= 0; i--)
        {
            GameObject.Destroy(GridRoot.GetChild(i).gameObject);
        }
        PlayerInformation.currentUserData.FromJsonStock(Init);
    }
    public GameObject BackGround;
    public Slider slider;
    public TextMeshProUGUI labelMuch;
    Stock currentStock;
    public void OnSliderChanged()
    {
        labelMuch.text = $"抛售股票数量:{(int)(slider.value * currentStock.Much)}/{currentStock.Much}";
    }
    private void OpenSell(Stock stock)
    {
        currentStock=stock;
        labelMuch.text =$"抛售股票数量:{(int)(slider.value * stock.Much)}/{stock.Much}" ;
        BackGround.SetActive(true);
        Refresh();
    }
    public void ButtonSell()
    {
        ClientMessage clientMessage=new ClientMessage();
        clientMessage.StockMuch = (int)(slider.value * currentStock.Much);
        clientMessage.stockID = currentStock.playerID;
        MessageSend.Send(ClientCMD.SellStock, clientMessage);
        titleTips.title.text = "交易成功";
        titleTips.Open();
        OnSliderChanged();
        Refresh();
        BackGround.SetActive(false);
    }
    private void OnDestroy()
    {
        Destroy(titleTips.gameObject);
        GameRoot.resourcesSystem.UnLoad(resoure);
    }
}
