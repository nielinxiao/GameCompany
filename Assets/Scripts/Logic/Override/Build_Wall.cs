using UnityEngine;

public class Build_Wall : BuildObjectBase
{
    public Collider AllowSubmit = null;
    public enum TransformAlign
    {
        Forward,
        Right
    }
    public TransformAlign Align = TransformAlign.Forward;
    public override void On_HoveMove(Vector2 TouchPosition)
    {
        if (isBuilded)
            return;
        bool HaveHit =false;
        Ray ray = Camera.main.ScreenPointToRay(TouchPosition);
        RaycastHit[] hits = Physics.RaycastAll(ray.origin, ray.direction, float.MaxValue, layerMask);
        foreach (RaycastHit hit in hits)
        {
            AllowSubmit = hit.collider;
            float y = hit.collider.bounds.extents.y + hit.collider.transform.position.y + boxCollider.bounds.extents.y;
            SetPosition(new Vector3(hit.collider.transform.position.x, y, hit.collider.transform.position.z));
            switch (Align)
            {
                case TransformAlign.Forward:
                    transform.forward = hit.collider.transform.forward;
                    break;
                case TransformAlign.Right:
                    transform.right = hit.collider.transform.forward;
                    break;
            }
            HaveHit = true;
            break;
        }
        if (HaveHit)
        {
            CouldSetUp = true;
        }
        else
        {
            AllowSubmit=null;
            CouldSetUp = false;
            if (Physics.Raycast(ray, out RaycastHit hit, float.MaxValue, LayerMask.GetMask(ConfigUtils.BuildPrefab_Config.layerMaskName)))
            {
                float y = hit.collider.bounds.extents.y+hit.collider.transform.position.y+ boxCollider.bounds.extents.y;
                SetPosition( new Vector3(hit.point.x, y, hit.point.z));
            }
        }
    }
    public override void On_Submit()
    {
        if(AllowSubmit==null)
            return;
        if(AllowSubmit.transform.parent.GetComponent<Build_Plane>().RegistWall(AllowSubmit))
        {
            base.On_Submit();
        }
    }
}
