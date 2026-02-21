using UnityEngine;
using UnityEngine.Android;

public class PermissionSystem : SystemBase,ISystemLife
{
    public PermissionSystem() : base(nameof(PermissionSystem))
    {
    }
    public override void Awake()
    {
        base.Awake();
        if(!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageRead))
        {
            Permission.RequestUserPermission(Permission.ExternalStorageRead);
        }
        if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite))
        {
            Permission.RequestUserPermission(Permission.ExternalStorageWrite);
        }
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
        if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
        {
            Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
        }
        if (!Permission.HasUserAuthorizedPermission("android.permission.SCHEDULE_EXACT_ALARM"))
        {
            Permission.RequestUserPermission("android.permission.SCHEDULE_EXACT_ALARM");
        }
    }

}
