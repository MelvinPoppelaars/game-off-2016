using UnityEngine;
using System.Collections;

public class Enemy3Behaviour : MonoBehaviour {
private GameObject Player;
private Vector3 Playerpos;
public float MinSpeed;
public float MaxSpeed;
private float MovementSpeed;
private Transform PlayerChild;



	// Use this for initialization
	void Start () {

	MovementSpeed = Random.Range(MinSpeed, MaxSpeed);

	Player = GameObject.FindGameObjectWithTag("Player");
	PlayerChild = Player.transform.FindChild("Body");

	
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Player != null) {
			//store the position of the player object in vector 3, use that Vector 3 and substract it from this objects position
			Playerpos = new Vector3 (PlayerChild.transform.position.x, PlayerChild.transform.position.y, PlayerChild.transform.position.z);
			float step = MovementSpeed * Time.deltaTime;
			transform.position = Vector3.MoveTowards (transform.position, Playerpos, step);
			// switches the sprite direction towards the player, comparing the x position of je the player object
			if (Playerpos.x > transform.position.x) {
				transform.localScale = new Vector3 (-0.3f, 0.3f, 0.3f);
			} else {
				transform.localScale = new Vector3 (0.3f, 0.3f, 0.3f);
			} 	
		} else {
			return;
		}
	}
}
