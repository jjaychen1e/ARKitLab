using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Record : MonoBehaviour {
    public GameObject Obj1;
    public GameObject Obj2;

    private Transform pos1;
    private Transform pos2;
    private int cnt;

	// Use this for initialization
	void Start () {
        pos1 = Obj1.GetComponent<Transform>();
        pos2 = Obj2.GetComponent<Transform>();
        cnt = 1;
	}



    public void record()
    {
        double dis = Math.Round((pos1.position - pos2.position).magnitude, 2);
        double focal = Math.Round(GameObject.Find("VirtualImageController").GetComponent<VirtualImageController>().focal, 2);
        if (cnt > 6)
        {
            cnt = 1;
        }
        GameObject u = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/u");
        u.GetComponent<Text>().text = Math.Round(dis, 2).ToString();
        GameObject v = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/v");
        v.GetComponent<Text>().text = Math.Round(1.0f / (1.0f / focal - 1.0f / dis), 2).ToString();
        GameObject stand = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/stand");
        if(dis < focal)
        {
            stand.GetComponent<Text>().text = "正立";
        }
        else if(dis > focal)
        {
            stand.GetComponent<Text>().text = "倒立";
        }
        else
        {
            stand.GetComponent<Text>().text = "——";
        }
        GameObject size = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/size");
        if (dis < focal)
        {
            size.GetComponent<Text>().text = "放大";
        }
        else if (dis > focal && dis < 2.0f * focal)
        {
            size.GetComponent<Text>().text = "放大";
        }
        else if (dis > 2.0f * focal)
        {
            size.GetComponent<Text>().text = "缩小";
        }
        else if (dis == 2.0f * focal)
        {
            size.GetComponent<Text>().text = "等大";
        }
        else
        {
            size.GetComponent<Text>().text = "不成像";
        }
        GameObject really = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/really");
        if(dis < focal)
        {
            really.GetComponent<Text>().text = "虚";
        }
        else if(dis > focal)
        {
            really.GetComponent<Text>().text = "实";
        }
        else
        {
            really.GetComponent<Text>().text = "——";
        }
        GameObject focus = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/focus");
        focus.GetComponent<Text>().text = Math.Round(focal, 2).ToString();
        cnt++;
    }







    // Update is called once per frame
    void Update () {
		
	}
}
