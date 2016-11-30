 using UnityEngine;
using System.Collections;

public class EnemySpawner : MonoBehaviour {
private int MaxSpawns;
private int MaxLenght;
public static int CurrentEnemies;
private float SpawnerCooldown = 2f;
public float SpawnChanceValue = 0.5f;
private float SpawnDelay;
private float timer;
private bool SpawnReady;
private int Enemy;
private float probability;
public GameObject[] Enemies;


// try moving enemy spawn probability to Update and handle all events there
// if enemy count <= than max enemies spawn enemies else return...:???

	// Use this for initialization
	void Start() {
		MaxLenght = 0;
		MaxSpawns = 1;
		SpawnChanceValue = 1f;
		EventManager.EventTime = 10f;
		CurrentEnemies = 0;
		
	}

	void Update ()
	{
		
		if (PlayerController.GameStart == false) {
			SpawnReady = false;

		} else if (PlayerController.GameStart == true) {
			timer += 1f * Time.deltaTime;

			if (timer > 2f) {
				SpawnReady = true;
			}
		}

		if (PlayerController.health <= 0) {
			MaxLenght = 0;
			MaxSpawns = 1;
		}
		
		if (UIManager.Score >= 3) {
			MaxSpawns = 1;
			SpawnChanceValue = 1f;
		}

		if (UIManager.Score >= 5) {
			MaxLenght = 1;
			MaxSpawns = 2;
			SpawnChanceValue = 1f;
		}


		if (UIManager.Score >= 10) {
			MaxLenght = 2;
			MaxSpawns = 2;
			SpawnChanceValue = 1f;
			EventManager.EventTime = 5f;
		}

		if (UIManager.Score >= 20) {
			MaxLenght = 3;
			MaxSpawns = 3;
			SpawnChanceValue = 1f;
		}

		if (UIManager.Score >= 25) {
			MaxLenght = Enemies.Length;
			MaxSpawns = 4;
			SpawnChanceValue = 1f;
		}

		if (UIManager.Score >= 30) {
			MaxLenght = Enemies.Length;
			MaxSpawns = 5;
			SpawnChanceValue = 1f;
		}


		if (SpawnReady == true) {
			probability = Time.deltaTime * SpawnChanceValue;
			if (CurrentEnemies < MaxSpawns && Random.value < probability) {
				SpawnEnemy ();
			} else {
				return; 

			}
		}
	}
	
	// if the number from probability (random between 2 and 5 

	void SpawnEnemy ()
	{			
				StartCoroutine(SwitchReady());
				Enemy = Random.Range (0, MaxLenght);
				CurrentEnemies += 1;
				GameObject Clone = Instantiate (Enemies [Enemy], transform.position, Quaternion.identity) as GameObject;
				Clone.transform.parent = transform;

	}
	
	IEnumerator SwitchReady ()
	{
			SpawnReady = false;
			// wait for enemy new enemy to spawn
			yield return new WaitForSeconds (SpawnerCooldown);
			SpawnReady = true;

	}
	
}
	
