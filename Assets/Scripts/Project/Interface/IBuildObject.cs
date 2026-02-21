using UnityEngine;

public interface IBuildObject
{
    public void On_Submit();
    public void On_Cancle();
    public void On_HoveMove(Vector2 TouchPosition);
}
[System.Serializable]
public struct Vector3_Json
{
    public float x,y,z;
    public Vector3_Json(float x, float y, float z)
    {
        this.y = y; this.x = x; this.z = z;
    }
    public static implicit operator Vector3(Vector3_Json v)
    {
        return new Vector3(v.x, v.y, v.z);
    }
    public static implicit operator Vector3_Json(Vector3 vector3)
    {
        return new Vector3_Json(vector3.x, vector3.y, vector3.z);
    }
}
[System.Serializable]
public struct Quaternion_Json
{
    public float x,y,z,w;
    public Quaternion_Json(float x,float y,float z,float w)
    {
        this.w = w;
        this.x = x; 
        this.y = y;
        this.z = z;
    }
    public static implicit operator Quaternion_Json(Quaternion quaternion)
    {
        return new Quaternion_Json(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
    }
    public static implicit operator Quaternion(Quaternion_Json quaternion_Json)
    {
        return new Quaternion(quaternion_Json.x, quaternion_Json.y, quaternion_Json.z, quaternion_Json.w);
    }
}
