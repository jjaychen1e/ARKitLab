using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class BallUnet : NetworkBehaviour {
    public Touch touch;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Destroy()
    {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        Cmddestroy();
    }

    /* UNET */
    [Command]
    public void Cmddestroy()
    {
        Rpcdestroy();
    }

    [ClientRpc]
    public void Rpcdestroy()
    {
        touch.Destroy();
    }
}
