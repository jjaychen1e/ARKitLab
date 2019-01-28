using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PassValue : MonoBehaviour {
    public Slider MassSlider;
    public Slider VelocitySlider;
    public Rigidbody ball;
    public GameObject BallController;
    public int index = 2;

    public delegate void PassValueHanlder();
    public event PassValueHanlder PassValueEvent;
    public event PassValueHanlder PassValueEvent2;
    public TagClick TagClick;

    void Start () {
        Initiate();
        PassValueEvent += PassNewMass;
        PassValueEvent += PassNewVelocity;
        TagClick.TagClickEvent += ShowMass;
        TagClick.TagClickEvent += ShowVelocity;
    }

    public void OK()
    {
        if (PassValueEvent != null) {
            PassValueEvent();
            if (PassValueEvent2 != null) PassValueEvent2();
        } 
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
}
