using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

    public float jumpSpeed;

    private Rigidbody rigidBody;
	// Use this for initialization
	void Start () {
        rigidBody = GetComponent<Rigidbody>();

		
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButtonDown(0))//点击鼠标左键触发
            rigidBody.velocity = Vector3.up * jumpSpeed;
	}
}
