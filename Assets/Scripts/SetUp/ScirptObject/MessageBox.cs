using Sirenix.OdinInspector;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="MessageBox",menuName = "Message/MessageBox")]
public class MessageBox:ScriptableObject
{
    public List<MessageBoxElement>boxElements = new List<MessageBoxElement>();
    [Button]
    public void ReloadIndex()
    {
        int id = 0;
        foreach (var element in boxElements) 
        {
            element.id = (MessageID)id;
            id++;
        }
    }
}
[System.Serializable]
public class MessageBoxElement
{
    [AssetsOnly]
    public Sprite sprite;
    public MessageID id;
}
