using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour {
public static int  CurrentEnemies;
public float AttackDamage = 1f;
public float AddTime = 1f;
private float CollisionTimer;
public float Health = 1f;
public int ScoreValue;
private float yOffset = 0.38f;
private bool enemyready = false;
private GameObject PlayerBody;
private GameObject Event;
private EventManager Manager;

	void Start() {
		PlayerBody = GameObject.FindGameObjectWithTag("Playerbody");
		Event = GameObject.Find("Level");
		Manager = Event.GetComponent<EventManager>();
	}

	void Update ()
	{
		Debug.Log(enemyready);

		if (Health <= 0) {
			UIManager.Score += ScoreValue;
			EnemySpawner.CurrentEnemies -= 1;
			//adds time on the eventtimer
			Manager.addOnTimer (AddTime);
			Destroy (transform.parent.gameObject);
		}
//bool is set when eney enters the screen after 0.3 seconds to prevent enemy from hurting player
		if (GetComponentInChildren<SpriteRenderer>().isVisible) {
			CollisionTimer += 1f * Time.deltaTime;
			if (CollisionTimer >= 0.3f) {
				enemyready = true;
			}
		}

	}



//this is one collision state 
	void OnCollisionEnter2D (Collision2D col)
	{
		GameObject CurrentTarget = col.gameObject;
 		PlayerController Player = PlayerBody.GetComponentInChildren<PlayerController> ();
	//Check if the player's position is higher than the enemy position, if true return

		if (PlayerBody.transform.position.y <= (gameObject.transform.position.y + yOffset) && enemyready == true) {
			Player.DamagePlayer (AttackDamage);
		} else if (PlayerBody.transform.position.y > gameObject.transform.position.y) {
			return;
		}

	}

	public void DamageEnemy(float damage) {
		Health -= damage;
	}

}