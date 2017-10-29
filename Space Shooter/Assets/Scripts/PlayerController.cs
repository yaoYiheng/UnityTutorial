using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//通过添加该语句使该类能在外界访问
//可序列化.
[System.Serializable]
public class Boundary{
    public float xMin, xMax, zMin, zMax;
}

public class PlayerController : MonoBehaviour {

    private Rigidbody rigidBody;
    public float speed;
    public Boundary boundary;

    //待实例化的游戏对象, 即子弹的预制Prefab.
    public GameObject shot;
	//子弹发射器的Transform属性
	//can receive the transform position and rotation by making use of the shotSpawn variable.
	public Transform shotSpawn;

    //斜度
    public float tilt;

    //射击速率
    public float fireRate;
    //射击间隔
    private float nextFire;

	// Use this for initialization
	void Start () {
        rigidBody = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {

		//Time.time 从游戏开始到到现在所用的时间
		if (Input.GetButton("Fire1") && Time.time > nextFire)
        {
            //限制发射频率
            nextFire = Time.time + fireRate;
            //实例化子弹, 子弹的位置跟旋转跟随shotSpawn, shotSpawn是跟随飞机的
            Instantiate(shot, shotSpawn.position, shotSpawn.rotation);

            GetComponent<AudioSource>().Play();

        }



	}
    //这个函数会在每个固定的物理时间步被调用一次。这是放置游戏基本物理行为代码的地方。
    private void FixedUpdate()
    {
        //从键盘获取输入
		float moveHorizontal = Input.GetAxis("Horizontal");
		float moveVertical = Input.GetAxis("Vertical");

		Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

        //设置刚体的移动速率
        rigidBody.velocity = movement * speed;

        //设置刚体的位置, 不能使其跑出屏幕外
        //使用Mathf.Clamp限制刚体的值在给定的范围之间
        rigidBody.position = new Vector3(Mathf.Clamp(rigidBody.position.x, boundary.xMin, boundary.xMax),
                                         0.0f,
                                         Mathf.Clamp(rigidBody.position.z, boundary.zMin, boundary.zMax)
                                        );
        //设置飞机移动时, 产生的倾斜
        rigidBody.rotation = Quaternion.Euler(0.0f, 0.0f, rigidBody.velocity.x * -tilt);

	}
}
