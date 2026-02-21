using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShaderFindUtils
{
    public static void FindShader(params Renderer[] renderers)
    {
        foreach (var renderer in renderers)
        {
            foreach (var ma in renderer.materials)
            {
                ma.shader = Shader.Find(ma.shader.name);
            }
        }
    }
    public static void FindShader(params Image[] renderers)
    {
        foreach (var renderer in renderers)
        {
            renderer.material.shader = Shader.Find(renderer.material.shader.name);
        }
    }
    public static void FindFontShader(TextMeshProUGUI textMeshProUGUI)
    {
        if (textMeshProUGUI != null)
        {
            textMeshProUGUI.fontSharedMaterial.shader = Shader.Find("TextMeshPro/Distance Field");
        }
    }
}
