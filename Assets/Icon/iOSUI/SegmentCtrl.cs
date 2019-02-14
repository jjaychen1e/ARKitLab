using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SegmentCtrl : MonoBehaviour {

    public GameObject imageSelected, imageUnselected, TextSelected, TextUnselected, anotherTextSelected, anotherTextUnselected;
	
	public void Click()
    {
        imageSelected.SetActive(true);
        imageUnselected.SetActive(false);
        TextSelected.SetActive(true);
        TextUnselected.SetActive(false);
        anotherTextSelected.SetActive(false);
        anotherTextUnselected.SetActive(true);
    }
}
