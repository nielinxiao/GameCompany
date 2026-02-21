using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
public class GUITest : MonoBehaviour
{
    [System.Serializable]
    public struct Load
    {
        public string content;
        public int hours;
        public int minus;
    }
    public void Awake()
    {
        lists=list;
    }
    public static List<Load> lists=new List<Load>();
    public List<Load> list=new List<Load>();
    public  static void Init()
    {
        foreach (var item in lists)
        {
            Send(item.content, item.hours, item.minus);
        }
    }
    private static void Send(string content,int hours,int minus)
    {
        GameRoot.pushNorifySystem.Send("±¦±¦", content,DateTime.Now.Day, hours, minus);
    }
}