using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeScale : MonoBehaviour {
    public GameObject model;
    
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 newScale = new Vector3(this.transform.localScale.x * model.transform.localScale.x,
                                       this.transform.localScale.y * model.transform.localScale.y,
                                       this.transform.localScale.z * model.transform.localScale.z);
        this.transform.localScale = newScale;
	}
}
