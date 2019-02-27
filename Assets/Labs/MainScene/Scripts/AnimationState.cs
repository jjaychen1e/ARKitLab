using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationState : MonoBehaviour {
    public int state;

    public void GoLeft()
    {
        state--;
        this.GetComponent<Animator>().SetInteger("direction", state);
    }
    public void GoRight()
    {
        state++;
        this.GetComponent<Animator>().SetInteger("direction", state);
    }
}
