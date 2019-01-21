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
    public void passNewMass() {     // 点击OK时，传递新的质量
        ball.mass = MassSlider.value;
    }
    public void passNewVelocity0() {  // 点击OK时，传递新的速度给Smoothball0
        hitController.GetComponent<HitResultController>().setVelocity(VelocitySlider.value, 0);
    }

    public void passNewVelocity1() { // 点击OK时，传递新的速度给Smoothball1
        hitController.GetComponent<HitResultController>().setVelocity(VelocitySlider.value, 1);
    }


}
