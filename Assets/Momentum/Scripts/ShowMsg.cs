
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
public class ShowMsg : MonoBehaviour
{
    public GameObject ball0;
    public GameObject ball1;
    private Msg[] msg = new Msg[5];
    private int cnt;


    // Use this for initialization
    void Start()
    {
        cnt = -1;
    }

    void OnStart()
    {
        cnt++;
        if (cnt == 5)
        {
            cnt = 0;
        }
        msg[cnt] = new Msg();
        msg[cnt].mass0 = ball0.GetComponent<Rigidbody>().mass;
        msg[cnt].mass1 = ball1.GetComponent<Rigidbody>().mass;
        msg[cnt].speed0[0] = ball0.GetComponent<Rigidbody>().velocity.magnitude;
        msg[cnt].speed1[0] = ball1.GetComponent<Rigidbody>().velocity.magnitude;
    }

    void OnCollision()
    {
        Thread.Sleep(10);
        msg[cnt].speed0[1] = ball0.GetComponent<Rigidbody>().velocity.magnitude;
        msg[cnt].speed1[1] = ball1.GetComponent<Rigidbody>().velocity.magnitude;
    }

    // Update is called once per frame
    void Update()
    {

    }
}


class Msg
{
    public float mass0;
    public float[] speed0 = new float[2];
    public float mass1;
    public float[] speed1 = new float[2];
}