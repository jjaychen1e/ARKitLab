using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;
using UnityEngine.UI;

public class HighLightingControl : MonoBehaviour
{
    protected Highlighter h0, h1;
    public GameObject obj1, obj2,speedObj1,speedObj2,massObj1,massObj2,nameObj1,nameObj2;
    private RectTransform rectTextSpeed1,rectTextSpeed2,rectTextName1,rectTextName2,rectTextMass1,rectTextMass2;
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
        speedObj1.SetActive(false);
        speedObj2.SetActive(false);
        massObj1.SetActive(false);
        massObj2.SetActive(false);
        nameObj1.SetActive(false);
        nameObj2.SetActive(false);
        rectTextSpeed1 = textSpeed1.GetComponent<RectTransform>();
        rectTextSpeed2 = textSpeed2.GetComponent<RectTransform>();
        rectTextName1 = textName1.GetComponent<RectTransform>();
        rectTextName2 = textName2.GetComponent<RectTransform>();
        rectTextMass1 = textmass1.GetComponent<RectTransform>();
        rectTextMass2 = textmass2.GetComponent<RectTransform>();
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
        rectTextSpeed1.position = new Vector2(screenPos0.x + 200, screenPos0.y + 200);
        rectTextSpeed2.position = new Vector2(screenPos1.x + 200, screenPos1.y + 200);
        rectTextMass1.position = new Vector2(screenPos0.x + 200, screenPos0.y + 150);
        rectTextMass2.position = new Vector2(screenPos1.x + 200, screenPos1.y + 150);
        rectTextName1.position = new Vector2(screenPos0.x + 200, screenPos0.y + 100);
        rectTextName2.position = new Vector2(screenPos1.x + 200, screenPos1.y + 100);
        
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
                    massObj1.SetActive(true);
                    nameObj1.SetActive(true);
                    speedObj1.SetActive(true);
                }
                if (hit.collider.gameObject == obj2 && flag2)
                {
                    h1.ConstantOn(Color.yellow);
                    massObj2.SetActive(true);
                    nameObj2.SetActive(true);
                    speedObj2.SetActive(true);
                }
                if (hit.collider.gameObject == obj1)
                {
                    flag1 = true;
                }
                if (hit.collider.gameObject == obj2)
                {
                    flag2 = true;
                }
            }
            else
            {
                h0.ConstantOffImmediate();
                h1.ConstantOffImmediate();
                massObj1.SetActive(false);
                nameObj1.SetActive(false);
                speedObj1.SetActive(false);
                massObj2.SetActive(false);
                nameObj2.SetActive(false);
                speedObj2.SetActive(false);
            }
        }
        if (obj1.activeSelf == false)
        {
            flag1 = false;
            massObj1.SetActive(false);
            nameObj1.SetActive(false);
            speedObj1.SetActive(false);
        }
        if (obj2.activeSelf == false)
        {
            flag2 = false;
            massObj2.SetActive(false);
            nameObj2.SetActive(false);
            speedObj2.SetActive(false);
        }
    }
}
