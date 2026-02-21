using UnityEngine;
using System;
using Unity.Notifications.Android;
public class PushNorifySystem : SystemBase
{
    public PushNorifySystem() : base(nameof(PushNorifySystem))
    {
        
    }
    string id = "ID";
    public override void Start()
    {
        base.Start();
        var channel = new AndroidNotificationChannel()
        {
            Id = id,
            Name = "Test",
            Importance = Importance.High,
            Description = "None"
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
        AndroidNotificationCenter.CancelAllNotifications();
    }
    public void Cancel(int id)
    {
        AndroidNotificationCenter.CancelNotification(id);
    }
    public int Send(string title,string content,int day,int hours,int minuse,int seconds=0)
    {
        DateTime dateTime = new DateTime(DateTime.Now.Year, DateTime.Now.Month, day, hours, minuse, seconds);
        if(dateTime<DateTime.Now)
        {
            dateTime=dateTime+ TimeSpan.FromDays(1);
        }
        var notification = new AndroidNotification();
        notification.Title = title;
        notification.Text = content;
        notification.FireTime = dateTime.ToUniversalTime();
        notification.ShouldAutoCancel = true;
        notification.LargeIcon = "icon_0";
        notification.SmallIcon = "icon_1";
        notification.IntentData = "1";   //通知传递的信息
        notification.Color = Color.red;
        notification.RepeatInterval=TimeSpan.FromDays(1);
        return AndroidNotificationCenter.SendNotification(notification, id);
    }
    public int Send(string title, string content,DateTime dateTime)
    {
        var notification = new AndroidNotification();
        notification.Title = title;
        notification.Text = content;
        notification.FireTime = dateTime.ToUniversalTime();
        notification.ShouldAutoCancel = true;
        notification.LargeIcon = "icon_0";
        notification.SmallIcon = "icon_1";
        notification.IntentData = "1";   //通知传递的信息
        notification.Color = Color.red;
        notification.RepeatInterval = null;
        return AndroidNotificationCenter.SendNotification(notification, id);
    }
}
