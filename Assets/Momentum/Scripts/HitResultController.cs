using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;


public class HitResultController : MonoBehaviour {
    const int MAX = 2;
    public GameObject[] currentObj = new GameObject[MAX];
    private bool hitTestEnabled = false;


    // Use this for initialization
    void Start () {

    }

	// Update is called once per frame
	void Update () {
        Ray mRay = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit mHit;
        //射线检验  
        LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");//只在Sphere层检测
        if (Physics.Raycast(mRay, out mHit, 20f, mask.value))
        {
            ;
        }
        else{

            if (hitTestEnabled && Input.touchCount > 0)
            {//如果有触摸
                var touch = Input.GetTouch(0); //获取第一个触摸点
                if (touch.phase == TouchPhase.Began)//触摸点的状态是开始或者移动中
                {
                    //屏幕坐标转为视口坐标
                    //Screenspace is defined in pixels.The bottom-left of the screen is (0, 0); 
                    //the right-top is (pixelWidth, pixelHeight).The z position is in world units from the camera.
                    //Viewport space is normalized and relative to the camera. The bottom-left of the camera is (0, 0);
                    //the top-right is (1, 1).The z position is in world units from the camera.
                    Vector3 screenPos = Camera.main.ScreenToViewportPoint(touch.position);
                    ARPoint point = new ARPoint//ARPoint 是个结构体
                    {
                        x = screenPos.x,
                        y = screenPos.y
                    };

                    /*
                    ARHitTestResultType[] resultTypes = {
                        //ARHitTestResultType.ARHitTestResultTypeFeaturePoint,
                        //ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane,
                        //ARHitTestResultType.ARHitTestResultTypeExistingPlane,
                        ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
                    };

                    foreach (ARHitTestResultType resultType in resultTypes)
                    {
                        List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultType);
                        if(hitTestResults.Count > 0){
                            foreach(var hitResult in hitTestResults){
                                if (currentObj[0] == null)
                                {
                                    currentObj[0] = Instantiate(obj);
                                    //currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
                                    currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                                    currentObj[0].transform.rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
                                    if (currentObj[1] != null) currentObj[0].transform.position.Set(currentObj[0].transform.position.x, currentObj[1].transform.position.y, currentObj[0].transform.position.z);
                                    //设置颜色还没有完成
                                    currentObj[0].mass = 5;
                                }else if (currentObj[1] == null)
                                {
                                    currentObj[1] = Instantiate(obj);
                                    //currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
                                    currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                                    currentObj[1].transform.rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
                                    if (currentObj[0] != null) currentObj[1].transform.position.Set(currentObj[1].transform.position.x, currentObj[0].transform.position.y, currentObj[1].transform.position.z);
                                    //设置颜色还没有完成
                                }
                            }
                        }
                    }
                    */

                    List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
                    if (currentObj[0].activeSelf == false)
                    {
                        //currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
                        currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                        currentObj[0].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                        currentObj[0].SetActive(true);

                        if (currentObj[1].activeSelf == true) currentObj[0].transform.position = new Vector3(currentObj[0].transform.position.x, currentObj[1].transform.position.y, currentObj[0].transform.position.z);
                        //设置颜色
                        //currentObj[0].GetComponent<Material>().color = Color.blue;


                        currentObj[0].GetComponent<Rigidbody>().mass = 5;
                    }
                    else if (currentObj[1].activeSelf == false)
                    {
                        //currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
                        currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
                        currentObj[1].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
                        currentObj[1].SetActive(true);

                        if (currentObj[0].activeSelf == true) currentObj[1].transform.position = new Vector3(currentObj[1].transform.position.x, currentObj[0].transform.position.y, currentObj[1].transform.position.z);
                        //设置颜色还没有完成

                    }
                }
            }

        }


    }

    public void EnableHitTest(){
        hitTestEnabled = true;
    }

    public void OnEnableHitTestClick()
    {
        EnableHitTest();
    }

    public void HitAnother(){
        if(currentObj[0].activeSelf == true && currentObj[1].activeSelf == true)
        {
            Vector3 direction = currentObj[1].transform.position - currentObj[0].transform.position;
            currentObj[0].GetComponent<Rigidbody>().velocity = direction.normalized*0.5f;
        }
    }

    public void Reset()
    {
        foreach (var item in currentObj)
        {
            if (item.activeSelf == true)
            {
                item.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
                item.SetActive(false);

            }
        }
    }
}


//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.XR.iOS;
//using UnityEngine.UI;
//using HighlightingSystem;

//public class HitResultController : MonoBehaviour
//{
//    const int MAX = 2;
//    public GameObject[] currentObj = new GameObject[MAX];
//    private bool hitTestEnabled = false;
//    protected Highlighter h0, h1;

//    // Use this for initialization
//    void Start()
//    {
//        h0 = currentObj[0].AddComponent<Highlighter>();
//        h1 = currentObj[1].AddComponent<Highlighter>();
//    }

//    // Update is called once per frame
//    void Update()
//    {

//        if (Input.touchCount > 0)
//        {
//            Ray mRay = Camera.main.ScreenPointToRay(Input.mousePosition);
//            RaycastHit mHit;
//            //射线检验  
//            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");//只在Sphere层检测
//            if (Physics.Raycast(mRay, out mHit, 20f, mask.value))
//            {
//                if (mHit.collider.gameObject == currentObj[0])
//                {
//                    h0.ConstantOn(Color.yellow);
//                }
//                else if (mHit.collider.gameObject == currentObj[1])
//                {
//                    h1.ConstantOn(Color.yellow);
//                }
//            }
//            else
//            {
//                h0.ConstantOffImmediate();
//                h1.ConstantOffImmediate();
//                if (hitTestEnabled)
//                {
//                    var touch = Input.GetTouch(0); //获取第一个触摸点
//                    if (touch.phase == TouchPhase.Began)//触摸点的状态是开始
//                    {
//                        //屏幕坐标转为视口坐标
//                        //Screenspace is defined in pixels.The bottom-left of the screen is (0, 0); 
//                        //the right-top is (pixelWidth, pixelHeight).The z position is in world units from the camera.
//                        //Viewport space is normalized and relative to the camera. The bottom-left of the camera is (0, 0);
//                        //the top-right is (1, 1).The z position is in world units from the camera.
//                        Vector3 screenPos = Camera.main.ScreenToViewportPoint(touch.position);
//                        ARPoint point = new ARPoint//ARPoint 是个结构体
//                        {
//                            x = screenPos.x,
//                            y = screenPos.y
//                        };

//                        List<ARHitTestResult> hitTestResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
//                        if (currentObj[0].activeSelf == false)
//                        {
//                            //currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
//                            currentObj[0].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
//                            currentObj[0].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
//                            currentObj[0].SetActive(true);

//                            if (currentObj[1].activeSelf == true) currentObj[0].transform.position = new Vector3(currentObj[0].transform.position.x, currentObj[1].transform.position.y, currentObj[0].transform.position.z);
//                            //设置颜色
//                            //currentObj[0].GetComponent<Material>().color = Color.blue;


//                            currentObj[0].GetComponent<Rigidbody>().mass = 5;
//                        }
//                        else if (currentObj[1].activeSelf == false)
//                        {
//                            //currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform) + Vector3.up * currentObj[0].transform.localScale.y;
//                            currentObj[1].transform.position = UnityARMatrixOps.GetPosition(hitTestResults[hitTestResults.Count - 1].worldTransform);
//                            currentObj[1].transform.rotation = UnityARMatrixOps.GetRotation(hitTestResults[hitTestResults.Count - 1].worldTransform);
//                            currentObj[1].SetActive(true);

//                            if (currentObj[0].activeSelf == true) currentObj[1].transform.position = new Vector3(currentObj[1].transform.position.x, currentObj[0].transform.position.y, currentObj[1].transform.position.z);
//                            //设置颜色还没有完成

//                        }
//                    }
//                }
//            }

//        }
//    }

//    public void EnableHitTest()
//    {
//        hitTestEnabled = true;
//    }

//    public void OnEnableHitTestClick()
//    {
//        EnableHitTest();
//    }

//    public void HitAnother()
//    {
//        if (currentObj[0].activeSelf == true && currentObj[1].activeSelf == true)
//        {
//            Vector3 direction = currentObj[1].transform.position - currentObj[0].transform.position;
//            currentObj[0].GetComponent<Rigidbody>().velocity = direction.normalized * 0.5f;
//        }
//    }

//    public void Reset()
//    {
//        foreach (var item in currentObj)
//        {
//            if (item.activeSelf == true)
//            {
//                item.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
//                item.SetActive(false);

//            }
//        }
//    }
//}



