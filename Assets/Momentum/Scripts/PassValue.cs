using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PassValue : MonoBehaviour {
    public Slider MassSlider;
    public Slider VelocitySlider;
    public Rigidbody ball;
    public GameObject hitController;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    // 点击OK时，传递新的质量
    public void passNewMass() {     
        string tmp = MassSlider.value.ToString("f1");
        ball.mass = float.Parse(tmp);
    }

    // 点击OK时，传递新的速度给Smoothball0
    public void passNewVelocity0() {  
        string tmp = VelocitySlider.value.ToString("f1");
        hitController.GetComponent<HitResultController>().setVelocity(float.Parse(tmp),0);
    }

    // 点击OK时，传递新的速度给Smoothball1
    public void passNewVelocity1() { 
        string tmp = VelocitySlider.value.ToString("f1");
        hitController.GetComponent<HitResultController>().setVelocity(float.Parse(tmp), 1);
    }

    // 在SetAttributes出现后调用，显示小球质量
    public void showMass() {    
        MassSlider.value = ball.mass;
    }

    // 在SetAttributes出现后调用，显示小球0速度
    public void showVelocity0() {   
        VelocitySlider.value = hitController.GetComponent<HitResultController>().getVelocity(0);
    }

    // 在SetAttributes出现后调用，显示小球1速度
    public void showVelocity1() {
        VelocitySlider.value = hitController.GetComponent<HitResultController>().getVelocity(1);
    }

}
