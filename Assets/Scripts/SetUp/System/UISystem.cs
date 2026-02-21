using DG.Tweening;
using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using UnityEngine;

public  class UISystem : SystemBase
{
    public UISystem() : base(nameof(UISystem))
    {
    }
   
    private Dictionary<UIAnimationType, UIAnimationEvent> UIAnimation = new Dictionary<UIAnimationType, UIAnimationEvent>();
    public void RegistUIAnimation(UIAnimationEvent uIAnimationEvent)
    {
        if(UIAnimation.TryAdd(uIAnimationEvent.uIAnimationType, uIAnimationEvent))
        {
            DebugUtils.Log($"Regist UIAniamtion Type[{uIAnimationEvent.uIAnimationType}]Successful");
        }
        else
        {
            DebugUtils.Log($"Regist UIAniamtion Type[{uIAnimationEvent.uIAnimationType}]Failed you have Same Type");
        }
    }
    public void InvokeAnimation(UIAnimationType uIAnimationType)
    {
        if (UIAnimation.ContainsKey(uIAnimationType))
        {
            UIAnimation[uIAnimationType].InvokeAnimation();
            DebugUtils.Log($" UIAniamtion Type[{uIAnimationType}]Invoke Successful");
        }
        else
        {
            DebugUtils.Log($"UIAniamtion Type[{uIAnimationType}]Invoke Failed this Type is Empty");
        }
    }
    public void RemoveUIAnimation(UIAnimationEvent uIAnimationEvent)
    {
        if(UIAnimation.ContainsKey(uIAnimationEvent.uIAnimationType))
        {
            UIAnimation.Remove(uIAnimationEvent.uIAnimationType);
            DebugUtils.Log($"Remove UIAniamtion Type[{uIAnimationEvent.uIAnimationType}]Successful");
        }
        else
        {
            DebugUtils.Log($"Remove UIAniamtion Type[{uIAnimationEvent.uIAnimationType}]Failed this Type is Empty");
        }
    }
    public UIFormBase LoadUI(string UIName, Vector3 position, Transform root =null, bool isInProject = false)
    {
        GameObject uiprefab;
        if (isInProject)
            uiprefab=GameObject.Instantiate(LocalLoad(UIName));
        else
            uiprefab= GameObject.Instantiate(Load(UIName));
        if (uiprefab.TryGetComponent<UIFormBase>(out UIFormBase component))
        {
            component.Init(root, position);
            return component;
        }
        else
        {
            Debug.LogWarning("Load Failed "+UIName);
            return null;
        }
    }
    public void Unload(UIElement uIElement)
    {
        uIElement.Close();
    }
    private GameObject LocalLoad(string uiName)
    {
        DebugUtils.Log(uiName);
        return Resources.Load<GameObject>(uiName);
    }
    private GameObject Load(string uiName)
    {
        DebugUtils.Log(uiName);
        return (GameObject)GameRoot.resourcesSystem.NameToLoad(uiName).GetResult();
    }
    public override void Update()
    {
        base.Update();
    }
}
