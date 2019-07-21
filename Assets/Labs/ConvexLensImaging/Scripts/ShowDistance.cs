using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowDistance : MonoBehaviour {
    public GameObject measure;
    public GameObject maginifier;
    public Text distance;
    public GameObject point1, point2,parent;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        parent.transform.position = (point1.transform.position + point2.transform.position) / 2;
        //Debug.Log(transform.position.ToString());
        Vector3 measureX = measure.GetComponent<Transform>().position;
        Vector3 magnifierX = maginifier.GetComponent<Transform>().position;
        distance.text = (100 * Mathf.Abs((magnifierX - measureX).magnitude)).ToString("f1") + "cm";
	}
}
