using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class KeyPressed : MonoBehaviour
{
    //event#
    public UnityEvent onKeyPress;
    public void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            //InvokeEvent();
            onKeyPress.Invoke();
        }
    }

    
}
