using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PassValue : MonoBehaviour {
    public Slider MassSlider;
    public Slider VelocitySlider;
    public Rigidbody ball;
    public GameObject hitController;
    private int index = 2;

    public delegate void PassValueHanlder();
    public event PassValueHanlder PassValueEvent;

    void Start () {
        Initiate();
    }

    public void OK()
    {
        PassNewMass();
        PassNewVelocity();
        if (PassValueEvent != null)
        {
            PassValueEvent();
        }
    }

    public void PassNewMass() {     
        string tmp = MassSlider.value.ToString("f1");
        ball.mass = float.Parse(tmp);
    }

    public void PassNewVelocity() { 
        string tmp = VelocitySlider.value.ToString("f1");
        hitController.GetComponent<HitResultController>().setVelocity(float.Parse(tmp), index);
    }

    // 在SetAttributes出现后调用，显示小球质量
    public void ShowMass() {    
        MassSlider.value = ball.mass;
    }

    // 在SetAttributes出现后调用，显示小球index速度
    public void ShowVelocity() {
        if (index > 1) Initiate();
        VelocitySlider.value = hitController.GetComponent<HitResultController>().getVelocity(index);
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
