using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallCollision : MonoBehaviour {
    public AudioClip AC;
    public AudioClip AC2;
    public UnityARCameraManager UnityARCameraManager;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnCollisionEnter(Collision collision)
    //或者OnTriggerEnter(Collider collider)
    {
        AudioSource.PlayClipAtPoint(AC, this.transform.localPosition);
        AudioSource.PlayClipAtPoint(AC2, UnityARCameraManager.transform.position);
    }
}
