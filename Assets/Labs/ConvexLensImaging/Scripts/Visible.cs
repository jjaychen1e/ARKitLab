using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Visible : MonoBehaviour {
    private bool visable;
	// Use this for initialization
	void Start () {
        visable = false;
	}
	
    public void OnClick()
    {
        if(visable)
        {
            this.GetComponent<CanvasGroup>().alpha = 0;
            this.GetComponent<CanvasGroup>().interactable = false;
            this.GetComponent<CanvasGroup>().blocksRaycasts = false;
            visable = false;
        }
        else
        {
            this.GetComponent<CanvasGroup>().alpha = 1;
            this.GetComponent<CanvasGroup>().interactable = true;
            this.GetComponent<CanvasGroup>().blocksRaycasts = true;
            visable = true;
        }
    }

    // Update is called once per frame
    void Update () {
		
	}
}
