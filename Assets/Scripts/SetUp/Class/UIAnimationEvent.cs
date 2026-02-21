using UnityEngine;

public class UIAnimationEvent : MonoBehaviour
{
    public UIAnimationType uIAnimationType;
    public Animator uiAnimator;
    public string animatorName;
    private void OnEnable()
    {
        GameRoot.uISystem.RegistUIAnimation(this);
    }
    private void OnDisable()
    {
        GameRoot.uISystem.RemoveUIAnimation(this);
    }
    public void InvokeAnimation()
    {
        uiAnimator.Play(animatorName);
    }
}
