using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PointerDown : MonoBehaviour, IPointerDownHandler
{

    //public void PointDownHandler()//在cube上挂上EventTrigger并指定该方法
    //{
    //    transform.position += new Vector3(1, 1, 1);
    //}

    public void OnPointerDown(PointerEventData eventData)//实现接口调用该方法
    {
     Debug.Log(eventData.button);//这里如果用鼠标左键触发就打印life，右键触发就打印right
     Debug.Log(eventData);//你可以通过eventData获取更多信息，这里是打印鼠标的位置(跟Input.mousePosition输出结果是一样的)以及delta(0.0,0.0),不知道是啥...
     Debug.Log(Input.mousePosition);
     Debug.Log(eventData.pointerPressRaycast.gameObject.name);
     Debug.Log("press");
    }

}
