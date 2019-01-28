using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TagClick : MonoBehaviour {
    public GameObject SetAttributes;
    public Check Check;
    public PassValue passValue;
    public BallController BallController;
    public delegate void TagClickHanlder();
    public event TagClickHanlder TagClickEvent;

    void Start () {
        BallController.HitEvent += HideSetAttributes;
        BallController.ResetEvent += HideSetAttributes;
        TagClickEvent += ShowSetAttributes;
    }

    public void mTagClick()
    {
        if (Check.CheckPanel() && TagClickEvent != null) TagClickEvent();
    }

    void ShowSetAttributes()
    {
        SetAttributes.SetActive(true);
    }

    void HideSetAttributes()
    {
        SetAttributes.SetActive(false);
    }
}
