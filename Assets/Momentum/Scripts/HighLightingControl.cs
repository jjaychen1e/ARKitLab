using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;

public class HighLightingControl : MonoBehaviour {
    protected Highlighter h0, h1;
    public GameObject obj1, obj2;
    bool flag1 = false;
    bool flag2 = false;
	// Use this for initialization
	void Start () {
        h0 = obj1.AddComponent<Highlighter>();
        h1 = obj2.AddComponent<Highlighter>();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");
            if (Physics.Raycast(ray, out hit, mask.value))
            {
                if(hit.collider.gameObject == obj1 && flag1)
                {
                    h0.ConstantOn(Color.yellow);
                }
                if (hit.collider.gameObject == obj2 && flag2)
                {
                    h1.ConstantOn(Color.yellow);
                }
                if (hit.collider.gameObject == obj1)
                {
                    flag1 = true;
                }
                if (hit.collider.gameObject == obj2)
                {
                    flag2 = true;
                }
                if(hit.collider.gameObject != obj1 && hit.collider.gameObject != obj2)
                {
                    h0.ConstantOffImmediate();
                    h1.ConstantOffImmediate();
                }
            }
        }
        if (obj1.activeSelf == false)
        {
            flag1 = false;
        }
        if (obj2.activeSelf == false)
        {
            flag2 = false;
        }
    }
}
