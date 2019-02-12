using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ModelController : MonoBehaviour {

    public UnityARCameraManager UnityARCameraManager;
    public GameObject Model;
    public GameObject Button;
    public GameObject GeneratePlane, FocusSquare;

    public Vector3 transforme; // remove vector
    public GameObject obj1, obj2, obj3;
    public float distance1,distance2,distance;
    public Vector3 oldRemove1, oldRemove2;

    private bool flag;
    private bool adjustable = true;

    public delegate void SetModelActiveHandler();
    public event SetModelActiveHandler SetModelActiveEvent;
    public delegate void SetModelInactiveHandler();
    public event SetModelInactiveHandler SetModelInactiveEvent;
    public delegate void ResetHandler();
    public event ResetHandler ResetHandlerEvent;

    Vector3 oldPosition1;
    Vector3 oldPosition2;

    // Use this for initialization
    void Start () {
        ResetHandlerEvent += SetModelInactive;
        ResetHandlerEvent += HideButton;
        ResetHandlerEvent += SetAdjustableTrue;
    }
	
	// Update is called once per frame
	void Update () {
        CheckButton();
        if (Model.activeSelf == false)
        {
            if (Input.GetMouseButtonDown(0))
            {
                var touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began)
                {
                    Vector3 screenPos = Camera.main.ScreenToViewportPoint(touch.position);
                    ARPoint point = new ARPoint
                    {
                        x = screenPos.x,
                        y = screenPos.y
                    };
                    List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlane);
                    if (flag == false && hitTestResults.Count > 0)
                    {
                        UnityARCameraManager.CloseDetection();
                        flag = true;
                        GeneratePlane.GetComponent<FocusSquare>().enabled = false;
                        FocusSquare.SetActive(false);
                    }
                    /* == 第一次点击的时候关闭平面检测 */

                    Model.transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                    Model.transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                    SetModelActive();
                    Button.SetActive(true);
                }
            }
        }else if(adjustable)
        {
            if (Input.touchCount == 2)
            {
                var touch1 = Input.GetTouch(0);
                var touch2 = Input.GetTouch(1);
                if(touch1.phase == TouchPhase.Moved && touch2.phase == TouchPhase.Moved)
                {
                    Vector3 screenPos = Camera.main.ScreenToViewportPoint((touch1.position+touch2.position)/2);
                    ARPoint point = new ARPoint
                    {
                        x = screenPos.x,
                        y = screenPos.y
                    };
                    List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlane);
                    Model.transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                }
                
                //保证重新开始双指触摸记录的初始位置不是松开手时的位置，而是初始触摸的位置
                if (Input.GetTouch(0).phase == TouchPhase.Began || Input.GetTouch(1).phase == TouchPhase.Began)
                {
                    //记录初始位置
                    oldPosition1 = Input.GetTouch(0).position;
                    oldPosition2 = Input.GetTouch(1).position;
                }

                if (Input.GetTouch(0).phase == TouchPhase.Moved || Input.GetTouch(1).phase == TouchPhase.Moved)
                {
                    //计算出当前两点触摸点的位置
                    var tempPosition1 = Input.GetTouch(0).position;
                    var tempPosition2 = Input.GetTouch(1).position;

                    float currentTouchDistance = Vector2.Distance(tempPosition1, tempPosition2);
                    float lastTouchDistance = Vector2.Distance(oldPosition1, oldPosition2);

                    //计算上次和这次双指触摸之间的距离差距
                    //然后去更改摄像机的距离
                    float distance = currentTouchDistance - lastTouchDistance;
                    float scaleFactor = distance / 200f;
                    Vector3 localScale = Model.transform.localScale;
                    Vector3 scale = new Vector3(localScale.x + scaleFactor,
                        localScale.y + scaleFactor,
                        localScale.z + scaleFactor);
                    //在什么情况下进行缩放
                    if (scale.x >= 0.2f && scale.y >= 0.2f && scale.z >= 0.2f)
                    {
                        Model.transform.localScale = scale;
                    }
                    //备份上一次触摸点的位置，用于对比
                    //也是松开手时的位置
                    oldPosition1 = tempPosition1;
                    oldPosition2 = tempPosition2;
                }

                //if (Vector2.Dot(touch1.deltaPosition,touch2.deltaPosition)<=0 && touch1.position.y < touch2.position.y)
                //{
                //    Model.transform.Rotate(Vector3.down * touch1.deltaPosition.x * 0.75f, Space.World);
                //}
                //else if (Vector2.Dot(touch1.deltaPosition, touch2.deltaPosition) <= 0 && touch1.position.y > touch2.position.y)
                //{
                //    Model.transform.Rotate(Vector3.down * touch2.deltaPosition.x * 0.75f, Space.World);
                //}
            }
            else if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 deltaPos = Input.GetTouch(0).deltaPosition;
                Model.transform.Rotate(Vector3.down * deltaPos.x * 0.5f, Space.World);
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

    public void SetAdjustableFalse()
    {
        adjustable = false;
        transforme = obj1.transform.position - obj2.transform.position;
        oldRemove1 = obj1.transform.position;
        oldRemove2 = obj2.transform.position;
        distance1 = Vector3.Distance(obj1.transform.position, obj3.transform.position);
        distance2 = Vector3.Distance(obj2.transform.position, obj3.transform.position);
    }

    public void SetAdjustableTrue()
    {
        adjustable = true;
    }

    public void HideButton()
    {
        Button.SetActive(false);
    }
    public bool CheckButton()
    {
        if (!adjustable) return true;
        return false;
    }
}
