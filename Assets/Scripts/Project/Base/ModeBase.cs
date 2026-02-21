using Sirenix.OdinInspector;
using UnityEngine;
public abstract class ModeBase
{
    [ReadOnly]
    public  ModeType type;
    public ModeBase(ModeType modeType)
    {
        type = modeType;
    }
    public abstract void OnEnter();
    public abstract void Tick();
    public abstract void OnExit();
}
[SerializeField]
public enum ModeType
{
    MainLoadMenu,
    MainGame,
    Look,
}