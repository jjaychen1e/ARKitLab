using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;

public class Record : NetworkBehaviour
{
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

    public void RecordButtonClick()
    {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        CmdRecord();
    }

    [Command]
    public void CmdRecord()
    {
        RpcRecord();
    }

    [ClientRpc]
    public void RpcRecord()
    {
        double dis = (pos1.position - pos2.position).magnitude * 100;
        double focal = GameObject.Find("VirtualImageController").GetComponent<VirtualImageController>().focal * 100;
        if (cnt > 6)
        {
            cnt = 1;
        }
        GameObject num = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/num");
        num.GetComponent<Text>().text = cnt.ToString();
        GameObject u = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/u");
        u.GetComponent<Text>().text = (dis).ToString("f2");
        GameObject v = GameObject.Find("Canvas/Summary/Lists/" + cnt.ToString() + "/v");
        v.GetComponent<Text>().text = (1.0f / (1.0f / focal - 1.0f / dis)).ToString("f2");
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
        focus.GetComponent<Text>().text = (focal).ToString("f2");
        cnt++;
    }







    // Update is called once per frame
    void Update () {
		
	}
}
