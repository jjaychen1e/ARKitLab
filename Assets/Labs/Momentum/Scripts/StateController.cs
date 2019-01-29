using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StateController : MonoBehaviour {
    public Text mass, iVolocity, cVolocity;
    public Rigidbody obj;

    public BallController BallController;
    public PassValue PassValue;
    public Touch Touch;

    void Start () {
        PassValue.PassValueEvent += UpdateState;
        Touch.ActiveBallEvent += UpdateState;
        BallController.ResetEvent += ClearState;
        Touch.DestroyEvent += ClearState;
    }

    void UpdateState()
    {
        mass.text = obj.mass.ToString() + " kg";
        iVolocity.text = BallController.GetVelocity(PassValue.index).ToString() + " m/s";
    }

    void ClearState()
    {
        mass.text = "";
        iVolocity.text = "";
        cVolocity.text = "";
    }

    private void Update()
    {
        if (obj.gameObject.activeSelf){
            Vector3 tmp = BallController.currentObj[1].transform.position - BallController.currentObj[0].transform.position;
            if (Vector3.Dot(tmp,obj.velocity)>=0)
            {
                cVolocity.text = obj.velocity.magnitude.ToString("#0.000") + " m/s";
            }
            else
            {
                cVolocity.text = "-" + obj.velocity.magnitude.ToString("#0.000") + " m/s";
            }
        }
    }
}
