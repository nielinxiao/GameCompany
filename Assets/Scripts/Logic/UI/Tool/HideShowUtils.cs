using Sirenix.OdinInspector;
using UnityEngine;

public abstract class HideShowUtils : MonoBehaviour
{
    [ReadOnly]
    public bool IsHide=false;
    protected abstract void OnChangeToHide();
    protected abstract void OnChangeToShow();
    public void OnClick()
    {
        if(IsHide)
        {
            OnChangeToShow();
        }
        else
        {
            OnChangeToHide();
        }
        IsHide = !IsHide;
    }
}
