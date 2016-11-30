using UnityEngine;
using System.Collections;

public class MusicManager : MonoBehaviour {

public GameObject start;
public GameObject game;
public GameObject end;
public GameObject disco;
// Use this for initialization


//credits: Autumn Forest = VocalMix
//		   Battle in the Winter = jobromedia
//		   Prologue = Forester
// 		   "Funky Gameplay" by Eric Matyas Soundimage.org


	void Awake ()
	{
	//prevents multiple music managers from entering the scene;
	}
	void Start() {
		start.SetActive (true);
		game.SetActive (false);
		end.SetActive (false);
		disco.SetActive(false);
	}



	// Update is called once per frame
	void Update ()
	{
	
		if (PlayerController.GameStart != false && EventManager.CurrentState != EventManager.States.DISCO) {
			start.SetActive (false);
			game.SetActive (true);
			end.SetActive (false);
			disco.SetActive (false);

		} else if ( PlayerController.GameStart != false && EventManager.CurrentState == EventManager.States.DISCO) {
			start.SetActive (false);
			game.SetActive (false);
			end.SetActive (false);
			disco.SetActive(true);
		}

		if (PlayerController.health <= 0) {
			start.SetActive (false);
			game.SetActive (false);
			end.SetActive (true);
			disco.SetActive(false);

		}
		
	}


}