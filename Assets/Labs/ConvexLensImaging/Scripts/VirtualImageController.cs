using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VirtualImageController  : MonoBehaviour {
    public GameObject Model, RF, Glass, VF;
    public Text text;
    public GameObject Button;
    private float focal;

	// Use this for initialization
	void Start () {
        focal = 0.1f * Model.transform.localScale.x;
    }
	
	// Update is called once per frame
	void Update () {
        //在拖动实现之后通过委托事件来实现，现在通过Update实现/
        //float times = VF.transform.localScale.magnitude / RF.transform.localScale.magnitude;
        float u = (Glass.transform.position - RF.transform.position).magnitude;
        float scale = focal / (u - focal);
        VF.transform.position = Glass.transform.position + (Glass.transform.position - RF.transform.position).normalized * u * scale;
        VF.transform.localScale = RF.transform.localScale * scale;

        if (Model.activeSelf) Button.SetActive(true);
        else Button.SetActive(false);

    }

    public void ShowImageOrNot()
    {
        if (VF.activeSelf)
        {
            VF.SetActive(false);
            text.text = "OFF";
        }
        else
        {
            VF.SetActive(true);
            text.text = "ON ";
        }
    }
}
