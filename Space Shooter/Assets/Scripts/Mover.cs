using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {
	public float speed;
	private Rigidbody rigidBody;
    // Use this for initialization
    //Will be executed on the very first frame the object is instantiated
    private void Start()
    {
        rigidBody = GetComponent<Rigidbody>();
		rigidBody.velocity = transform.forward * speed;
    }
}
