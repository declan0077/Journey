using UnityEngine;

public interface IActivate
{
    void StartActivate();
    void StopActivate();
    void OnNear();
    void OnFar(); 
}
