using UnityEngine;
using System.Collections;

public class ItemSpawner : MonoBehaviour {
public GameObject Item;
private int ItemCount;
	// Use this for initialization
	void Start () {
		ItemCount = 0;
	}
	
	// Update is called once per frame
	void Update ()
	{
		Debug.Log (ItemCount);
		

		if (PlayerController.GameStart != false) {
			Transform[] children = GetComponentsInChildren<Transform> ();
				foreach (Transform childposition in children) {
				if (childposition.childCount == 0) {
					SpawnRandom ();
					ItemCount++;
				} else {
					return;
				}
			
			if (childposition.childCount >= 1) {
				return;
			}
         }

		} else {
			return;
		}

	}

	public void SpawnRandom()
     {
         //Vector3 screenPosition = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane+5)); //will get the middle of the screen
        Vector3 screenPosition = Camera.main.ScreenToWorldPoint(new Vector3(Random.Range(0,Screen.width -1), Random.Range(0,Screen.height - 5f), Camera.main.farClipPlane/2));
		GameObject Spawner = Instantiate(Item,screenPosition,Quaternion.identity) as GameObject;
		Spawner.transform.parent = transform;
     }

}
