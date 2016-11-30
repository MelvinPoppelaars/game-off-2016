using UnityEngine;
using System.Collections;

public class SpawnManager : MonoBehaviour {
public GameObject[] Spawners;
private GameObject  enemy;
private GameObject Centre;
private GameObject Other;
	// Use this for initialization
	void Start () {
		Centre = Spawners[0];
		Other = Spawners[1];
		Centre.SetActive(false);
		Other.SetActive(false);


	}
	
	// Update is called once per frame
	void Update ()
	{
		
		if (UIManager.Score >= 3) {
			Other.SetActive (true);
		}

	}		
	
}

