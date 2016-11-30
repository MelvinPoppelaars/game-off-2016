using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour {
public static int Score;
public GameObject HighscoreTXT;
static int count = 0;
public Text ScoreTxt;
private GameObject Player;
public Slider Timer;
private float MaxTime;
private float CurrentTimer;
private Animator anim;



	const string HIGHSCORE = "HighScore";
	


	void Awake ()
	{

		if (count == 0) {
			GameObject.DontDestroyOnLoad (gameObject);
			count++;
		} else if (count >= 0) {
			Destroy(gameObject);
		}
	}

//function to retrieve the Highscore from the playerprefs manager
	int GetHighscore () {
		return PlayerPrefs.GetInt (HIGHSCORE);
	}

//function to set the highscore, if the score is higher than the previous highscore that was set (first time = 0)
	void SetHighscore (int highscore)
	{
		if (Score > GetHighscore()) {
			highscore = Score;
			PlayerPrefs.SetInt (HIGHSCORE,highscore);
		} 
	}

	void OnLevelWasLoaded() {
		// Display the highscore OnLevelWasLoaded, but reset the score to 0
		HighscoreTXT.SetActive(true);
		Score = 0;
		ScoreTxt.text = "" + GetHighscore();
		ScoreTxt.color = Color.yellow;


	}

	// Use this for initialization
	void Start () {
	// Show the highscore on start
		ScoreTxt.text = "" + GetHighscore();
		ScoreTxt.color = Color.yellow;

		MaxTime = EventManager.EventTime;
		Timer.maxValue = MaxTime;
		anim = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (PlayerController.GameStart == true) {
			// Display the score 
			HighscoreTXT.SetActive (false);
			ScoreTxt.text = "" + Score;
			ScoreTxt.color = Color.white;

		}

		if (Score > GetHighscore ()) {
			ScoreTxt.color = Color.yellow;
		}

		Timer.value = EventManager.timer;

		//	anim.SetBool ("Spellbook", true);




		if (Timer.value == Timer.minValue) {
			Timer.value = MaxTime;
		}

		if (Timer.value >= MaxTime) {
			Timer.value = MaxTime;

		}

		if (PlayerController.health <= 0 && PlayerController.GameStart != false) {
			PlayerController.GameStart = false;
			StartCoroutine (Endscreen ());
			SetHighscore(Score);
			}	
		}
			IEnumerator Endscreen() {
			yield return new WaitForSeconds (1f);
			anim.Play("EndScreen");
	}

			public void Replay () {
			SceneManager.LoadScene(0);
			anim.Play("StartScreen");

			}

}

	
