using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ModelController : MonoBehaviour {

    public UnityARCameraManager UnityARCameraManager;
    public GameObject Model;

    private bool flag;

    public delegate void SetModelActiveHandler();
    public event SetModelActiveHandler SetModelActiveEvent;
    public delegate void SetModelInactiveHandler();
    public event SetModelInactiveHandler SetModelInactiveEvent;
    public delegate void ResetHandler();
    public event ResetHandler ResetHandlerEvent;

    // Use this for initialization
    void Start () {
        ResetHandlerEvent += SetModelInactive;
    }
	
	// Update is called once per frame
	void Update () {
        if(Model.activeSelf == false)
            if (Input.GetMouseButtonDown(0))
            {
                if (flag == false) { UnityARCameraManager.CloseDetection(); flag = true; }
                /* == 第一次点击的时候关闭平面检测 */

                var touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began)
                {
                    Vector3 screenPos = Camera.main.ScreenToViewportPoint(touch.position);
                    ARPoint point = new ARPoint
                    {
                        x = screenPos.x,
                        y = screenPos.y
                    };
                    List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
                    Model.transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                    Model.transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                    SetModelActive();
                }
            }
    }

    void SetModelActive()
    {
        Model.SetActive(true);
        if (SetModelActiveEvent != null) SetModelActiveEvent();
    }

    void SetModelInactive()
    {
        Model.SetActive(false);
        if (SetModelInactiveEvent != null) SetModelInactiveEvent();
    }

    public void  Reset()
    {
        if (ResetHandlerEvent != null) ResetHandlerEvent();
    }
}
