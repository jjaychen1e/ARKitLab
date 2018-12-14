using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touch : MonoBehaviour {
    private int time = 0;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        //if(Input.GetMouseButtonDown(0) && Input.GetTouch(0).phase==TouchPhase.Began)
        //{
        //    DestroyImmediate(this.gameObject);
        //}
        //if (time < 1) time++;


        if (Input.GetMouseButtonDown(0))//鼠标左键点下
        {
            //住摄像机向鼠标位置发射射线  
            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");
            Ray mRay = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit mHit;
            //射线检验  
            if (Physics.Raycast(mRay, out mHit, 20f, mask.value))
            {
                if (mHit.collider.gameObject == this.gameObject)// && time >= 1
                {
                    DestroyImmediate(this.gameObject);
                }
            }
        }

	}
}
