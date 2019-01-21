using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HandleValueChange : MonoBehaviour {
    public Slider slider;
    public InputField input;
    // Use this for initialization

    void Start() {
        slider.value = 0;
    }

    // Update is called once per frame
    void Update() {

    }
    public void onSliderValueChanged() {
        input.text = slider.value.ToString("0.0"); //Slider的值改变，InputField的值也相应改变
    }
    public void onInputFieldValueChanged() {
        slider.value = float.Parse(input.text); // InputField的值改变，Slider的值也相应改变
    }
    
}
