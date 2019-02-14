using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Identity : MonoBehaviour {

    public Text text;

	// Use this for initialization
	void Start () {
        //text.text = NetworkManager.singleton.networkAddress;
        var host = System.Net.Dns.GetHostEntry(System.Net.Dns.GetHostName());
        foreach (var ip in host.AddressList)
        {
            if (ip.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
            {
                text.text = ip.ToString();
            }
        }
    }
	
	// Update is called once per frame
	void Update () {

    }
}
