using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARController : MonoBehaviour {
    private UnityARAnchorManager unityARAnchorManager;
    private bool detecting = true;

    private int index = 0;

    private Vector2 oldPoint;
    private Vector3 oldPosition;

    public GameObject[] gameObject;
    public GameObject GeneratePlane, FocusSquare;

    // Use this for initialization
    void Start () {
        unityARAnchorManager = new UnityARAnchorManager();
    }
	
	// Update is called once per frame
	void Update () {
        if (detecting)
        {
            IEnumerable<ARPlaneAnchorGameObject> planes = unityARAnchorManager.GetCurrentPlaneAnchors();
            foreach (var plane in planes)
            {
                if (plane.planeAnchor.extent.x > 0.1f && plane.planeAnchor.extent.z > 0.1f)
                {
                    var cell = gameObject[index];
                    cell.SetActive(true);
                    cell.transform.position = UnityARMatrixOps.GetPosition(plane.planeAnchor.transform);
                    cell.transform.rotation = UnityARMatrixOps.GetRotation(plane.planeAnchor.transform);
                    detecting = false;
                    GeneratePlane.GetComponent<FocusSquare>().enabled = false;
                    FocusSquare.SetActive(false);
                    break;
                }
            }
        }
        else
        {
            Debug.Log(gameObject[index].transform.position.ToString());
            if (Input.touchCount == 1)
            {
                var touchPoint = Input.GetTouch(0);
                if (touchPoint.phase == TouchPhase.Began)
                {
                    oldPoint = touchPoint.position;
                    oldPosition = gameObject[index].transform.position;
                }else if (touchPoint.phase == TouchPhase.Moved)
                {
                    gameObject[index].transform.position = oldPosition + (touchPoint.position.y - oldPoint.y) * new Vector3(0, 0.001f, 0);
                }
            }
        }
    }

    public void Rerender(int newIndex)
    {
        Transform oldTransform = gameObject[index].transform;
        gameObject[index].SetActive(false);
        index = newIndex;
        gameObject[index].SetActive(true);
        gameObject[index].transform.position = oldTransform.position;
        gameObject[index].transform.rotation = oldTransform.rotation;
    }

    public void RenderNext()
    {
        Rerender((index + 1) % 5);
    }


}
