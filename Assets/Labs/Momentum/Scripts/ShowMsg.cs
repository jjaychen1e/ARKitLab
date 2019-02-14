
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class ShowMsg : NetworkBehaviour
{
    private const int max_time = 5;

    public GameObject ball0;
    public GameObject ball1;
    public GameObject BallController;
    public Animator animator;

    [SyncVar]
    private Msg[] msg = new Msg[max_time];

    private int cnt;
    private bool s_lock, c_lock; //只须检测一次
    private Vector3 direction;
    private int wait;

    // Use this for initialization
    void Start()
    {
        cnt = -1;
        wait = 0;
        c_lock = true;
        s_lock = true;
    }

    private float GetVel(Vector3 v)
    {
        if (Vector3.Dot(v, direction) >= 0)
        {
            return v.magnitude;
        }
        else
        {
            return -1.0f * v.magnitude;
        }
    }
    //碰撞前的一次采样
    void OnStart()
    {
        cnt++;
        if (cnt == max_time)
        {
            cnt = 0;
        }
        direction = ball1.GetComponent<Rigidbody>().position - ball0.GetComponent<Rigidbody>().position;
        msg[cnt] = new Msg();
        msg[cnt].mass0 = ball0.GetComponent<Rigidbody>().mass;
        msg[cnt].mass1 = ball1.GetComponent<Rigidbody>().mass;
        msg[cnt].speed0[0] = GetVel(ball0.GetComponent<Rigidbody>().velocity);
        msg[cnt].speed1[0] = GetVel(ball1.GetComponent<Rigidbody>().velocity);
    }

    //碰撞后的采样
    void OnCollision()
    {
        msg[cnt].speed0[1] = GetVel(ball0.GetComponent<Rigidbody>().velocity);
        msg[cnt].speed1[1] = GetVel(ball1.GetComponent<Rigidbody>().velocity);
    }

    // Update is called once per frame
    void Update()
    {
        if(s_lock && BallController.GetComponent<BallController>().isStart)
        {
            s_lock = false;//检测之后就进不来了
            c_lock = true;
            OnStart();
        }

        if (c_lock && ball0.GetComponent<IsCollide>().isCollide)
        {
            if (wait > 25)
            {
                wait = 0;
                s_lock = true;//碰撞之后第一个锁打开，不过isStart是false，需要等待下一次hit才改
                c_lock = false;
                OnCollision();
                ball0.GetComponent<IsCollide>().isCollide = false;
                BallController.GetComponent<BallController>().isStart = false;//结束后让一切都是false
            }
            else wait++;
        }
    }

    public void TablePrint()
    {
        for (int i = 0; i <= cnt; i++)
        {

            GameObject Mass0 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Mass 1");
            Mass0.GetComponent<Text>().text = msg[i].mass0.ToString();

            GameObject Velocity01 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Velocity0 1");
            Velocity01.GetComponent<Text>().text = msg[i].speed0[0].ToString();

            GameObject Velocity11 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Velocity1 1");
            Velocity11.GetComponent<Text>().text = msg[i].speed0[1].ToString();

            GameObject Mass1 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Mass 2");
            Mass1.GetComponent<Text>().text = msg[i].mass1.ToString();

            GameObject Velocity02 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Velocity0 2");
            Velocity02.GetComponent<Text>().text = msg[i].speed1[0].ToString();

            GameObject Velocity12 = GameObject.Find("Canvas/ShowMsg/Lists/" + (i + 1).ToString() + "/Velocity1 2");
            Velocity12.GetComponent<Text>().text = msg[i].speed1[1].ToString();

        }
    }

    public void OnClick()
    {
        bool isHidden = animator.GetBool("IsHidden");
        animator.SetBool("IsHidden", !isHidden);
    }

}


class Msg
{
    public float mass0;
    public float[] speed0 = new float[2];
    public float mass1;
    public float[] speed1 = new float[2];
}