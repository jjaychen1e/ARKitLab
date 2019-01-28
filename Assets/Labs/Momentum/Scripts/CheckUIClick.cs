using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CheckUIClick : MonoBehaviour {
    GraphicRaycaster m_Raycaster;
    PointerEventData m_PointerEventData;
    EventSystem m_EventSystem;
    public GameObject obj;
    //public delegate void NoneUIClickHandler();
    //public event NoneUIClickHandler NoneUIClickEvent;

    public bool OnClickUI()
    {
        if (Input.GetMouseButtonDown(0))
        {
            ////Fetch the Raycaster from the GameObject (the Canvas)
            m_Raycaster = obj.GetComponent<GraphicRaycaster>();
            ////Fetch the Event System from the Scene
            m_EventSystem = GetComponent<EventSystem>();
            //Set up the new Pointer Event
            m_PointerEventData = new PointerEventData(m_EventSystem);
            //Set the Pointer Event Position to that of the mouse position
            m_PointerEventData.position = Input.mousePosition;

            //Create a list of Raycast Results
            List<RaycastResult> results = new List<RaycastResult>();

            //Raycast using the Graphics Raycaster and mouse click position
            m_Raycaster.Raycast(m_PointerEventData, results);

            ////For every result returned, output the name of the GameObject on the Canvas hit by the Ray
            //foreach (RaycastResult result in results)
            //{
            //    Debug.Log("Hit " + result.gameObject.name);
            //}

            if (results.Count > 0)
            {
                return true;
            }
            //if (NoneUIClickEvent != null) NoneUIClickEvent();
        }
        return false;
    }

    private void Update()
    {
        OnClickUI();
    }
}
