using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

	public GameObject player;
	private Vector3 offset;
	// Use this for initialization
	void Start()
	{
		offset = transform.position - player.transform.position;
	}

	//当场景中所有的物体调用了Update与FixedUpdate函数，且所有的动画计算完，这时做一些改变也很常用。
    //比如要让摄像机望向一个物体，那么摄像机须在该物体移动后改变朝向。
    //又如某段代码改变了动画的效果（让一个角色的头望向场景中的另一个物体）。这种时候，用LateUpdate函数就比较适合。
	private void LateUpdate()
	{
		transform.position = player.transform.position + offset;
	}
}
