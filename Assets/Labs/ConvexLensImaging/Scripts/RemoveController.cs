using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;

public class RemoveController : MonoBehaviour {
    Highlighter h1, h2;
    public ModelController modelController;
    public GameObject alphaBase, screenBase, magnifierBase;
    private bool alphaBaseFlag = false;
    private bool screenBaseFlag = false;
    private Vector3 transformed;
    private float distance1,distance2;
    private Vector3 oldPosition1, oldPosition2;
	// Use this for initialization
	void Start () {
        h1 = alphaBase.GetComponent<Highlighter>();
        h2 = screenBase.GetComponent<Highlighter>();
    }
	
	// Update is called once per frame
	void Update () {
        if (modelController.CheckButton())
        {
            transformed = modelController.transforme;
            distance1 = modelController.distance1;
            distance2 = modelController.distance2;
            oldPosition1 = modelController.oldRemove1;
            oldPosition2 = modelController.oldRemove2;
            if (Input.GetMouseButtonDown(0))
            {
                Ray mRay = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                RaycastHit mHit;
                LayerMask mask = 1 << LayerMask.NameToLayer("Sphere");
                if(Physics.Raycast(mRay, out mHit,20f,mask.value))
                {
                    if (mHit.collider.gameObject == alphaBase)
                    {
                        h1.ConstantOn(Color.yellow);
                        h2.ConstantOffImmediate();
                        alphaBaseFlag = true;
                        screenBaseFlag = false;
                    }
                    else if (mHit.collider.gameObject == screenBase)
                    {
                        h2.ConstantOn(Color.yellow);
                        h1.ConstantOffImmediate();
                        alphaBaseFlag = false;
                        screenBaseFlag = true;
                    }
                }
            }
            if(Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 deltaposition = Input.GetTouch(0).deltaPosition;
                Vector3 translated = Vector3.Project(deltaposition, transformed);
                if (alphaBaseFlag && (Vector3.Distance(oldPosition1,alphaBase.transform.position)< 0.6 * distance1))
                {
                    alphaBase.transform.Translate(translated * 0.0005f, Space.World);
                }
                else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) < 0.6 * distance2))
                {
                    screenBase.transform.Translate(translated * 0.0005f, Space.World);
                }
            }
            if (alphaBaseFlag && (Vector3.Distance(oldPosition1, alphaBase.transform.position) >= 0.6 * distance1) && (Vector3.Distance(magnifierBase.transform.position, alphaBase.transform.position) < distance1))
            {
                alphaBase.transform.Translate(transformed * 0.005f, Space.World);
            }
            else if (alphaBaseFlag && (Vector3.Distance(oldPosition1, alphaBase.transform.position) >= 0.6 * distance1) && (Vector3.Distance(magnifierBase.transform.position, alphaBase.transform.position) > distance1))
            {
                alphaBase.transform.Translate(-transformed * 0.005f, Space.World);
            }
            else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) >= 0.6 * distance2) && (Vector3.Distance(magnifierBase.transform.position, screenBase.transform.position) < distance2))
            {
                screenBase.transform.Translate(-transformed * 0.005f, Space.World);
            }
            else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) >= 0.6 * distance2) && (Vector3.Distance(magnifierBase.transform.position, screenBase.transform.position) > distance2))
            {
                screenBase.transform.Translate(transformed * 0.005f, Space.World);
            }
        }
    }
}
