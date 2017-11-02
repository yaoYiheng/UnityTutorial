using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    //hazard数组, 用来装载hazard
    public GameObject[] hazards;
    public Vector3 spawnValue;

    //每一波出多少个
    public float spawnCount;
    //每个陨石间隔多久
    public float spawnWait;

    //留有一定的时间可供玩家就绪
    public float startWait;

    //每一波之间的间隔
    public float spawnWaves;

    //用来显示文字
    public GUIText sourtText;
    public GUIText restartText;
    public GUIText gameOverText;

    private int score;

    //添加两个变量已记录游戏开始以及重新开始
    private bool gameOver;
    private bool restart;

    // Use this for initialization
    void Start()
    {
        gameOver = false;
        restart = false;
        gameOverText.text = "";
        restartText.text = "";
        score = 0;
        updateScore(); 
        //所有IEnumerator类型函数必须使用”StartCoroutine”这个函数触发，不能单独使用
        StartCoroutine(spawnWave());
    }

    // Update is called once per frame
    void Update()
    {
        if(restart){
            if(Input.GetKeyDown(KeyCode.R)){
                //方法过期
                Application.LoadLevel(Application.loadedLevel);
            }
        }
    }

    //游戏结束
    public void GameOver(){

        gameOverText.text = "Game Over";
        gameOver = true;
        
    }
    public void addScore(int newScoreValue){
        score += newScoreValue;
        updateScore();
    }
    public void updateScore(){
        sourtText.text = "Score: " + score;
    }

	//所有使用yield的函数必须将返回值类型设置为IEnumerator类型
	IEnumerator spawnWave(){

        //开始游戏时, 用于等待玩家就绪
        yield return new WaitForSeconds(startWait);

        while(true){
            
			for (int i = 0; i < spawnCount; i++){
                GameObject hazard = hazards[Random.Range(0, hazards.Length)];
				Vector3 spawnPosition = new Vector3(Random.Range(-spawnValue.x, spawnValue.x), spawnValue.y, spawnValue.z);
				Quaternion rotation = Quaternion.identity;//no rotation
				Instantiate(hazard, spawnPosition, rotation);
				
				yield return new WaitForSeconds(spawnWait);
				
			}

            //每一波陨石间的间隔.
            yield return new WaitForSeconds(spawnWaves);

            //当游戏结束时修改显示, 并修改重新开始的棋子, 并退出循环.
            if(gameOver){
                restartText.text = "Press R for Restart";
                restart = true;
                break;
            }
        }

    }
}
