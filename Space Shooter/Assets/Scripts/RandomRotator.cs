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

    //检测到碰撞时, 销毁物体, 以及子弹.
    private void OnTriggerEnter(Collider other)
    {
        //游戏一开始时, Boundary与物体就会有接触, 便会调用该方法, 绑定一个tag避免
        if (other.tag == "Boundary") return;
        //检查到碰撞后, 销毁相关碰撞物.
        Destroy(gameObject);
        Destroy(other.gameObject);
    }
}
