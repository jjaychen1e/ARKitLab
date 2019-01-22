using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using HighlightingSystem;
using UnityEngine.UI;

public class HighLightingControl : MonoBehaviour
{
    public HitResultController hitResultController;
    protected Highlighter h0, h1;
    public GameObject obj1, obj2, speedObj1, speedObj2, massObj1, massObj2, nameObj1, nameObj2, tags, tag1, tag2, SetAttributes;
    private RectTransform rectTag1, rectTag2;
    private Vector3 position1, position2;
    public Text textSpeed1, textSpeed2, textName1, textName2, textmass1, textmass2;
    bool flag1 = false;
    bool flag2 = false;
    GraphicRaycaster m_Raycaster;
    PointerEventData m_PointerEventData;
    EventSystem m_EventSystem;


    // Use this for initialization
    void Start()
    {
        ////Fetch the Raycaster from the GameObject (the Canvas)
        //m_Raycaster = tags.GetComponent<GraphicRaycaster>();
        ////Fetch the Event System from the Scene
        //m_EventSystem = GetComponent<EventSystem>();

        //高光实现代码
        h0 = obj1.GetComponent<Highlighter>();
        h1 = obj2.GetComponent<Highlighter>();
        //Ui实现代码
        //speedObj1.SetActive(false);
        //speedObj2.SetActive(false);
        //massObj1.SetActive(false);
        //massObj2.SetActive(false);
        //nameObj1.SetActive(false);
        //nameObj2.SetActive(false);
        rectTag1 = tag1.GetComponent<RectTransform>();
        rectTag2 = tag2.GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {

        speedObj1.GetComponent<Text>().text = "Initial Velocity: " + hitResultController.getVelocity(0).ToString("#0.00");
        speedObj2.GetComponent<Text>().text = "Initial Velocity: " + hitResultController.getVelocity(1).ToString("#0.00");
        massObj1.GetComponent<Text>().text = "Mass: " + obj1.GetComponent<Rigidbody>().mass.ToString("#0.00");
        massObj2.GetComponent<Text>().text = "Mass: " + obj2.GetComponent<Rigidbody>().mass.ToString("#0.00");
        nameObj1.GetComponent<Text>().text = "Ball 1";
        nameObj2.GetComponent<Text>().text = "Ball 2";
        position1 = obj1.GetComponent<Transform>().position;
        position2 = obj2.GetComponent<Transform>().position;
        Vector2 screenPos0 = Camera.main.WorldToScreenPoint(position1);
        Vector2 screenPos1 = Camera.main.WorldToScreenPoint(position2);
        rectTag1.position = new Vector2(screenPos0.x, screenPos0.y + 200);
        rectTag2.position = new Vector2(screenPos1.x, screenPos1.y + 200);


        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");
            if (Physics.Raycast(ray, out hit, 20f, mask.value))
            {
                if (hit.collider.gameObject == obj1 && flag1)
                {
                    h0.ConstantOn(Color.yellow);
                    tag1.SetActive(true);
                }
                else if (hit.collider.gameObject == obj2 && flag2)
                {
                    h1.ConstantOn(Color.yellow);
                    tag2.SetActive(true);
                }
                if (hit.collider.gameObject == obj1)
                {
                    flag1 = true;
                }
                else if (hit.collider.gameObject == obj2)
                {
                    flag2 = true;
                }
            }
            else if (!OnClickUI(tags) && !OnClickUI(SetAttributes))
            {
                h0.ConstantOffImmediate();
                h1.ConstantOffImmediate();
                tag1.SetActive(false);
                tag2.SetActive(false);
            }
        }
        if (obj1.activeSelf == false)
        {
            flag1 = false;
            tag1.SetActive(false);
        }
        if (obj2.activeSelf == false)
        {
            flag2 = false;
            tag2.SetActive(false);
        }
    }

    private bool OnClickUI(GameObject obj)
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
        }

        return false;
    }
}
