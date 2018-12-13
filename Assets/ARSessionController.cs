using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARSessionController : MonoBehaviour {

    private UnityARSessionNativeInterface m_session;

	// Use this for initialization
	void Start () {
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();
	}
	
    public void OnRunClick(){
        m_session.Run();
    }

    public void OnPauseClick(){
        m_session.Pause();
    }

    public void ResetAndRun(){
        ARKitWorldTrackingSessionConfiguration configuration = new ARKitWorldTrackingSessionConfiguration();
        configuration.alignment = UnityARAlignment.UnityARAlignmentCamera;//camera
        configuration.planeDetection = UnityARPlaneDetection.Horizontal;
        configuration.enableLightEstimation = true;
        configuration.getPointCloudData = true;
        //m_session.RunWithConfig(configuration);
        m_session.RunWithConfigAndOptions(configuration, UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void RemoveAndRun(){
        ARKitWorldTrackingSessionConfiguration configuration = new ARKitWorldTrackingSessionConfiguration();
        configuration.alignment = UnityARAlignment.UnityARAlignmentGravity;//camera
        configuration.planeDetection = UnityARPlaneDetection.Horizontal;
        configuration.enableLightEstimation = true;
        configuration.getPointCloudData = true;
        m_session.RunWithConfigAndOptions(configuration, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors);
    }

    public void ResetAndClose(){
        ARKitWorldTrackingSessionConfiguration configuration = new ARKitWorldTrackingSessionConfiguration();
        configuration.alignment = UnityARAlignment.UnityARAlignmentGravity;//camera
        configuration.planeDetection = UnityARPlaneDetection.None;
        configuration.enableLightEstimation = true;
        configuration.getPointCloudData = false;
        m_session.RunWithConfigAndOptions(configuration, UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void RemoveAndClose()
    {
        ARKitWorldTrackingSessionConfiguration configuration = new ARKitWorldTrackingSessionConfiguration();
        configuration.alignment = UnityARAlignment.UnityARAlignmentGravity;//camera
        configuration.planeDetection = UnityARPlaneDetection.None;
        configuration.enableLightEstimation = true;
        configuration.getPointCloudData = false;
        m_session.RunWithConfigAndOptions(configuration, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors);
    }

    // Update is called once per frame
    void Update () {
		
	}
}
