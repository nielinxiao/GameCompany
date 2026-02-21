using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Build_Plane : BuildObjectBase
{
    protected override void Awake()
    {
       base.Awake();
    }
    private void OnDrawGizmos()
    {
        foreach (var collider in colliders)
        {
            Gizmos.DrawSphere(collider.bounds.center, 1f);
        }
    }
    public LayerMask wallMask;
    public override void OnInit()
    {
        base.OnInit();
        foreach (var collider in colliders)
        {
            Collider[]colliders= Physics.OverlapSphere(collider.bounds.center,1f, wallMask);
            if(colliders.Length>0)
            {
                keyValuePairs[collider] = true;
            }
        }
    }
    public override void ActiveCollider()
    {
        base.ActiveCollider();
        foreach (var collider in colliders)
        {
            collider.enabled = true;
            keyValuePairs.Add(collider, false);
        }
        isBuilded = true;
    }
    public override void DeActiveCollider()
    {
        base.DeActiveCollider();
        foreach (var collider in colliders)
        {
            collider.enabled = false;
        }
    }
    public LayerMask Interface;
    public override void On_HoverUpdate(Vector2 TouchPosition)
    {
        if (isBuilded)
            return;
        CouldSetUp = true;
        Ray ray = Camera.main.ScreenPointToRay(TouchPosition);
        RaycastHit[] hits_Interface = Physics.RaycastAll(ray.origin, ray.direction, float.MaxValue, Interface);
        if(hits_Interface.Length > 0)
        {
            foreach (RaycastHit hit in hits_Interface)
            {
                SetPosition(hit.transform.parent.position + 2 * (hit.transform.position - hit.transform.parent.position));
                break;
            }
        }
        else
        {
            RaycastHit[] hits = Physics.RaycastAll(ray.origin, ray.direction, float.MaxValue, layerMask);
            foreach (RaycastHit hit in hits)
            {
                float y = hit.collider.bounds.extents.y + hit.collider.transform.position.y + boxCollider.bounds.extents.y;
                //SetPosition(offset + new Vector3(hit.point.x, y, hit.point.z));
                SetPosition(  new Vector3(hit.point.x, y, hit.point.z));
                break;
            }
        }
    }
    public override void On_Submit()
    {
        if (!CouldSetUp)
            return;
        base.On_Submit();
    }
    Dictionary<Collider, bool>keyValuePairs = new Dictionary<Collider, bool>();
    public List<Collider> colliders=new List<Collider>();
    public bool RegistWall(Collider collider)
    {
        if (keyValuePairs.ContainsKey(collider)) 
        {
            if(!keyValuePairs[collider])
            {
                keyValuePairs[collider] = true;
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }    
    }
}
