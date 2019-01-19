using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;
using UnityEngine.UI;

public class HighLightingControl : MonoBehaviour
{
    protected Highlighter h0, h1;
    public GameObject obj1, obj2,speedObj1,speedObj2,massObj1,massObj2,nameObj1,nameObj2,tag1,tag2;
    private RectTransform rectTag1,rectTag2;
    private Vector3 position1,position2;
    public Text textSpeed1,textSpeed2,textName1,textName2,textmass1,textmass2;
    bool flag1 = false;
    bool flag2 = false;
    // Use this for initialization
    void Start()
    {
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
        speedObj1.GetComponent<Text>().text = obj1.GetComponent<Rigidbody>().velocity.magnitude.ToString();
        speedObj2.GetComponent<Text>().text = obj2.GetComponent<Rigidbody>().velocity.magnitude.ToString();
        massObj1.GetComponent<Text>().text = obj1.GetComponent<Rigidbody>().mass.ToString();
        massObj2.GetComponent<Text>().text = obj2.GetComponent<Rigidbody>().mass.ToString();
        nameObj1.GetComponent<Text>().text = "ball1";
        nameObj2.GetComponent<Text>().text = "ball2";
        position1 = obj1.GetComponent<Transform>().position;
        position2 = obj2.GetComponent<Transform>().position;
        Vector2 screenPos0 = Camera.main.WorldToScreenPoint(position1);
        Vector2 screenPos1 = Camera.main.WorldToScreenPoint(position2);
        rectTag1.position = new Vector2(screenPos0.x + 200, screenPos0.y + 200);
        rectTag2.position = new Vector2(screenPos1.x + 200, screenPos1.y + 200);

        
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
                }else if (hit.collider.gameObject == obj2 && flag2)
                {
                    h1.ConstantOn(Color.yellow);
                    tag2.SetActive(true);
                }
                if (hit.collider.gameObject == obj1)
                {
                    flag1 = true;
                }else if (hit.collider.gameObject == obj2)
                {
                    flag2 = true;
                }
            }
            else
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
}
