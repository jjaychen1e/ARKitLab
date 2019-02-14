using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContentCtrl : MonoBehaviour {

    public GameObject selfContent, anotherContent;
	public void ContentControl()
    {
        selfContent.SetActive(true);
        anotherContent.SetActive(false);
    }
}
