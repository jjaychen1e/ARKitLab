using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenImageController : MonoBehaviour {
    public GameObject Center, VF, Camera3;
    private float distance, focal, degree;
    // Use this for initialization
	void Start () {
        focal = this.gameObject.GetComponent<VirtualImageController>().focal;
        Camera3.GetComponent<CameraFilterPack_Blur_Movie>().FastFilter = 6;
        Debug.Log(Camera3.GetComponent<CameraFilterPack_Blur_Movie>().FastFilter.ToString());
    }
	
	// Update is called once per frame
	void Update () {
        //distance = (Center.transform.position - VF.transform.position).magnitude;
        //if (distance > focal) degree = 8;
        //else degree = 7 * distance/focal + 1;
        //Debug.Log(degree.ToString());
        //Camera3.GetComponent<CameraFilterPack_Blur_Movie>().FastFilter = (int)degree;
        //Debug.Log(Camera3.GetComponent<CameraFilterPack_Blur_Movie>().FastFilter.ToString());
    }
}
