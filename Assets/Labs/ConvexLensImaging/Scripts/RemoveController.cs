using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HighlightingSystem;
using UnityEngine.Networking;

public class RemoveController : NetworkBehaviour
{
    Highlighter h1, h2;
    public ModelController modelController;
    public GameObject alphaBase, screenBase, magnifierBase;
    private bool alphaBaseFlag = false;
    private bool screenBaseFlag = false;
    private Vector3 transformed;
    private float distance1, distance2;
    private Vector3 oldPosition1, oldPosition2;
    // Use this for initialization
    void Start()
    {
        h1 = alphaBase.GetComponent<Highlighter>();
        h2 = screenBase.GetComponent<Highlighter>();
    }

    // Update is called once per frame
    void Update()
    {
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
                if (Physics.Raycast(mRay, out mHit, 20f, mask.value))
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
            if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 deltaposition = Input.GetTouch(0).deltaPosition;
                Vector3 translated = Vector3.Project(deltaposition, transformed);
                if (alphaBaseFlag && (Vector3.Distance(oldPosition1, alphaBase.transform.position) < 0.64 * distance1))
                {
                    var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                    player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                    CmdAlphaBaseTranslate(translated);
                }
                else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) < 0.64 * distance2))
                {
                    var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                    player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                    CmdScreenBaseTranslate(translated);
                }
            }
            if (alphaBaseFlag && (Vector3.Distance(oldPosition1, alphaBase.transform.position) >= 0.64 * distance1) && (Vector3.Distance(magnifierBase.transform.position, alphaBase.transform.position) < distance1))
            {
                var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                CmdAlphaBaseTranslateForward(transformed);
            }
            else if (alphaBaseFlag && (Vector3.Distance(oldPosition1, alphaBase.transform.position) >= 0.64 * distance1) && (Vector3.Distance(magnifierBase.transform.position, alphaBase.transform.position) > distance1))
            {
                var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                CmdAlphaBaseTranslateBack(transformed);
            }
            else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) >= 0.64 * distance2) && (Vector3.Distance(magnifierBase.transform.position, screenBase.transform.position) < distance2))
            {
                var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                CmdScreenBaseTranslateBack(transformed);
            }
            else if (screenBaseFlag && (Vector3.Distance(oldPosition2, screenBase.transform.position) >= 0.64 * distance2) && (Vector3.Distance(magnifierBase.transform.position, screenBase.transform.position) > distance2))
            {
                var player = ClientScene.localPlayers[0].gameObject.GetComponent<Player>();
                player.CheckAuthority(GetComponent<NetworkIdentity>(), player.GetComponent<NetworkIdentity>());
                CmdScreenBaseTranslateForward(transformed);
            }

            if (Input.touchCount > 1)
            {
                h1.ConstantOffImmediate();
                h2.ConstantOffImmediate();
                alphaBaseFlag = false;
                screenBaseFlag = false;
            }
        }
    }
    [Command]
    /*Unet*/
    public void CmdAlphaBaseTranslate(Vector3 translated)
    {
        RpcAlphaBaseTranslate(translated);
    }
    [ClientRpc]
    public void RpcAlphaBaseTranslate(Vector3 translated)
    {
        alphaBase.transform.Translate(translated * 0.0002f, Space.World);
    }
    [Command]
    /*Unet*/
    public void CmdScreenBaseTranslate(Vector3 translated)
    {
        RpcScreenBaseTranslate(translated);
    }
    [ClientRpc]
    public void RpcScreenBaseTranslate(Vector3 translated)
    {
        screenBase.transform.Translate(translated * 0.0002f, Space.World);
    }
    [Command]
    /*Unet*/
    public void CmdAlphaBaseTranslateBack(Vector3 translated)
    {
        RpcAlphaBaseTranslateBack(translated);
    }
    [ClientRpc]
    public void RpcAlphaBaseTranslateBack(Vector3 translated)
    {
        alphaBase.transform.Translate(-translated * 0.005f, Space.World);
    }
    [Command]
    /*Unet*/
    public void CmdScreenBaseTranslateBack(Vector3 translated)
    {
        RpcScreenBaseTranslateBack(translated);
    }
    [ClientRpc]
    public void RpcScreenBaseTranslateBack(Vector3 translated)
    {
        screenBase.transform.Translate(-translated * 0.005f, Space.World);
    }
    [Command]
    /*Unet*/
    public void CmdAlphaBaseTranslateForward(Vector3 translated)
    {
        RpcAlphaBaseTranslateForward(translated);
    }
    [ClientRpc]
    public void RpcAlphaBaseTranslateForward(Vector3 translated)
    {
        alphaBase.transform.Translate(translated * 0.005f, Space.World);
    }
    [Command]
    /*Unet*/
    public void CmdScreenBaseTranslateForward(Vector3 translated)
    {
        RpcScreenBaseTranslateForward(translated);
    }
    [ClientRpc]
    public void RpcScreenBaseTranslateForward(Vector3 translated)
    {
        screenBase.transform.Translate(translated * 0.005f, Space.World);
    }
}
