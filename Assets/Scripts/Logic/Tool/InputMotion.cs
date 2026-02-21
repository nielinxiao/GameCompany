using DigitalRubyShared;
using UnityEngine;

public class InputMotion : MonoBehaviour
{
    public float MoveSpeed=0.05f;
    public bool isLocked = false;

    private PanGestureRecognizer panRecognizer;
    private ScaleGestureRecognizer scaleRecognizer;
    private RotateGestureRecognizer rotateRecognizer;

    private void Start()
    {
        panRecognizer = new PanGestureRecognizer();
        panRecognizer.StateUpdated += TouchCallBack;
        panRecognizer.MaximumNumberOfTouchesToTrack = 1;
        panRecognizer.MinimumNumberOfTouchesToTrack = 1;

        scaleRecognizer = new ScaleGestureRecognizer();
        scaleRecognizer.MinimumNumberOfTouchesToTrack = 2;
        scaleRecognizer.MaximumNumberOfTouchesToTrack = 2;
        scaleRecognizer.StateUpdated += ScaleCallBack;

        rotateRecognizer = new RotateGestureRecognizer();
        rotateRecognizer.MinimumNumberOfTouchesToTrack = 2;
        rotateRecognizer.MaximumNumberOfTouchesToTrack = 2;
        rotateRecognizer.StateUpdated += RoateCallBack;

        EnableGestures();
    }

    public void EnableGestures()
    {
        isLocked = false; // 先设置标志

        if (panRecognizer != null)
        {
            panRecognizer.Reset(); // 重置手势状态
            if (!FingersScript.Instance.Gestures.Contains(panRecognizer))
            {
                FingersScript.Instance.AddGesture(panRecognizer);
            }
        }
        if (scaleRecognizer != null)
        {
            scaleRecognizer.Reset();
            if (!FingersScript.Instance.Gestures.Contains(scaleRecognizer))
            {
                FingersScript.Instance.AddGesture(scaleRecognizer);
            }
        }
        if (rotateRecognizer != null)
        {
            rotateRecognizer.Reset();
            if (!FingersScript.Instance.Gestures.Contains(rotateRecognizer))
            {
                FingersScript.Instance.AddGesture(rotateRecognizer);
            }
        }
    }

    public void DisableGestures()
    {
        Debug.Log("[InputMotion] DisableGestures开始执行");
        isLocked = true; // 先设置标志，阻止任何新的手势处理

        // 立即重置所有手势状态，停止正在进行的手势
        if (panRecognizer != null)
        {
            panRecognizer.Reset();
            FingersScript.Instance.RemoveGesture(panRecognizer);
            Debug.Log("[InputMotion] Pan手势已重置并移除");
        }
        if (scaleRecognizer != null)
        {
            scaleRecognizer.Reset();
            FingersScript.Instance.RemoveGesture(scaleRecognizer);
            Debug.Log("[InputMotion] Scale手势已重置并移除");
        }
        if (rotateRecognizer != null)
        {
            rotateRecognizer.Reset();
            FingersScript.Instance.RemoveGesture(rotateRecognizer);
            Debug.Log("[InputMotion] Rotate手势已重置并移除");
        }
        Debug.Log("[InputMotion] DisableGestures完成，isLocked=" + isLocked);
    }
    public void RoateCallBack(GestureRecognizer gesture)
    {
        if (isLocked || Camera.main == null)
            return;
        RotateGestureRecognizer rotateGestureRecognizer=gesture as RotateGestureRecognizer;
        Camera.main.transform.Rotate(Vector3.up, rotateGestureRecognizer.RotationDegreesDelta,Space.World);
    }
    public void ScaleCallBack(DigitalRubyShared.GestureRecognizer gesture)
    {
        if (isLocked || Camera.main == null || !Application.isPlaying)
            return;
        try
        {
            Camera.main.fieldOfView /= ((ScaleGestureRecognizer)gesture).ScaleMultiplier;
            Camera.main.fieldOfView = Mathf.Min(Mathf.Max(12f, Camera.main.fieldOfView), 70f);
        }
        catch{ }
    }
    public void TouchCallBack(DigitalRubyShared.GestureRecognizer gesture)
    {
        if (isLocked)
        {
            Debug.Log("[InputMotion] TouchCallBack被阻止 - isLocked=true");
            return;
        }
        if (gesture.State == GestureRecognizerState.Executing)
        {
            PanGestureRecognizer swipeGestureRecognizer = (PanGestureRecognizer)gesture;
            float deltaX = swipeGestureRecognizer.DeltaX;
            float deltaY = swipeGestureRecognizer.DeltaY;
            Vector3 dir = -(Camera.main.transform.forward * deltaY +Camera.main.transform.right * deltaX) * MoveSpeed;
            dir.y = 0;
            Camera.main.transform.position += dir;
        }
    }
}
