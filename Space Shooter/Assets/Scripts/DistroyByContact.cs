﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistroyByContact : MonoBehaviour {

	public GameObject explosion;
    public GameObject playerExplosion;
	//检测到碰撞时, 销毁物体, 以及子弹.
	private void OnTriggerEnter(Collider other)
	{
		//游戏一开始时, Boundary与物体就会有接触, 便会调用该方法, 绑定一个tag避免
		if (other.tag == "Boundary") return;

		Instantiate(explosion, transform.position, transform.rotation);
        if(other.tag == "Player"){
            Instantiate(playerExplosion, other.transform.position, other.transform.rotation);
        }
		//检查到碰撞后, 销毁相关碰撞物.
		Destroy(other.gameObject);
        Destroy(gameObject);
	}
}