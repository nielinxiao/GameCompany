using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public enum UIAnimationType
{
    Money,
}
[System.Serializable]
public class UIElement
{
    public string path { get; private set; }
    public Vector3 doScale_Start = Vector3.one;
    public Vector3 doScale_End = Vector3.one;
    public float doScale_Time_Start = 0;
    public float doScale_Time_End = 0;
    [ReadOnly]
    public GameObject gameobject;
    public virtual void Open()
    {
        if (gameobject == null)
            return;
        gameobject.transform.DOKill();
        gameobject.SetActive(true);
        gameobject.transform.localScale = doScale_Start;
        gameobject.transform.DOScale(doScale_End, doScale_Time_Start).SetEase(Ease.OutBack, 1.1f);
    }
    public virtual void Close()
    {
        if (gameobject == null)
            return;
        gameobject.transform.DOKill();
        gameobject.transform.localScale = doScale_End;
        gameobject.transform.DOScale(doScale_Start, doScale_Time_End).SetEase(Ease.InBack).onComplete = () =>
        {
            if (gameobject != null)
            {
                gameobject.SetActive(false);
            }
        };
    }
    public void Init(GameObject prefab, Transform root, Vector3 position)
    {
        gameobject = prefab;
        gameobject.transform.SetParent(root);
        gameobject.GetComponent<RectTransform>().localPosition = position;
    }
    public void UnInit()
    {
        if (gameobject == null)
            return;
        gameobject.transform.DOKill();
        GameObject.Destroy(gameobject);
        gameobject = null;
    }
}
