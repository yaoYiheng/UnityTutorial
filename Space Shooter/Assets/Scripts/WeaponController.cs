using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponController : MonoBehaviour {

    public GameObject shot;
    private AudioSource audioSource;

    public Transform shotSpawn;
    // Use this for initialization

    public float fireRate;
    public float delay;
	void Start () {
        audioSource = GetComponent<AudioSource>();

        //重复某个方法 
        //需要重复执行的方法, 延迟时间, 开火率.
        InvokeRepeating("Fire", delay, fireRate);
	}

    void Fire() {
        Instantiate(shot, shotSpawn.position, shotSpawn.rotation);
        audioSource.Play();
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
