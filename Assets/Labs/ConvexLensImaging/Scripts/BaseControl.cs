using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
public class BaseControl : MonoBehaviour
{
    private Vector3 screenPoint;
    private Vector3 offset;
    bool rotate = false;
    bool dragged = false;
    public Button button1;
    public GameObject obj;
    private Vector3 newPosition;//赋值给物体的坐标位置
    private Rigidbody body;
    Vector3 mapInitScale;
    void Start()
    {
        //获取自身重力
        //body = gameObject.GetComponent<Rigidbody>();
        //获取自身初始坐标
        button1.GetComponent<Button>().onClick.AddListener(TaskOnClick);
        newPosition = transform.position;
        mapInitScale = transform.localScale;
    }
    void TaskOnClick()
    {
        obj.SetActive(false);
        GameObject.Find("Model").GetComponent<BaseControl>().enabled =false;
    }
    Vector3 oldPosition1;
    Vector3 oldPosition2;

    bool isImage = false;
    void OnMouseDown()
    {
        if (Input.touchCount == 2)
        {
            //按下鼠标时获取自身当前坐标的屏幕坐标
            screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);
            //按下鼠标时记录物体的世界坐标，和鼠标世界坐标的向量偏移
            offset = gameObject.transform.position -
                Camera.main.ScreenToWorldPoint(new Vector3(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y, screenPoint.z));
            isImage = true;
            //记录初始位置
            oldPosition1 = Input.GetTouch(0).position;
            oldPosition2 = Input.GetTouch(1).position;
        }
 
    }

    void OnMouseDrag()
    {
        //保证单指移动
        if (Input.touchCount == 1)
        {
            //按下拖动鼠标时
            rotate = true;
            dragged = false;
        }
        if (Input.touchCount > 1)
        {
            //按下拖动鼠标时
            rotate = false;
            dragged = true;
            isImage = true;
        }
    }

    private void OnMouseExit()
    {
        dragged = false;
        rotate = false;
    }

    void FixedUpdate()
    {
        if (dragged)
        {
            dragged = false;
            //当前鼠标的屏幕坐标
            Vector3 curScreenPoint = new Vector3(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y, screenPoint.z);
            //保持物体与鼠标的位置偏移量
            newPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;
        }
        if (Input.touchCount == 1 && rotate)
        {
            Vector2 deltaPos = Input.GetTouch(0).deltaPosition;
            transform.Rotate(Vector3.down * deltaPos.x, Space.World);
            transform.Rotate(Vector3.right * deltaPos.y, Space.World);
        }
        if (Input.touchCount > 1)
        {
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
                Vector3 localScale = transform.localScale;
                Vector3 scale = new Vector3(localScale.x + scaleFactor,
                    localScale.y + scaleFactor,
                    localScale.z + scaleFactor);
                //在什么情况下进行缩放
                if (scale.x >= 0.2f && scale.y >= 0.2f && scale.z >= 0.2f )
                {
                    transform.localScale = scale;
                }
                //备份上一次触摸点的位置，用于对比
                //也是松开手时的位置
                oldPosition1 = tempPosition1;
                oldPosition2 = tempPosition2;
            }
            if (Input.GetTouch(0).phase == TouchPhase.Ended || Input.GetTouch(1).phase == TouchPhase.Ended)
            {
                isImage = false;
            }

        }


    }

    void LateUpdate()
    {
        if (Input.touchCount == 2)
        {
            //移动代码
            transform.position = newPosition;
        }

    }

}
