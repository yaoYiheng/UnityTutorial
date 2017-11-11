using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {


    private Rigidbody rb;
	// Use this for initialization
	void Start () {
        rb = GetComponent<Rigidbody>();

        rb.velocity = new Vector3(-8.0f, 8.0f, 0.0f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    //游戏对象抛出画面外时被调用的方法
    private void OnBecameInvisible()
    {
        //删除游戏对象
        Destroy(gameObject);
    }
}
