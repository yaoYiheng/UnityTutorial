using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public GameObject spawn;
    public Vector3 spawnValue;

    //每一波出多少个
    public float spawnCount;
    //每个陨石间隔多久
    public float spawnWait;

    //留有一定的时间可供玩家就绪
    public float startWait;

    //每一波之间的间隔
    public float spawnWaves;
    // Use this for initialization
    void Start()
    {
        //所有IEnumerator类型函数必须使用”StartCoroutine”这个函数触发，不能单独使用
        StartCoroutine(spawnWave());
    }

    // Update is called once per frame
    void Update()
    {

    }

	//所有使用yield的函数必须将返回值类型设置为IEnumerator类型
	IEnumerator spawnWave(){

        //开始游戏时, 用于等待玩家就绪
        yield return new WaitForSeconds(startWait);

        while(true){
            
			for (int i = 0; i < spawnCount; i++){
				Vector3 spawnPosition = new Vector3(Random.Range(-spawnValue.x, spawnValue.x), spawnValue.y, spawnValue.z);
				Quaternion rotation = Quaternion.identity;//no rotation
				Instantiate(spawn, spawnPosition, rotation);
				
				yield return new WaitForSeconds(spawnWait);
				
			}

            //每一波陨石间的间隔.
            yield return new WaitForSeconds(spawnWaves);
        }

    }
}
