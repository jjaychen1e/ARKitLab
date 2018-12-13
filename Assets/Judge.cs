using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

public class Judge : MonoBehaviour {

    public Text text1;
    public Text text2;

	// Use this for initialization
    void Start () {
        ARKitSessionConfiguration configuration1 = new ARKitSessionConfiguration();
        text1.text = configuration1.IsSupported.ToString();

        ARKitWorldTrackingSessionConfiguration configuration2 = new ARKitWorldTrackingSessionConfiguration();
        text2.text = configuration2.IsSupported.ToString();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
