using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touch : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetTouch(0).tapCount == 2)//双击
        {
            //住摄像机向鼠标位置发射射线  
            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");
            Ray mRay = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit mHit;
            //射线检验  
            if (Physics.Raycast(mRay, out mHit, 20f, mask.value))
            {
                if (mHit.collider.gameObject == this.gameObject && this.gameObject.activeSelf == true)
                {
                    this.gameObject.SetActive(false);
                    this.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
                }
            }
        }

	}
}
