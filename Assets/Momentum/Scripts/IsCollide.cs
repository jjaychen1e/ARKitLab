using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsCollide : MonoBehaviour {
    public bool isCollide;

	// Use this for initialization
	void Start () {
        isCollide = false;
	}

    private void OnCollisionExit(Collision collision)
    {
        isCollide = true;
    }
}
