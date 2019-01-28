using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;
using UnityEngine.UI;

public class Touch : MonoBehaviour {

    public BallController BallController;
    public PassValue passValue;
    public Check CheckPanel;
    public CheckUIClick CheckUIClick;
    public GameObject speedObj, massObj,nameObj, Tag;

    public delegate void BallClickHanlder();
    public event BallClickHanlder BallClickEvent;
    public delegate void DestroyHandler();
    public event DestroyHandler DestroyEvent;
    public delegate void ActiveBallHandler();
    public event ActiveBallHandler ActiveBallEvent;

    private int index;
    private float t0=0.0f,t1;

    void Start () {
        Initiate();
        passValue.PassValueEvent2 += SetTag;
        BallClickEvent += Selected;
        DestroyEvent += HideAndRest;
        DestroyEvent += Unselected;
        BallController.ResetEvent += HideAndRest;
        BallController.ResetEvent += Unselected;
        BallController.HitEvent += Unselected;
        BallController.NoneUIClickEvent += Unselected;
    }

    public void PointClickHandler()
    {
        if(CheckPanel.CheckPanel())
        {
            t1 = Time.realtimeSinceStartup;
            if (t1 - t0 < 0.2f)
            {
                Destroy();
            }
            else
            {
                if (BallClickEvent != null) BallClickEvent();
            }
            t0 = t1;
        }
    }

    public void Selected()
    {
        SetTag();
        SetHighLight();
    }

    public void Unselected()
    {
        HideTag();
        CancleHighLight();
    }

    void HideAndRest()
    {
        HideBall();
        RestBall();
    }
    private void Initiate()
    {
        if (this.name.Equals("SmoothBall0"))
        {
            index = 0;
        }
        else index = 1;
    }

    /*摧毁球*/
    private void Destroy()
    {
        this.gameObject.SetActive(false);
        if (DestroyEvent != null)
        {
            DestroyEvent();
        }
        //还应该让SetAttributes消失
    }

    /*让设置Tag参数*/
    void SetTag()
    {
        Tag.SetActive(true);
        speedObj.GetComponent<Text>().text = "Initial Velocity: " + BallController.GetVelocity(index).ToString("#0.00") + " m/s";
        massObj.GetComponent<Text>().text = "Mass: " + this.GetComponent<Rigidbody>().mass.ToString("#0.00") + " kg";
        nameObj.GetComponent<Text>().text = "Ball " + index.ToString();
    }

    /*隐藏Tag*/
    void HideTag()
    {
        Tag.SetActive(false);
    }

    /*设置高亮*/
    void SetHighLight()
    {
        this.GetComponent<Highlighter>().ConstantOn(Color.yellow);
    }

    /*取消高亮*/
    void CancleHighLight()
    {
        this.GetComponent<Highlighter>().ConstantOffImmediate();
    }

    /*让球静止*/
    void RestBall()
    {
        this.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

    /*隐藏球*/
    void HideBall()
    {
        this.gameObject.SetActive(false);
    }

    /*显示球,由BallController调用*/
    public void ActiveBall()
    {
        this.gameObject.SetActive(true);
        if (ActiveBallEvent != null) ActiveBallEvent();
    }

    /*实时更新Tag的位置*/
    void Update () {
        if (Tag.activeSelf)
        {
            Vector3 position = this.GetComponent<Transform>().position;
            Vector2 screenPos = Camera.main.WorldToScreenPoint(position);
            Tag.GetComponent<RectTransform>().position = new Vector2(screenPos.x, screenPos.y + 300);
        }
	}
}
