using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

    public float jumpSpeed;
    public bool isLanding = false;  //着陆标记

    private Rigidbody rb;
	// Use this for initialization
	void Start () {
        rb = GetComponent<Rigidbody>();

        //初始化
        isLanding = false;
		
	}
	
	// Update is called once per frame
	void Update () {
        //只有着陆状态时, 点击鼠标才能够触发方块的弹跳
        if (isLanding){
            if (Input.GetMouseButtonDown(0))
            {//点击鼠标左键触发
                //当起跳之后标记为非着陆
                isLanding = false;
                rb.velocity = Vector3.up * jumpSpeed;
                //Debug.Break();//暂停游戏
            }
        }

	}

    //与其他游戏对象发生碰撞时调用
    private void OnCollisionEnter(Collision collision)
    {
        //只有当碰撞的物体为Floor时, 才需要标记为着陆
        if(collision.gameObject.tag == "Floor"){
            
			isLanding = true;
        }
    }
}
