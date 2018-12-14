using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class colt : MonoBehaviour {
    public GameObject obj1;
    public GameObject obj2;
    public GameObject obj;
    private GameObject[] currentObj = new GameObject[2];
    // Use this for initialization
    void Start () {
        Vector3 direction = obj2.transform.position - obj1.transform.position;
        //obj1.GetComponent<Rigidbody>().velocity = direction.normalized * 3f;
        obj1.GetComponent<Rigidbody>().velocity = direction.normalized*0.5f;
        obj2.GetComponent<Rigidbody>().velocity = -direction.normalized*0.5f;
        //currentObj[0] = Instantiate(obj);
        //currentObj[0].transform.position = obj1.transform.position;
        //currentObj[0].transform.rotation = obj1.transform.rotation;

        //currentObj[1] = Instantiate(obj);
        //currentObj[1].transform.position = obj2.transform.position;
        //currentObj[1].transform.rotation = obj2.transform.rotation;

        //currentObj[0].GetComponent<Rigidbody>().mass = 0.01f;
        //Vector3 direction = currentObj[1].transform.position - currentObj[0].transform.position;
        //currentObj[0].GetComponent<Rigidbody>().velocity = direction.normalized * 3f;
    }

    // Update is called once per frame
    void Update () {
		
	}
}
