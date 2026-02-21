using System;
using UnityEngine;

public interface IProcedure
{
    public Action OnComplited { get; set; }
}
