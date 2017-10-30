using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistroyByContact : MonoBehaviour {

	public GameObject explosion;
    public GameObject playerExplosion;
	public int scoreValue;

    private GameController gameController;

    private void Start()
    {
        //通过标签, 找到游戏控制器对象.
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if(gameControllerObject != null) {
			//为gameController赋值, 
			gameController = gameControllerObject.GetComponent<GameController>();
        }
        if(gameController == null){
            Debug.Log("Cannot find GameController script");
        }
    }


	//检测到碰撞时, 销毁物体, 以及子弹.
	private void OnTriggerEnter(Collider other)
	{
		//游戏一开始时, Boundary与物体就会有接触, 便会调用该方法, 绑定一个tag避免
		if (other.tag == "Boundary") return;

		Instantiate(explosion, transform.position, transform.rotation);
        if(other.tag == "Player"){

            //实例化碰撞体的爆炸效果, 碰撞体(other)的位置与旋转
            Instantiate(playerExplosion, other.transform.position, other.transform.rotation);
        }
		//检查到碰撞后, 销毁相关碰撞物.
		Destroy(other.gameObject);
        Destroy(gameObject);

        //  增加分数
        gameController.addScore(scoreValue);
	}
}
