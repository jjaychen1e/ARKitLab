using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StateController : MonoBehaviour {
    public Text mass1, iVolocity1, cVolocity1, mass2, iVolocity2, cVolocity2;
    public Rigidbody obj1, obj2;
    public HitResultController HitResultController;
    // Use this for initialization
    void Start () {
        //mass1.text = obj1.mass.ToString();
        //iVolocity1.text = HitResultController.getVelocity(0).ToString();
        //cVolocity1.text = obj1.velocity.ToString();
        //mass2.text = obj2.mass.ToString();
        //iVolocity2.text = HitResultController.getVelocity(1).ToString();
        //cVolocity2.text = obj2.velocity.ToString();
    }

    // Update is called once per frame
    void Update () {
        //造成大量资源浪费，等待使用委托和事件来优化.
        mass1.text = obj1.mass.ToString() + " kg";
        iVolocity1.text = HitResultController.getVelocity(0).ToString() + " m/s";
        cVolocity1.text = obj1.velocity.magnitude.ToString() + " m/s"; ;
        mass2.text = obj2.mass.ToString() + " kg";
        iVolocity2.text = HitResultController.getVelocity(1).ToString() + " m/s"; ;
        cVolocity2.text = obj2.velocity.magnitude.ToString() + " m/s"; ;
    }
}
