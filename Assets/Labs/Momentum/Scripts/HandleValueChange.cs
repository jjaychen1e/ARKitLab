using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class HandleValueChange : NetworkBehaviour
{
    public Slider slider;
    public InputField input;

    void Awake() {
        input.text = slider.value.ToString("f1");
    }

    // Update is called once per frame
    void Update() {

    }

    public void onSliderValueChanged() {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        CmdOnSliderValueChanged(slider.value.ToString("f1"));
    }

    public void onInputFieldValueChanged() {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        CmdOnInputFieldValueChanged(input.text);
    }

    /* UNET */

    [Command]

    public void CmdOnSliderValueChanged(string s)
    {
        RpcOnSliderValueChanged(s);
    }

    [ClientRpc]
    public void RpcOnSliderValueChanged(string s)
    {
        if (input.name.Contains("Velocity")) input.text = input.text = s + " m/s";
        else input.text = input.text = input.text = s + " kg";
    }

    [Command]
    public void CmdOnInputFieldValueChanged(string s)
    {
        RpcOnInputFieldValueChanged(s);
    }

    [ClientRpc]
    public void RpcOnInputFieldValueChanged(string s)
    {
        slider.value = float.Parse(s); // InputField的值改变，Slider的值也相应改变
    }

}
