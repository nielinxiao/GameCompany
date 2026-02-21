using ABFrameWorlk;
using DG.Tweening;
using DigitalRubyShared;
using System;
using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(BoxCollider))]
public class BuildObjectBase :MonoBehaviour, IBuildObject
{
    enum Movement
    {
        Move,
        Roate,
        None
    }
    Movement movement=Movement.Move; // 默认为Move状态，让建造物品立即可拖拽
    public static implicit operator BuildElement(BuildObjectBase buildObjectBase)
    {
        return new BuildElement(buildObjectBase.nameUrl,buildObjectBase.transform.position,buildObjectBase.transform.rotation);
    }
    public bool isBuilded=false;
    public string nameUrl;
    [SerializeField]
    protected LayerMask layerMask;
    public bool AllowSetUp;
    public BoxCollider boxCollider;
    Action Submit;
    Action OnCancle;
    public virtual void OnInit()
    { }
    public virtual void AddListener(Action Submit,Action OnCancle)
    {
        this.Submit = Submit;
        this.OnCancle= OnCancle;
    }
    protected virtual void Awake()
    {
        if (boxCollider == null)
            boxCollider = GetComponent<BoxCollider>();
        if(!isBuilded)
        {
            DeActiveCollider();
        }
    }
    public virtual void DeActiveCollider()
    {
        boxCollider.enabled = false;
    }
    public virtual void ActiveCollider()
    {
        boxCollider.enabled = true;
        isBuilded = true;
    }
    bool isSpawnCanvas=false;
    protected virtual void Update()
    {
        if(!isBuilded&& isSpawnCanvas)
        {
            Vector2 screenPos = Camera.main.WorldToScreenPoint(transform.position);
            screenPos.x = Mathf.Max(10, Mathf.Min(screenPos.x, Screen.width - Screen.width*0.4f));
            screenPos.y = Mathf.Max(10, Mathf.Min(screenPos.y, Screen.height - Screen.height * 0.4f));
            if (RectTransformUtility.ScreenPointToWorldPointInRectangle(ImageRoot, screenPos, null, out Vector3 worldPoint))
            {
                ImageRoot.position = worldPoint;
            }
        }
    }
    GameObject canvasPrefab;
    RectTransform ImageRoot;
    public virtual void Start()
    {
        if (!isBuilded)
        {
            InitCanvas();
        }
    }
    private async void InitCanvas()
    {
        GameObject game = (GameObject)(await GameRoot.resourcesSystem.NameToLoadAsync(ConfigUtils.BuildPrefab_Config.Build_Canvas)).GetResult();
        canvasPrefab = Instantiate(game);
        canvasPrefab.transform.parent = transform;
        ImageRoot = canvasPrefab.transform.GetChild(0).GetComponent<RectTransform>();
        ImageRoot.Find("Cancle").GetComponent<Button>().onClick.AddListener(On_Cancle);
        ImageRoot.Find("Right").GetComponent<Button>().onClick.AddListener(On_Submit);
        ImageRoot.Find("RightRoate").GetComponent<Button>().onClick.AddListener(RightRoateObject);
        ImageRoot.Find("LeftRoate").GetComponent<Button>().onClick.AddListener(LeftRoateObject);
        movement =Movement.Move;
        isSpawnCanvas = true;

        rotateGestureRecognizer = new RotateGestureRecognizer();
        rotateGestureRecognizer.MinimumNumberOfTouchesToTrack = 2;
        rotateGestureRecognizer.MaximumNumberOfTouchesToTrack = 2;
        rotateGestureRecognizer.StateUpdated += RoateCallBack;
        FingersScript.Instance.AddGesture(rotateGestureRecognizer); // 注册手势识别器
    }
    public void LeftRoateObject()
    {
        (PlayerCanvas.MainCanvas as IPlayerCanvas).PlayClickAudioClip();
        transform.Rotate(Vector3.up * 22.5f);
    }
    public void RightRoateObject()
    {
        (PlayerCanvas.MainCanvas as IPlayerCanvas).PlayClickAudioClip();
        transform.Rotate(-Vector3.up * 22.5f);
    }
    RotateGestureRecognizer rotateGestureRecognizer;
    public virtual void RoateCallBack(GestureRecognizer gesture)
    {
        if(!isBuilded&& movement==Movement.Roate)
        {
            RotateGestureRecognizer rotateGestureRecognizer = gesture as RotateGestureRecognizer;
            transform.Rotate(Vector3.up, rotateGestureRecognizer.RotationDegreesDelta, Space.World);
        }
    }
    public virtual void On_Cancle()
    {
        if (rotateGestureRecognizer != null)
        {
            rotateGestureRecognizer.StateUpdated -= RoateCallBack;
            FingersScript.Instance.RemoveGesture(rotateGestureRecognizer);
        }
        OnCancle.Invoke();
        Destroy(gameObject);
    }
    protected virtual void SetPosition(Vector3 position)
    {
        /*position.x = (int)position.x;
        position.z = (int)position.z;*/
        transform.position= position;
    }
    protected bool OnHover = false;
    public virtual void On_HoveMove(Vector2 TouchPosition)
    {
        if (isBuilded|| movement != Movement.Move)
            return;
        if (!OnHover)
        {
            On_HoverStart(TouchPosition);
        }
        else
        {
            On_HoverUpdate(TouchPosition);
        }
    }
    protected bool CouldSetUp=false;
    public virtual void On_HoverUpdate(Vector2 TouchPosition)
    {
        Ray ray = Camera.main.ScreenPointToRay(TouchPosition);
        RaycastHit[] hits = Physics.RaycastAll(ray.origin, ray.direction, float.MaxValue, layerMask);
        bool HaveHit =false;
        foreach (RaycastHit hit in hits)
        {
            float y = hit.collider.bounds.extents.y + hit.collider.bounds.center.y + boxCollider.bounds.extents.y;
            SetPosition(new Vector3(hit.point.x, y, hit.point.z));
            HaveHit = true;
            break;
        }
        if (HaveHit)
        {
            CouldSetUp = true;
        }
        else
        {
            CouldSetUp = false;
            if (Physics.Raycast(ray, out RaycastHit hit, float.MaxValue, LayerMask.GetMask(ConfigUtils.BuildPrefab_Config.layerMaskName)))
            {
                float y = hit.collider.bounds.extents.y + hit.collider.bounds.center.y + boxCollider.bounds.extents.y;
                SetPosition( new Vector3(hit.point.x, y, hit.point.z));
            }
        }
    }
    public virtual void On_HoverStart(Vector2 TouchPosition)
    {
        OnHover = true;
    }
    public virtual void NoTouch()
    {
        OnHover=false;
    }
    public virtual void On_Submit()
    {
        if(!CouldSetUp)
            return;
        (PlayerCanvas.MainCanvas as IPlayerCanvas).PlayClickAudioClip();
        if (rotateGestureRecognizer != null)
        {
            rotateGestureRecognizer.StateUpdated -= RoateCallBack;
            FingersScript.Instance.RemoveGesture(rotateGestureRecognizer); // 从手势系统中移除
        }
        ActiveCollider();
        Destroy(canvasPrefab);
        Submit?.Invoke();
        transform.DOShakeRotation(0.5f, new Vector3(5,0,5));
    }
}