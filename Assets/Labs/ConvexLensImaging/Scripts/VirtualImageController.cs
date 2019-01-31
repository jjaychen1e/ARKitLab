using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VirtualImageController  : MonoBehaviour {
    public GameObject Model, RF, Glass, VF;
    public GameObject HorizontalLine, LightLine;
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
        if (Model.activeSelf) {
            Button.SetActive(true);
            float u = (Glass.transform.position - RF.transform.position).magnitude;
            float scale = focal / (u - focal);
            VF.transform.position = Glass.transform.position + (Glass.transform.position - RF.transform.position).normalized * u * scale;
            VF.transform.localScale = RF.transform.localScale * scale;
            HorizontalLine.GetComponent<DrawLines>().DrawHorizontalLine();
            LightLine.GetComponent<DrawLines>().DrawLight();
        }
        else Button.SetActive(false);
    }

    public void ShowImageOrNot()
    {
        if (VF.activeSelf)
        {
            VF.SetActive(false);
            text.text = "OFF";
            HorizontalLine.SetActive(false);
            LightLine.SetActive(false);
        }
        else
        {
            VF.SetActive(true);
            text.text = "ON ";
            HorizontalLine.SetActive(true);
            LightLine.SetActive(true);
        }
    }
}