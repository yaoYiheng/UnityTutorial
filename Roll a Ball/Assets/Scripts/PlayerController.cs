using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;//UI元素需要导入

public class PlayerController : MonoBehaviour {


    private Rigidbody rigidBody;
    public float speed;

    //计数
    public Text countText;
    //展示信息
    public Text winText;

    private int count;

	// Use this for initialization
	void Start () {
        rigidBody = GetComponent<Rigidbody>();
        count = 0;
        winText.text = "";
        setCountText();
    }

    private void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

        rigidBody.AddForce(movement * speed);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("pick_up"))
        {
            other.gameObject.SetActive(false);
            count += 1;
            setCountText();

        }
    }
     
    private void setCountText(){
		countText.text = "Count: " + count.ToString();
		if (count >= 8)
		{
			winText.text = "You Win!";
		}
    }
}
