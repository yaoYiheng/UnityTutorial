using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvasiveManenver : MonoBehaviour {

    //该变量用来使enemy并不在一开始时就移动
    public Vector2 startWait;
    public float dodge;//help us pick targetManeuver

    public Vector2 maneuverTime;
    public Vector2 maneuverWait;


    private float targetManeuver;

	void Start () {
        //执行想要重复的方法
        StartCoroutine(Evade());
	}
	
    //需要重复执行躲避的方法
    IEnumerator Evade(){
        //等待一个随机的时间, 该时间在检视视图中定义
        yield return new WaitForSeconds(Random.Range(startWait.x, startWait.y));

        while(true){
			// Mathf.Sign()判断输入的正负，如果是正则返回0或1如果是负则返回-1 
			targetManeuver = Random.Range(1, dodge) * -Mathf.Sign(transform.position.x);
            yield return new WaitForSeconds(maneuverTime.x, maneuverTime.y);
            targetManeuver = 0;
            yield return new WaitForSeconds();

        }
    }


	void Update () {
        float newManenver = Mathf.MoveTowards();
	}
}
