using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvasiveManenver : MonoBehaviour {

    //该变量用来使enemy并不在一开始时就移动
	public float dodge;//help us pick targetManeuver
	public float smoothing;
	public float tilt;

    public Vector2 startWait;

    public Vector2 maneuverTime;
    public Vector2 maneuverWait;

    public Boundary boundary;

    private float targetManeuver;
    private Rigidbody rb;
    private float currentSpeed;

	void Start () {
        //执行想要重复的方法
        StartCoroutine(Evade());
        rb = GetComponent<Rigidbody>();
        currentSpeed = rb.velocity.z;
	}
	
    //需要重复执行躲避的方法
    IEnumerator Evade(){
        //等待一个随机的时间, 该时间在检视视图中定义
        yield return new WaitForSeconds(Random.Range(startWait.x, startWait.y));

        while(true){
			// Mathf.Sign()判断输入的正负，如果是正则返回0或1如果是负则返回-1 
			targetManeuver = Random.Range(1, dodge) * -Mathf.Sign(transform.position.x);
            yield return new WaitForSeconds(Random.Range(maneuverTime.x, maneuverTime.y));
            targetManeuver = 0;
            yield return new WaitForSeconds(Random.Range(maneuverWait.x, maneuverWait.y));

        }
    }


	void FixedUpdate () {
        //Change the position
        float newManenver = Mathf.MoveTowards(rb.velocity.x, targetManeuver, Time.deltaTime * smoothing);

        //更新刚体的角速度
        rb.velocity = new Vector3(newManenver, 0.0f, currentSpeed);

        //限定刚体的移动范围, 通过使用Mathf.Clamp.
        rb.position = new Vector3(
            Mathf.Clamp(rb.position.x, boundary.xMin, boundary.xMax),
            0.0f,
            Mathf.Clamp(rb.position.z, boundary.zMin, boundary.zMax)

        );
        //根据在x方向的角速度产生倾斜.
        rb.rotation = Quaternion.Euler(0.0f, 0.0f, rb.velocity.x * -tilt);
	}
}
