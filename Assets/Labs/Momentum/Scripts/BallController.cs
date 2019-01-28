using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;
using HighlightingSystem;

public class BallController : MonoBehaviour
{
    const int MAX = 2;
    public GameObject[] currentObj = new GameObject[MAX];
    public Check CheckPanel;
    public CheckUIClick CheckUIClick;
    public bool isStart;
    private bool hitTestEnabled = false;
    private float[] velocity = {0.5f,0};    // 两个小球的初速度存放在数组中，与currentObj相对应

    public delegate void ResetHandler();
    public event ResetHandler ResetEvent;
    public delegate void HitHandler();
    public event HitHandler HitEvent;
    public delegate void NoneUIClickHandler();
    public event NoneUIClickHandler NoneUIClickEvent;

    void Start()
    {
        isStart = false;
    }

    void Update()
    {
        if(Input.GetMouseButtonDown(0) && CheckPanel.CheckPanel())
        {
            Ray mRay = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit mHit;
            //射线检验  
            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");//只在Sphere层检测
            if (Physics.Raycast(mRay, out mHit, 20f, mask.value) || CheckUIClick.OnClickUI())
            {
                ;
            }
            else
            {
                if (hitTestEnabled)
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

                        List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
                        if (currentObj[0].activeSelf == false)
                        {
                            //currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
                            currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                            currentObj[0].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                            currentObj[0].GetComponent<Touch>().ActiveBall();

                            if (currentObj[1].activeSelf == true) currentObj[0].transform.position = new Vector3(currentObj[0].transform.position.x, currentObj[1].transform.position.y, currentObj[0].transform.position.z);
                        }
                        else if (currentObj[1].activeSelf == false)
                        {
                            //currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform) + Vector3.up * currentObj[1].transform.localScale.y;
                            currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                            currentObj[1].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                            currentObj[1].GetComponent<Touch>().ActiveBall();

                            if (currentObj[0].activeSelf == true) currentObj[1].transform.position = new Vector3(currentObj[1].transform.position.x, currentObj[0].transform.position.y, currentObj[1].transform.position.z);
                        }
                        else {
                            if (NoneUIClickEvent != null) NoneUIClickEvent();
                        }
                    }
                }
            }
        }
    }

    public void EnableHitTest()
    {
        hitTestEnabled = true;
    }

    public void HitAnother()
    {
        if (currentObj[0].activeSelf == true && currentObj[1].activeSelf == true)
        {
            if (HitEvent != null) HitEvent();
            //强行对齐
            currentObj[1].transform.position = new Vector3(currentObj[1].transform.position.x, currentObj[0].transform.position.y, currentObj[1].transform.position.z);
            Vector3 direction = currentObj[1].transform.position - currentObj[0].transform.position;
            currentObj[0].GetComponent<Rigidbody>().velocity = direction.normalized * velocity[0];     // Smoothball[0]的速度
            currentObj[1].GetComponent<Rigidbody>().velocity = direction.normalized * velocity[1];     // Smoothball[0]的速度
        }
        isStart = true;
    }

    public void Reset()
    {
        isStart = false;
        if (ResetEvent != null)
        {
            ResetEvent();
        }
    }

    public void SetVelocity(float v,int i) { 
        this.velocity[i] = v;
    }

    public float GetVelocity(int i) {
        return this.velocity[i];
    }
}

