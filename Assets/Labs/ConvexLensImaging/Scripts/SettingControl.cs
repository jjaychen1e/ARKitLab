using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingControl : MonoBehaviour {
    public GameObject Setting;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void ShowSetting()
    {
        Setting.SetActive(true);
    }

    public void HideSetting()
    {
        Setting.SetActive(false);
    }
}
