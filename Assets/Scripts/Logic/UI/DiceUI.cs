using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DiceUI : MonoBehaviour
{
    public Action<int> RewardCallBack;
    public Image image;
    public int index;
    public float WaitTime;
    public Action OnComplite;
    public bool isRuning=false;
    public bool isComplited=false;
    public TextMeshProUGUI textMeshProUGUI;
    public void OpenByIndex(int index,Action OnComplite)
    {
        isRuning = false;
        isComplited = false;
        gameObject.SetActive(true);
        this.index = index;
        ShaderFindUtils.FindShader(image);
        image.material.SetFloat("_OnComplited", 1);
        image.material.SetFloat("_SelectIndex", 0);
        this.OnComplite = OnComplite;
        textMeshProUGUI.text = "开始摇筛子";
    }
    public void Click()
    {
        if(isRuning&&!isComplited)
            return;
        if(isComplited)
        {
            gameObject.SetActive(false);
        }
        else
        {
            isRuning = true;
            image.material.SetFloat("_OnComplited", 0);
            GameRoot.timeSystem.AddTimer(1, WaitTime,
                (ind) =>
                {
                    image.material.SetFloat("_OnComplited", 1);
                    image.material.SetFloat("_SelectIndex", index);
                }, OnCompliteCallBack);
        }
    }
    private void OnCompliteCallBack()
    {
        textMeshProUGUI.text = "点击继续";
        isComplited=true;
        OnComplite?.Invoke();
    }
}
