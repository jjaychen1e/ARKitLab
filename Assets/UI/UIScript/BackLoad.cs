using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;

public class BackLoad : MonoBehaviour {

    public UnityARCameraManager aRCameraManager;
    public NetworkManager_custom NetworkManager_custom;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void LoadBack()
    {
        ARKitWorldTrackingSessionConfiguration configuration = aRCameraManager.sessionConfiguration;
        UnityARSessionRunOption option = UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking;
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(configuration, option);
        if(NetworkManager_custom)
        {
            NetworkManager_custom.M_Disconnect();
        }
        SceneManager.LoadScene("Labs/MainScene/Scene/MainScene");
    }
}
