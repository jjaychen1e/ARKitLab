using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VirtualImageController  : MonoBehaviour {
    public GameObject Model, RF, Glass, VF;
    public GameObject HorizontalLine, LightLine;
    public ModelController ModelController;
    public Text text;
    public GameObject Button;
    public float focal,scale;

	// Use this for initialization
	void Awake () {
        focal = 0.1f * Model.transform.localScale.x;
        ModelController.ResetHandlerEvent += HideLineAndVF;
    }
	
	// Update is called once per frame
	void Update () {
        focal = 0.1f * Model.transform.localScale.x;
        //在拖动实现之后通过委托事件来实现，现在通过Update实现/
        if (Model.activeSelf) {
            Button.SetActive(true);
            float u = (Glass.transform.position - RF.transform.position).magnitude;
            scale = focal / (u - focal);
            VF.transform.position = Glass.transform.position + (Glass.transform.position - RF.transform.position).normalized * u * scale;
            VF.transform.localScale = RF.transform.localScale * scale;
            if (VF.activeSelf)
            {
                HorizontalLine.GetComponent<DrawLines>().DrawHorizontalLine();
                LightLine.GetComponent<DrawLines>().DrawLight();
            }
        }
        else Button.SetActive(false);
    }

    public void ShowImageOrNot()
    {
        if (VF.activeSelf)
        {
            text.text = "OFF";
            HideLineAndVF();
        }
        else
        {
            text.text = "ON ";
            ShowLineAndVF();
        }
    }

    public void HideLineAndVF()
    {
        VF.SetActive(false);
        HorizontalLine.SetActive(false);
        LightLine.SetActive(false);
    }

    public void ShowLineAndVF()
    {
        VF.SetActive(true);
        HorizontalLine.SetActive(true);
        LightLine.SetActive(true);
    }
}