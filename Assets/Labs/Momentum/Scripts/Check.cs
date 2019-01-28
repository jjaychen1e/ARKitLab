using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Check : MonoBehaviour {

    public GameObject panel0, panel1;
	public bool CheckPanel()
    {
        if (panel0.activeSelf == false && panel1.activeSelf == false) return true;
        return false;
    }
}
