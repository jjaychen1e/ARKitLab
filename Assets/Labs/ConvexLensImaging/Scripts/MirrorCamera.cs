using UnityEngine;

using System.Collections;



public class MirrorCamera : MonoBehaviour
{



    // Use this for initialization

    void Start()
    {

        MirrorFlipCamera(this.gameObject.GetComponent<Camera>());

    }



    void MirrorFlipCamera(Camera camera)
    {

        Matrix4x4 mat = camera.projectionMatrix;

        mat *= Matrix4x4.Scale(new Vector3(-1, 1, 1));

        camera.projectionMatrix = mat;

    }



    // Update is called once per frame

    void Update()
    {



    }

}