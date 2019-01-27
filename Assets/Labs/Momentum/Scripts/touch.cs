using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;
using UnityEngine.UI;

public class Touch : MonoBehaviour {

    public HitResultController hitResultController;
    public PassValue passValue;
    public GameObject speedObj, massObj,nameObj, Tag;

    public delegate void BallClickHanlder();
    public event BallClickHanlder BallClickEvent;
    public delegate void DestroyHandler();
    public event DestroyHandler DestroyEvent;

    private int index;
    private float t0=0.0f,t1;

    void Start () {
        Initiate();
        passValue.PassValueEvent += SetTag;
        BallClickEvent += SetTag;
        BallClickEvent += SetHighLight;
        DestroyEvent += HideBall;
        DestroyEvent += HideTag;
        DestroyEvent += CalcelHighLight;
    }

    public void PointClickHandler()
    {
        t1 = Time.realtimeSinceStartup;
        if (t1 - t0 < 0.2f){
            Destroy();
        }else{

            if (BallClickEvent != null) BallClickEvent();
        }
        t0 = t1;
    }

    private void Initiate()
    {
        if (this.name.Equals("SmoothBall0"))
        {
            index = 0;
        }
        else index = 1;
    }

    private void Destroy()
    {
        this.gameObject.SetActive(false);
        if (DestroyEvent != null)
        {
            DestroyEvent();
        }
        //暂时的,因为还没有事件订阅DestroyEvent
        this.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);

    }

    void SetTag()
    {
        Tag.SetActive(true);
        speedObj.GetComponent<Text>().text = "Initial Velocity: " + hitResultController.getVelocity(index).ToString("#0.00") + " m/s";
        massObj.GetComponent<Text>().text = "Mass: " + this.GetComponent<Rigidbody>().mass.ToString("#0.00") + " kg";
        nameObj.GetComponent<Text>().text = "Ball " + index.ToString();
    }

    void HideTag()
    {
        Tag.SetActive(false);
    }

    void SetHighLight()
    {
        this.GetComponent<Highlighter>().ConstantOn(Color.yellow);
    }

    void CalcelHighLight()
    {
        this.GetComponent<Highlighter>().ConstantOffImmediate();
    }

    void HideBall()
    {
        this.gameObject.SetActive(false);
    }

    void Update () {
        if (Tag.activeSelf)
        {
            Vector3 position = this.GetComponent<Transform>().position;
            Vector2 screenPos = Camera.main.WorldToScreenPoint(position);
            Tag.GetComponent<RectTransform>().position = new Vector2(screenPos.x, screenPos.y + 200);
        }
	}
}
