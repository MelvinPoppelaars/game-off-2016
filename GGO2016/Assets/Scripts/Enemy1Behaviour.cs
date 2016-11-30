using UnityEngine;
using System.Collections;

public class Enemy1Behaviour : MonoBehaviour {
public float MinMovementSpeed;
public float MaxMovementSpeed;
private float movementSpeed;

	// Use this for initialization
	void Start ()
	{
		
		movementSpeed = Random.Range (MinMovementSpeed, MaxMovementSpeed);


		if (movementSpeed <= 0) {
			transform.parent.localScale = new Vector3 (-1, 1, 1);
		} else {
			transform.parent.localScale = new Vector3 (1, 1, 1);
		}

		
	}
	
	// Update is called once per frame
	void Update () {
	transform.position += Vector3.left * movementSpeed * Time.deltaTime;
	}
}
