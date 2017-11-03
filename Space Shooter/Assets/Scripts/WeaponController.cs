using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponController : MonoBehaviour {

    public GameObject shot;
    private AudioSource audioSource;

    public Transform shotSpawn;
	// Use this for initialization
	void Start () {
        audioSource = GetComponent<AudioSource>();

	}

    void Fire() {
        Instantiate(shot, shotSpawn.position, shotSpawn.rotation);
        audioSource.Play();
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
