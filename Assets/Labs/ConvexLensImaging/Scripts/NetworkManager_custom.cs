using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class NetworkManager_custom : NetworkManager
{

    public InputField inputField;

    //public SendData sendData;
    Player player;

    private void Start()
    {

        //M_Disconnect();
        Debug.Log("123");
        M_StartHost();

    }

    public void M_StartCheck()
    {
        player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        if (player.isClient && !player.isServer) StopClient();
    }

    public void M_StartHost()
    {
            StartHost();
    }

    public void M_StartClient()
    {
        networkAddress = inputField.text;
        StartClient();
    }

    public void M_Disconnect()
    {
        player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        Debug.Log(player.ToString());
        if (player.isClient && !player.isServer) StopClient();
        else StopHost();
    }

    //public void M_OnStartGame()
    //{
    //    sendData.OnStartGame();
    //}
}