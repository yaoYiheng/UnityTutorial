﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGScroller : MonoBehaviour {

    public float scrollSpeed;
    public float tiltSizeZ;

    private Vector3 startPostion;
	
    // Use this for initialization
	void Start () {
        startPostion = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
        float newPostion = Mathf.Repeat(Time.time * scrollSpeed, tiltSizeZ);
        transform.position = startPostion + Vector3.forward * newPostion;
	}
}
