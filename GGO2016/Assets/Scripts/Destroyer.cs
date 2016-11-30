using UnityEngine;
using System.Collections;

public class Destroyer : MonoBehaviour {

		void OnTriggerEnter2D (Collider2D col)
	{
		GameObject CurrentTarget = col.transform.parent.gameObject;
		EnemySpawner.CurrentEnemies -= 1;
//if the CurrentTarget is the player and the DestroyReady is true, destroy player		
		if (CurrentTarget) {
			Destroy (CurrentTarget);
//if the CurrentTarget is not the player, destroy it right away
		} 
	}
	
}

