using TMPro;
using UnityEngine;
[ExecuteAlways]
public class ContentTextMesh : MonoBehaviour
{
    public float MinHeight;
    public float OutHeight;
    public RectTransform rectTransform;
    public RectTransform textMeshProUGUI;
    public void OnChangeValue()
    {
        float Height= Mathf.Max(textMeshProUGUI.sizeDelta.y, MinHeight);
        rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x,Height+ OutHeight);
    }
}
