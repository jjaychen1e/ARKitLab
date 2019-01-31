using UnityEngine;
using System.Collections;
public class DrawLines : MonoBehaviour
{
    public Material lineMat, HorizontalLine;
    public GameObject RPoint, VPoint, Pedal;
    public GameObject RF, VF;
    private LineRenderer LineRenderer;

    private void Start()
    {
        LineRenderer = this.gameObject.GetComponent<LineRenderer>();
    }

    public void DrawLight()
    {
        LineRenderer.material = lineMat;
        LineRenderer.positionCount = 4;
        LineRenderer.widthMultiplier = 0.002f;
        LineRenderer.SetPosition(0, RPoint.transform.position);
        LineRenderer.SetPosition(1, Pedal.transform.position);
        LineRenderer.SetPosition(2, VPoint.transform.position);
        LineRenderer.SetPosition(3, RPoint.transform.position);
    }

    public void DrawHorizontalLine()
    {
        LineRenderer.material = HorizontalLine;
        LineRenderer.positionCount = 2;
        LineRenderer.widthMultiplier = 0.002f;
        LineRenderer.SetPosition(0, RF.transform.position);
        LineRenderer.SetPosition(1, VF.transform.position);
    }
}