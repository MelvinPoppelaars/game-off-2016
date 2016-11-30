using UnityEngine;
using System.Collections;

public class enemy0Behaviour : MonoBehaviour {
public GameObject Enemy0;
public float minSize = 0.2f;
public float maxSize = 1f;
public float MinMovementSpeed;
private float distanceToCamera;
private float xMin;
private float xMax;
private float left;
private float right;
public float MaxMovementSpeed;
private float movementSpeed;
private float enemySize;
private bool MovingRight;


	void Awake() {

		movementSpeed = Random.Range (MinMovementSpeed, MaxMovementSpeed);
		enemySize = Random.Range (minSize,maxSize);
		transform.localScale = new Vector3(enemySize,enemySize,enemySize);
	}

	// Use this for initialization
	void Start () {
	//turns on body gamobject after 1f
		Enemy0.gameObject.SetActive(false);
		Invoke("Enemy",1f);

	// decides if the enemy is going left or right
		float probability = 0.5f;
		
		if (Random.value < probability) {
			MovingRight = true;
		} else {
			MovingRight = false;
		}

		if (movementSpeed <= 0) {
			transform.parent.localScale = new Vector3 (-1, 1, 1);
		} else {
			transform.parent.localScale = new Vector3 (1, 1, 1);
		}
	}
	

	



	// Update is called once per frame
	void Update () {
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
		transform.position +=  Vector3.left * movementSpeed * Time.deltaTime;
		transform.localScale = new Vector3 (enemySize, enemySize, enemySize);

	}

	public void MoveRight() {
		transform.position +=  Vector3.right * movementSpeed * Time.deltaTime;
		transform.localScale = new Vector3 (-enemySize, enemySize, enemySize);

	}

	void Enemy() {
			Enemy0.SetActive(true);
	}
}
