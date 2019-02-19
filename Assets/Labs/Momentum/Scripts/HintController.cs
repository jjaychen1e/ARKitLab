using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintController : MonoBehaviour {

    public GameObject[] Array;

    // Use this for initialization
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }

    public void ShowElement(int n){
        foreach (var item in Array)
        {
            item.SetActive(false);
        }
        Array[0].SetActive(true);
        Array[n].SetActive(true);
    }

    public void HideElement()
    {
        foreach (var item in Array)
        {
            item.SetActive(false);
        }
    }
}
