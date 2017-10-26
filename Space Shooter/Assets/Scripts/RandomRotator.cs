using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomRotator : MonoBehaviour {

    public float tumble;

    private Rigidbody rigidBody;
    // Use this for initialization
    private void Start()
    {
        rigidBody = GetComponent<Rigidbody>();

        rigidBody.angularVelocity = Random.insideUnitSphere * tumble;
    }


}
