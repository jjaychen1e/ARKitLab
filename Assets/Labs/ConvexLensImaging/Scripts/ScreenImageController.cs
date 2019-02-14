using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenImageController : MonoBehaviour {
    public GameObject Center, VF, Camera3, Plane, Model;
    public VirtualImageController VirtualImageController;
    private float distance, focal, degree;
    private bool flag;
    // Use this for initialization
	void Start () {

    }
	
	// Update is called once per frame
	void Update () {
        if (Model.activeSelf)
        {
            focal = this.gameObject.GetComponent<VirtualImageController>().focal;
            distance = (Center.transform.position - VF.transform.position).magnitude;
            if (distance > 0.25f * focal) degree = 8;
            else degree = 28 * distance / focal + 1;
            CameraFilterPack_Blur_Movie.ChangeFastFilter = (int)degree;

            if (distance >= 2 * focal) degree = 2;
            else degree = 1 + 1.0f / 2.0f * distance / focal;
            if (degree * VirtualImageController.scale <= 3.3f)
                Plane.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f) * degree * VirtualImageController.scale;
            else
            {
                Plane.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f) * 3.3f;
            }
        }
    }
}
