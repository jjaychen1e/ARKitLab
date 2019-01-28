using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

    public Rigidbody obj1, obj2;
	// Use this for initialization
	void Start () {
        Vector3 tmp = obj2.transform.position - obj1.transform.position;
        obj1.velocity = tmp.normalized * 0.1f;
        obj1.angularVelocity = tmp.normalized *2;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
