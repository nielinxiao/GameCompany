using DigitalRubyShared;
using Sirenix.OdinInspector;
using UnityEngine;

public class CameraPreview : MonoBehaviour
{
    public static CameraPreview Instance;
    public Transform ModleRoot;
    public Camera cam;
    private void Awake()
    {
        Instance = this;
        renderTexture = new RenderTexture(1024, 1024,0);
        cam.targetTexture = renderTexture;
    }
    
    [ReadOnly]
    public GameObject HandObj;
    RenderTexture renderTexture;
    public void AddShow(string urlName)
    {
        Check();
        GameObject game= GameRoot.resourcesSystem.NameToLoad(urlName).GetResult() as GameObject;
        HandObj = Instantiate(game, ModleRoot);
        HandObj.transform.localPosition = Vector3.zero;
        BuildObjectBase buildObjectBase= HandObj.GetComponent<BuildObjectBase>();
        Renderer[]renderers= HandObj.GetComponentsInChildren<Renderer>();
        ShaderFindUtils.FindShader(renderers);
        if (buildObjectBase != null)
        {
            Destroy(buildObjectBase);
        }
        cam.enabled = true;
    }
    public void HideShow()
    {
        cam.enabled = false;
        Check();
    }
    private void Check()
    {
        if (HandObj != null) 
        {
            Destroy(HandObj);
        }
    }
}
