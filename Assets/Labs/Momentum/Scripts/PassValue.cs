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
    // Use this for initialization
    void Start () {
        Initiate();
    }
	
	// Update is called once per frame
	void Update () {

	}

    // 点击OK时，传递新的质量
    public void passNewMass() {     
        string tmp = MassSlider.value.ToString("f1");
        ball.mass = float.Parse(tmp);
    }

    //// 点击OK时，传递新的速度给SmoothBall\(index)
    public void passNewVelocity() { 
        string tmp = VelocitySlider.value.ToString("f1");
        hitController.GetComponent<HitResultController>().setVelocity(float.Parse(tmp), index);
    }

    // 在SetAttributes出现后调用，显示小球质量
    public void showMass() {    
        MassSlider.value = ball.mass;
    }

    // 在SetAttributes出现后调用，显示小球index速度
    public void showVelocity() {
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
    //// 在SetAttributes出现后调用，显示小球1速度
    //public void showVelocity1() {
    //    VelocitySlider.value = hitController.GetComponent<HitResultController>().getVelocity(1);
    //}
}
