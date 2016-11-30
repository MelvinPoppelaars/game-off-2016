using UnityEngine;
using System.Collections;

public class LavaDeath : MonoBehaviour {
private bool DestroySwitch = false;
public AudioClip Burn;
private GameObject CurrentTarget;
private Animator PlayerAnim;
private GameObject Player;

	void Start() {
		Player = GameObject.FindGameObjectWithTag("Player");
		PlayerAnim = Player.GetComponentInChildren<Animator>();
		}

	
		void OnTriggerEnter2D (Collider2D col)
	{
//Calls in Coroutine and set DestroyReady to true when the gameObject is enabled

		CurrentTarget = col.transform.parent.gameObject;
		EnemySpawner.CurrentEnemies -= 1;
//if the CurrentTarget is the player and the DestroyReady is true, destroy player		
		if (CurrentTarget == Player && DestroySwitch == true) {
			PlayerController.health = 0;
			AudioSource.PlayClipAtPoint(Burn, Camera.main.transform.position);
			PlayerAnim.Play ("Knight_Die");
//if the CurrentTarget is not the player, destroy it right away
		} else if (CurrentTarget != Player) {
			Destroy (CurrentTarget);
		
		}

	}

	public  void DestroyReady() {
		DestroySwitch = true;
	}
			
}