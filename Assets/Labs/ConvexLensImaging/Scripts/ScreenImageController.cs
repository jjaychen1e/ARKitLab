using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenImageController : MonoBehaviour {
    public GameObject Center, VF, Camera3;
    private float distance, focal, degree;
    // Use this for initialization
	void Start () {
        focal = this.gameObject.GetComponent<VirtualImageController>().focal;
    }
	
	// Update is called once per frame
	void Update () {
        distance = (Center.transform.position - VF.transform.position).magnitude;
        if (distance > 0.25f * focal) degree = 8;
        else degree = 28 * distance/focal + 1;
        Camera3.GetComponent<CameraFilterPack_Blur_Movie>().FastFilter = (int)degree;
    }
}
