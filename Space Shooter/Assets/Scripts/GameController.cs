using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public GameObject spawn;
    public Vector3 spawnValue;

    // Use this for initialization
    void Start()
    {
        spawnWave();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void spawnWave(){

        Vector3 spawnPosition = new Vector3(Random.Range(-spawnValue.x, spawnValue.x), spawnValue.y, spawnValue.z);
        Quaternion rotation = Quaternion.identity;
        Instantiate(spawn, spawnPosition, rotation);
    }
}
