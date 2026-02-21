using Sirenix.OdinInspector;
using System;
using System.ComponentModel;
using TMPro;
using UnityEngine;

public class UIFormBase : MonoBehaviour
{
    public UIElement uIElement=new UIElement();
    [Sirenix.OdinInspector.ReadOnly]
    public bool isClosed = true;
    protected virtual void OnOpen() { }
    protected virtual void OnClose() { }
    public void Init(Transform parentRoot,Vector3 spawnPos)
    {
        uIElement.Init(gameObject, parentRoot, spawnPos);
    }
    public void Open()
    {
        if (!isClosed)
        {
            Debug.Log("Already Open");
        }
        else
        {
            Debug.Log(" Open");
            isClosed = false;
            ShaderFindUtils.FindFontShader( GetComponentInChildren<TextMeshProUGUI>());
            OnOpen();
            uIElement.Open();
        }
    }
    public void Close()
    {
        if(isClosed)
        {
            Debug.Log("Already Close");
            return;
        }
        else
        {
            Debug.Log("Close");
            isClosed = true;
            OnClose();
            uIElement.Close();
        }
    }
    public void Destory()
    {
        uIElement.UnInit();
    }
}