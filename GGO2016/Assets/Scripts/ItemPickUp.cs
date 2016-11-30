using UnityEngine;
using System.Collections;

public class ItemPickUp : MonoBehaviour {
private EventManager manager;
	
	void Start() {
		manager = FindObjectOfType<EventManager>();
	}

	void OnTriggerEnter2D (Collider2D Col) {
		GameObject CurrentTarget = Col.gameObject;
		
		if (CurrentTarget = GameObject.FindGameObjectWithTag("Player")) {
			Destroy(gameObject);
			manager.addOnTimer(1f);
			
		}


	}
}