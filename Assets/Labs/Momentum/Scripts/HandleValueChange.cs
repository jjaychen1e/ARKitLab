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
        cmdOnSliderValueChanged();
    }

    public void onInputFieldValueChanged() {
        cmdOnInputFieldValueChanged();
    }

    /* UNET */

    void cmdOnSliderValueChanged()
    {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        CmdOnSliderValueChanged();
    }

    void cmdOnInputFieldValueChanged()
    {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        CmdOnInputFieldValueChanged();
    }

    [Command]

    public void CmdOnSliderValueChanged()
    {
        RpcOnSliderValueChanged();
    }

    [ClientRpc]
    public void RpcOnSliderValueChanged()
    {
        if (input.name.Contains("Velocity")) input.text = input.text = slider.value.ToString("f1") + " m/s";
        else input.text = input.text = input.text = slider.value.ToString("f1") + " kg";
    }

    [Command]
    public void CmdOnInputFieldValueChanged()
    {
        RpcOnInputFieldValueChanged();
    }

    [ClientRpc]
    public void RpcOnInputFieldValueChanged()
    {
        slider.value = float.Parse(input.text); // InputField的值改变，Slider的值也相应改变
    }

}
