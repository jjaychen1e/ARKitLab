using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class PassValue : NetworkBehaviour {
    public Slider MassSlider;
    public Slider VelocitySlider;
    public Rigidbody ball;
    public GameObject BallController;
    public int index = 2;
    public HandleValueChange HandleValueChangeMass, HandleValueChangeVelocity;

    public delegate void PassValueHanlder();
    public event PassValueHanlder PassValueEvent;
    public TagClick TagClick;

    void Start () {
        Initiate();
        TagClick.TagClickEvent += ShowMass;
        TagClick.TagClickEvent += ShowVelocity;
    }

    public void OK()
    {
        var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
        player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
        HandleValueChangeMass.PassSliderAndInputfield();
        HandleValueChangeVelocity.PassSliderAndInputfield();
        CmdOK();
    }

    public void PassNewMass() {     
        string tmp = MassSlider.value.ToString("f1");
        ball.mass = float.Parse(tmp);
    }

    public void PassNewVelocity() { 
        string tmp = VelocitySlider.value.ToString("f1");
        BallController.GetComponent<BallController>().SetVelocity(float.Parse(tmp), index);
    }


    public void ShowMass() {    
        MassSlider.value = ball.mass;
    }


    public void ShowVelocity() {
        if (index > 1) Initiate();
        VelocitySlider.value = BallController.GetComponent<BallController>().GetVelocity(index);
    }

    private void Initiate()
    {
        if (ball.name.Equals("SmoothBall0"))
        {
            index = 0;
        }
        else index = 1;
    }

    /* UNET */

    [Command]
    
    public void CmdOK()
    {
        RpcOK();
    }

    [ClientRpc]
    public void RpcOK()
    {
        PassNewMass();
        PassNewVelocity();
        if (PassValueEvent != null) PassValueEvent();
    }
}
