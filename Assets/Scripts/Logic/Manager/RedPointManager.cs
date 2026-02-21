using DG.Tweening;
using System.Collections.Generic;
using UnityEngine;

public class RedPointManager : MonoBehaviour
{
    private Dictionary<RedPointEnum,UIButton>ValuePairs=new Dictionary<RedPointEnum, UIButton>();
    public static RedPointManager Instance;
    private void Awake()
    {
        Instance = this;
    }
    private Dictionary<RedPointEnum,TimeToken>redToken=new Dictionary<RedPointEnum, TimeToken>();
    public void Regist(RedPointEnum redPointEnum,UIButton uIButton)
    {
        if(!ValuePairs.ContainsKey(redPointEnum))
        {
            ValuePairs.Add(redPointEnum, uIButton);
          
        }
    }
    public void UnRegist(RedPointEnum redPointEnum)
    {
        if(ValuePairs.ContainsKey(redPointEnum))
        {
            ValuePairs.Remove(redPointEnum);
           
        }
    }
    public void HideRedPoint(RedPointEnum redPointEnum)
    {
        if (ValuePairs.ContainsKey(redPointEnum))
        {
            ValuePairs[redPointEnum].OnHideRedPoint();
            if(redToken.ContainsKey(redPointEnum))
            {
                GameRoot.timeSystem.RemoveTimeToken(redToken[redPointEnum]);
                redToken.Remove(redPointEnum);
            }
        }
    }
    public void ShowRedPoint(RedPointEnum redPointEnum)
    {
        if (ValuePairs.ContainsKey(redPointEnum))
        {
            ValuePairs[redPointEnum].OnShowRedPoint();
            if(!redToken.ContainsKey(redPointEnum))
            {
                redToken.Add(redPointEnum, GameRoot.timeSystem.AddTimer(
             0, 5, (index) => ValuePairs[redPointEnum].transform.DOShakeRotation(0.5f), null, true));
            }
        }
    }
    public UIButton GetUIButton(RedPointEnum redPointEnum)
    {
        if (ValuePairs.ContainsKey(redPointEnum))
        {
            return ValuePairs[redPointEnum];
        }
        else
        {
            return null;
        }
    }
}
public enum RedPointEnum
{
    Phone,
    WorldPhone,
    Email,
    Bag,
    Reward
}

