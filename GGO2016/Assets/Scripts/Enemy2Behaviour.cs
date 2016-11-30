using UnityEngine;
using System.Collections;

public class Enemy2Behaviour : MonoBehaviour {
private float MovementSpeed;
public float MaxSpeed;
public float MinSpeed;
public float MinSize;
public float Maxsize;
private float enemySize;
private float distanceToCamera;
private float xMin;
private float xMax;
private float left;
private float right;
private bool MovingRight;



    void Start ()
	{

		enemySize = Random.Range (MinSize,Maxsize);		
		MovementSpeed = Random.Range (MinSpeed, MaxSpeed);
		float probability = 0.5f;
		
		if (Random.value < probability) {
			MovingRight = true;
		} else {
			MovingRight = false;
		}

	}

	// Update is called once per frame
	void Update ()
	{

		if (MovingRight == true) {
			MoveRight ();
		} else if (MovingRight == false) {
			MoveLeft ();
		}



		distanceToCamera = (transform.position - Camera.main.transform.position).z;
		Vector3 LeftEdge = Camera.main.ViewportToWorldPoint (new Vector3 (0, 0, distanceToCamera));
		Vector3 RightEdge = Camera.main.ViewportToWorldPoint (new Vector3 (1, 0, distanceToCamera));
		// get floats for the edges
		xMin = LeftEdge.x;
		xMax = RightEdge.x;	

// get offset for the edges
		left = transform.position.x - 0.5f;
		right = transform.position.x + 0.5f;

// switch player direction if edge is reached
		if (left < xMin) {
			MovingRight = true;
		
		} else if (right > xMax) {
			MovingRight = false; 

		} 
	}
	public void MoveLeft() {
		transform.position +=  Vector3.left * MovementSpeed * Time.deltaTime;
		transform.localScale = new Vector3 (enemySize, enemySize, enemySize);

	}

	public void MoveRight() {
		transform.position +=  Vector3.right * MovementSpeed * Time.deltaTime;
		transform.localScale = new Vector3 (-enemySize, enemySize, enemySize);

	}
}
