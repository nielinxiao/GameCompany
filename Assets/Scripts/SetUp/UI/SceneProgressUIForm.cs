using System;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class SceneProgressUIForm :UIFormBase
{
    public Action animatorCallBack;
    public RectTransform Circle;
    public RectTransform Head;
    public const float TranslateTime = 0.5f;
    public static SceneProgressUIForm instance;
    public RectTransform rectTransform;
    protected override void OnOpen()
    {
        base.OnOpen();
        instance = this;
        rectTransform.anchorMax = Vector3.one;
        rectTransform.anchorMin = Vector3.zero;
        rectTransform.offsetMin = Vector3.zero;
        rectTransform.offsetMax = Vector3.zero;
    }
    public void OpenProgress(Action action)
    {
        DontDestroyOnLoad(gameObject);
        Open();
        Circle.DOScale(Vector3.one, TranslateTime).onComplete+= OnEndClose;
        Head.localEulerAngles = new Vector3(0, 0, 180);
        Head.DORotate(new Vector3(0, 0, 0), TranslateTime);
        animatorCallBack = action;
        Image []image= gameObject.GetComponentsInChildren<Image>();
        foreach(var ima in image)
        {
            if(ima.material!=null)
            {
                ima.material.shader = Shader.Find(ima.material.shader.name);
            }
        }
    }
    public void OnEndClose()
    {
        animatorCallBack?.Invoke();
        Circle.localScale = Vector3.one;
    }
    public void EnableAllowLoad()
    {
        Circle.DOScale(Vector3.one*8.5f, TranslateTime).onComplete+= OnEndOpen;
        Head.DORotate(new Vector3(0, 0, -180), TranslateTime);
    }
    public void OnEndOpen()
    {
        GameObject.Destroy(gameObject);
    }
}
