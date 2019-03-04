using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowDistance : MonoBehaviour {
    public GameObject measure;
    public GameObject maginifier;
    public Text distance;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        float measureX = measure.GetComponent<Transform>().position.x;
        float magnifierX = maginifier.GetComponent<Transform>().position.x;
        distance.text = (100 * Mathf.Abs(magnifierX - measureX)).ToString("f1") + "cm";
	}
}
