using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HandleValueChange : MonoBehaviour {
    public Slider slider;
    public InputField input;

    void Awake() {
        input.text = slider.value.ToString("f1");
    }

    // Update is called once per frame
    void Update() {

    }

    public void onSliderValueChanged() {
        //Slider的值改变，InputField的值也相应改变
        if (input.name.Contains("Velocity"))  input.text = input.text = slider.value.ToString("f1") + " m/s";
        else input.text = input.text = input.text = slider.value.ToString("f1") + " kg";
    }

    public void onInputFieldValueChanged() {
        slider.value = float.Parse(input.text); // InputField的值改变，Slider的值也相应改变
    }
    
}
