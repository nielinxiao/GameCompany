using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class CompanyClass:IComparable<CompanyClass>
{
    public string CompName;//±ØÐëÎ¨Ò»
    public string CEO_ID;
    public int personCount_Company;
    public float All_saveMoney;
    public DateTime CreatTime;
    public List<string> jobs=new List<string>();
    public bool isListed = false;
    public float LendMoney;
    public List<Stock>stocks = new List<Stock>();
    [JsonIgnore]
    public Texture2D icon_Company=null;
    public void DeSerializeObject_Icon()
    {
        Texture2D texture2D = new Texture2D(1, 1);
        if (!string.IsNullOrEmpty(Icon_Byte))
        {
            texture2D.LoadImage(Convert.FromBase64String(Icon_Byte));
            icon_Company = texture2D;
        }
    }
    public void SerializeObject_Icon()
    {
        if (icon_Company != null)
            Icon_Byte = Convert.ToBase64String(icon_Company.EncodeToJPG());
    }
    public string Icon_Byte;

    public int Compare(CompanyClass x, CompanyClass y)
    {
        if (x.All_saveMoney < y.All_saveMoney) return -1;
        else if(x.All_saveMoney>y.All_saveMoney)return 1;
        else return 0;
    }

    public int CompareTo(CompanyClass other)
    {
        if (this.All_saveMoney > other.All_saveMoney) return -1;
        else if (this.All_saveMoney == other.All_saveMoney) return 0;
        else return 1;
    }
}
[System.Serializable]
public class Stock
{
    public int Much;
    public string CompanyName;
    public string playerID;
}
[System.Serializable]
public class StockShop
{
    public string CompanyName;
    public string playerID;
    public int Much;
    public float Money;
    public List<float> SaveMoney = new List<float>();
}