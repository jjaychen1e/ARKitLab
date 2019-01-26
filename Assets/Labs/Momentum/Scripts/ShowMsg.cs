
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowMsg : MonoBehaviour
{
    private const int max_time = 5;

    public GameObject ball0;
    public GameObject ball1;
    public GameObject hitTestController;
    public Animator animator;

    private Msg[] msg = new Msg[max_time];
    private int cnt;
    private bool s_lock, c_lock; //只须检测一次

    // Use this for initialization
    void Start()
    {
        cnt = -1;
        c_lock = true;
        s_lock = true;
    }

    //碰撞前的一次采样
    void OnStart()
    {
        cnt++;
        c_lock = true;
        if (cnt == max_time)
        {
            cnt = 0;
        }
        msg[cnt] = new Msg();
        msg[cnt].mass0 = ball0.GetComponent<Rigidbody>().mass;
        msg[cnt].mass1 = ball1.GetComponent<Rigidbody>().mass;
        msg[cnt].speed0[0] = ball0.GetComponent<Rigidbody>().velocity.magnitude;
        msg[cnt].speed1[0] = ball1.GetComponent<Rigidbody>().velocity.magnitude;
    }

    //碰撞后的采样
    void OnCollision()
    {
        msg[cnt].speed0[1] = ball0.GetComponent<Rigidbody>().velocity.magnitude;
        msg[cnt].speed1[1] = ball1.GetComponent<Rigidbody>().velocity.magnitude;
    }

    // Update is called once per frame
    void Update()
    {
        if(s_lock && hitTestController.GetComponent<HitResultController>().isStart)
        {
            s_lock = false;//检测之后就进不来了
            OnStart();
        }

        if (c_lock && ball0.GetComponent<IsCollide>().isCollide)
        {
            hitTestController.GetComponent<HitResultController>().isStart = false;
            s_lock = true;//碰撞之后第一个锁打开，不过isStart是false，需要等待下一次hit才改
            c_lock = false;
            OnCollision();
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