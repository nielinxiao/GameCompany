using System;
using System.Collections.Generic;
using UnityEngine;

public class Ecel : MonoBehaviour,IReadDataRow<Enity>
{
    public TextAsset text;

    public bool ReadRow(string[] RowElemet, out Enity element)
    {
        element = new Enity();
        try
        {
            element.Name = RowElemet[1];
            element.Attak = Convert.ToInt32(RowElemet[2]);
            element.Healthy = Convert.ToInt32(RowElemet[3]);
            element.MoveSpeed = Convert.ToInt32(RowElemet[4]);
            element.AtackInerty = (float)Convert.ToDouble(RowElemet[5]);
            return true;
        }
        catch 
        {
            return false;
        }
    }

    void Start()
    {
        if(ExceTool.ReadDataByText(text.text, this, out List<Enity> Enities))
        {
            foreach(var enity in Enities)
            {
                Debug.Log(enity);
            }
        }

    }
}
public class Enity
{
    public string Name;
    public int Attak;
    public int Healthy;
    public int MoveSpeed;
    public float AtackInerty;
    public override string ToString()
    {
        return $"Name[:{Name}]Attak[:{Attak}]Healthy[:{Healthy}]MoveSpeed[:{MoveSpeed}]AtackInerty[:{AtackInerty}]";
    }
}

