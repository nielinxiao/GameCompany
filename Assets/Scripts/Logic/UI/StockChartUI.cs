using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using XCharts.Runtime;

public class StockChartUI : UIFormBase
{
    public LineChart lineChart;
    string CompanyName;
    public void OpenByStock(string company)
    {
        ClientMessage clientMessage = new ClientMessage();
        clientMessage.stockCompany = company;
        this.CompanyName = company;
        GameRoot.iocpSystem.AddListener(ServerCMD.SearchStock, PkgCallBack);
        MessageSend.Send(ClientCMD.SearchStock, clientMessage);
    }
    public void PkgCallBack(Pkg pkg)
    {
        GameRoot.iocpSystem.RemoveListener(ServerCMD.SearchStock, PkgCallBack);
        if(string.IsNullOrEmpty(pkg.Body.serverMessage.jsonStock))
        {
            TitleTips titleTips= GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, transform.parent) as TitleTips;
            titleTips.title.text = "该公司不存在或尚未发行股票";
            titleTips.Open();
            return;
        }
        Open();
        StockShop stockShop = JsonConvert.DeserializeObject<StockShop>(pkg.Body.serverMessage.jsonStock);
        if(stockShop.SaveMoney.Count - 1>=0)
        {
            textMeshProUGUI.text = "当前售卖价格:" + stockShop.SaveMoney[stockShop.SaveMoney.Count - 1] * 0.03f;
        }
        else
        {
            textMeshProUGUI.text = "请等待公司上市";
        }
        for (int idint= lineChart.series[0].dataCount-1; idint>=0; idint--)
        {
            lineChart.series[0].data.RemoveAt(idint);
        }
        DateTime date= DateTime.Now;
        foreach (var data in stockShop.SaveMoney) 
        {
            SerieData serieData = new SerieData();
            serieData.name = date.ToString("yy-MM-dd");
            serieData.data = new List<double>() { data * 0.03f, data * 0.03f };
            lineChart.series[0].data.Add(serieData);
            date=date.AddDays(-1);
        }
        lineChart.RefreshChart();
    }
    public TMP_InputField TMP_InputField;
    public TextMeshProUGUI textMeshProUGUI;
    public void Buy()
    {
        ClientMessage clientMessage = new ClientMessage();
        clientMessage.stockCompany= CompanyName;
        clientMessage.StockMuch = Convert.ToInt32(TMP_InputField.text);
        GameRoot.iocpSystem.AddListener(ServerCMD.BuyStock,CallBack);
        MessageSend.Send(ClientCMD.BuyStock, clientMessage);
    }
    public void OnDestroy()
    {
        GameObject.Destroy(titleTips.gameObject);
        titleTips = null;
    }
    TitleTips titleTips;
    public void CallBack(Pkg pkg)
    {
        if (titleTips == null)
            titleTips = GameRoot.uISystem.LoadUI(ConfigUtils.UI_Config.Title, Vector3.zero, transform) as TitleTips;
        GameRoot.iocpSystem.RemoveListener(ServerCMD.BuyStock,CallBack);
        if(pkg.Body.serverMessage.AllowBuyStock)
        {
            PlayerInformation.currentUserData.Money -= Math.Max(0, pkg.Body.serverMessage.StockMoney);
            PlayerInformation.currentUserData.SaveCompany();
            titleTips.title.text = "购买成功";
        }
        else
        {
            titleTips.title.text = "购买失败,剩余物品不足以购买";
        }
        titleTips.Open();
    }
}
