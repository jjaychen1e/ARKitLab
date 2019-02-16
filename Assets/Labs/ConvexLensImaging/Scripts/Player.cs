using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.iOS;

public class Player : NetworkBehaviour
{

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void CheckAuthority(NetworkIdentity objectId, NetworkIdentity player)
    {
        Cmd_SetAuthority(objectId, player);
    }

    [Command]
    public void Cmd_SetAuthority(NetworkIdentity objectId, NetworkIdentity player)
    {
        Debug.Log(isServer.ToString());
        var otherOwner = objectId.clientAuthorityOwner;
        if (otherOwner == player.connectionToClient)
        {
            return;
        }
        else
        {
            if (otherOwner != null)
            {
                objectId.RemoveClientAuthority(otherOwner);
            }
            objectId.AssignClientAuthority(player.connectionToClient);
        }
    }
}