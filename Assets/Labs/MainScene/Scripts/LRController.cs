using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LRController : MonoBehaviour {
    public GameObject cards;
    private int count;
    public GameObject[] objs ;

    void Start()
    {
        count = cards.GetComponent<LabCount>().count;
    }


    public void GoLeft()
    {
        bool isAble = false;
        int i;
        for(i = 0; i < count; i++)
        {
            if(objs[i].GetComponent<AnimationState>().state - 1 == 0)
            {
                isAble = true;
                ChangeHintPoint(i + 1);
            }
        }
        if(isAble)
        {
            for(i = 0; i < count; i++)
            {
                objs[i].GetComponent<AnimationState>().GoLeft();
            }
        }

    }

    public void GoRight()
    {
        bool isAble = false;
        int i;
        for(i = 0; i < count; i++)
        {
            if(objs[i].GetComponent<AnimationState>().state + 1 == 0)
            {
                isAble = true;
                ChangeHintPoint(i + 1);
            }
        }
        if(isAble)
        {
            for(i = 0; i < count; i ++)
            {
                objs[i].GetComponent<AnimationState>().GoRight();
            }
        }
    }

    private void ChangeHintPoint(int n)
    {
        int i;
        for(i = 0; i < count; i++)
        {
            GameObject.Find("Canvas/HintPoint/Circle" + (i + 1).ToString()
            + "/Fill").SetActive(false);
            if(i + 1 == n)
            {
                GameObject.Find("Canvas/HintPoint/Circle" + (n).ToString()
                 + "/Fill").SetActive(true);
            }
        }
    }

    void Awake()
    {
        Application.targetFrameRate = 60;
    }

    public void LoadIn()
    {
        int i;
        for(i = 0; i < count; i++)
        {
            if(objs[i].GetComponent<AnimationState>().state == 0 && objs[i].name != "More")
            {
                GameObject.Find("Canvas/INTRODUCTION/" + objs[i].name).SetActive(true);
                return;
            }
        }
    }

    public void LoadInMomentum()
    {
        SceneManager.LoadScene("Labs/Momentum/Scene/Momentum");
        GameObject.Find("Canvas/INTRODUCTION/Momentum").SetActive(false);
    }
    public void LoadInConvexLensImaging()
    {
        SceneManager.LoadScene("Labs/ConvexLensImaging/Scene/ConvexLensImaging");
        GameObject.Find("Canvas/INTRODUCTION/ConvexLensImaging").SetActive(false);
    }
    public void LoadInCell()
    {
        SceneManager.LoadScene("Labs/ConvexLensImaging/Scene/ConvexLensImaging");
        GameObject.Find("Canvas/INTRODUCTION/ConvexLensImaging").SetActive(false);
    }
}
