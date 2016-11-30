using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EventManager : MonoBehaviour {
public static float EventTime = 10f;
public static float timer;


private Text CurseTxt;
private int CurseRange;
private GameObject Curse;
public GameObject Clouds;
public GameObject LavaFloor;
public GameObject IceFloor;
public GameObject Forrest;
public AudioClip LightningClip;
private PlayerController playerScript;
private GameObject Player;
private GameObject Background;
private Animator BgAnim;
private Animator CamAnim;
private GameObject Lightning;
private GameObject Body;
private Rigidbody2D BodyRig;
private GameObject Level;
public GameObject CentreSpawners;
private float time;


public GameObject start;
public GameObject game;
public GameObject end;
public GameObject disco;

public enum States {
NORMAL = 0,
LOWGRAVITY = 1,
HIGHGRAVITY = 2,
BIGHEAD = 3,
TINYMODE = 4,
GRAVITYSWAP = 5,
LAVAFLOOR = 6,
ICEFLOOR = 7,
SLOMOTION = 8,
DISCO = 9,
} 

public static States CurrentState;

	void Awake() {

		Player = GameObject.FindGameObjectWithTag("Player");
		Level = GameObject.Find("Level");
		Curse = GameObject.Find("CurseTxt");
		CurseTxt = Curse.GetComponent<Text>();
	//	Body = GameObject.Find("PlayerBody");
		Background = GameObject.Find("MainBG");
		BgAnim = Background.GetComponent<Animator>();
		CamAnim = Camera.main.GetComponent<Animator>();
		Lightning = GameObject.Find("Lightning");
		Player.GetComponentInChildren<PlayerController>();
		playerScript = 	Player.GetComponentInChildren<PlayerController>();
		BodyRig = Player.GetComponentInChildren<Rigidbody2D>();
		LavaFloor.gameObject.SetActive(false);
		IceFloor.gameObject.SetActive(false);
		Forrest.gameObject.SetActive(true);
		Clouds.gameObject.SetActive(false);
		// create a for each or int loop and create a object for each enemy??

//		enemy = GetComponent<EnemyController>();
	}
	// Use this for initialization
	void Start () {
		CurseTxt.text = "press 'SPACE' to play";
//		InvokeRepeating("SwitchState",EventTime,EventTime);
		Lightning.SetActive(false);
		timer = 0f;
		CurseRange = 0;

// Music Manager
		start.SetActive (true);
		game.SetActive (false);
		end.SetActive (false);
		disco.SetActive(false);
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (PlayerController.health > 0 && PlayerController.GameStart != false) {
			timer -= 1f * Time.deltaTime;
			Clouds.gameObject.SetActive (true);

			if (timer > 0) {
				CancelInvoke ("SwitchState");

			}

			if (timer < 0) {
				Invoke ("SwitchState", 0);
				timer = EventTime;
			}
// Music Manager
		}
		if (PlayerController.GameStart != false && CurrentState != States.DISCO) {
			start.SetActive (false);
			game.SetActive (true);
			end.SetActive (false);
			disco.SetActive (false);
		} else if (PlayerController.GameStart != false && CurrentState == States.DISCO) {
			start.SetActive (false);
			game.SetActive (false);
			end.SetActive (false);
			disco.SetActive (true);
		}
		if (PlayerController.health <= 0) {
			start.SetActive (false);
			game.SetActive (false);
			end.SetActive (true);
			disco.SetActive (false);
		}

// range manager
		if (UIManager.Score >= 1) {
		CurseRange = 10;
		}
	}

		


	


//increases the timer duration
	public void addOnTimer(float time) {
		timer += time;
	}

	void SwitchState() {
	CurrentState = (States) Random.Range (0,CurseRange);
	AudioSource.PlayClipAtPoint (LightningClip, Camera.main.transform.position);
	BgAnim.Play("BG_LightStrike");
	StartCoroutine(BgColorSwap());
	ChangeState(CurrentState);
	}

	IEnumerator BgColorSwap() {
	Lightning.SetActive(true);
	yield return new WaitForSeconds (0.6f);
	Lightning.SetActive(false);
	}

	void ChangeState (States newState)
	{
		CurrentState = newState;
		switch (newState) {

		case States.NORMAL:
			{
				CurseTxt.text = "NORMAL";
				playerScript.JumpForce = 9f;
				playerScript.MoveLeft (playerScript.ScaleMin = -1f, playerScript.ScalePlus = 1f);
				playerScript.MoveRight (playerScript.ScalePlus = 1f);
				BodyRig.gravityScale = 1f;
				Level.transform.Rotate (0, 0, 0);
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");

				Time.timeScale = 1f;


				break;
			}

		case States.HIGHGRAVITY:
			{
				CurseTxt.text = "HEAVY ARMOR";
				playerScript.JumpForce = 7f;
				playerScript.MoveLeft (playerScript.ScaleMin = -1f, playerScript.ScalePlus = 1f);
				playerScript.MoveRight (playerScript.ScalePlus = 1f);
				BodyRig.gravityScale = 1f;
				Level.transform.Rotate (0, 0, 0);
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");


				break;
			}

		case States.LOWGRAVITY:
			{
				CurseTxt.text = "LIGHTWEIGHT";
				playerScript.JumpForce = 12f;
				playerScript.MoveLeft (playerScript.ScaleMin = -1f, playerScript.ScalePlus = 1f);
				playerScript.MoveRight (playerScript.ScalePlus = 1f);
				BodyRig.gravityScale = 1f;
				Level.transform.Rotate (0, 0, 0);
				playerScript.PlayerDamage = 1f;
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");




				break;
			}
		case States.BIGHEAD:
			{
				CurseTxt.text = "BIG HEAD MODE";
				playerScript.JumpForce = 6f;
				playerScript.MoveLeft (playerScript.ScaleMin = -1.5f, playerScript.ScalePlus = 1.5f);
				playerScript.MoveRight (playerScript.ScalePlus = 1.5f);
				BodyRig.gravityScale = 1f;
				Level.transform.Rotate (0, 0, 0);
				playerScript.PlayerDamage = 2f;
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");


				break;
			}
		case States.TINYMODE:
			{	
				CurseTxt.text = "TINY MODE";
				playerScript.JumpForce = 15f;
				playerScript.MoveLeft (playerScript.ScaleMin = -0.6f, playerScript.ScalePlus = 0.6f);
				playerScript.MoveRight (playerScript.ScalePlus = 0.6f);
				BodyRig.gravityScale = 1f;
				Level.transform.Rotate (0, 0, 0);
				playerScript.PlayerDamage = 0.5f;
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");




				break;
			}

		case States.GRAVITYSWAP:
			{	
				CurseTxt.text = "GRAVITY SWAP";
				playerScript.JumpForce = -9f;
				playerScript.MoveLeft (playerScript.ScaleMin = -1f, playerScript.ScalePlus = 1f);
				playerScript.MoveRight (playerScript.ScalePlus = 1f);
				BodyRig.gravityScale = -1f;
				Level.transform.Rotate (0, 0, 0);
				playerScript.PlayerDamage = 1f;
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");



				break;
			}

		case States.LAVAFLOOR:
			{	
				CurseTxt.text = "FLOOR IS LAVA!";
				LavaFloor.gameObject.SetActive (true);
				IceFloor.gameObject.SetActive (false);
				Forrest.gameObject.SetActive (true);
				PlayerController.MovementSpeed = 3f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (false);
				CamAnim.Play("DefaultCam");
				break;
			}

		case States.ICEFLOOR:
			{
				CurseTxt.text = "ICE DRAG";
				LavaFloor.gameObject.SetActive (false);
				IceFloor.gameObject.SetActive (true);
				Forrest.gameObject.SetActive (false);
				PlayerController.MovementSpeed = 1.5f;
				Time.timeScale = 1f;
				CentreSpawners.gameObject.SetActive (true);
				CamAnim.Play("DefaultCam");
				break;
			
			}

		case States.SLOMOTION:
			{
				CurseTxt.text = "BULLET TIME";
				Time.timeScale = 0.7f;
				CentreSpawners.gameObject.SetActive (true);	
				CamAnim.Play("DefaultCam");
		
				break;

			}

		case States.DISCO:
			{
				CurseTxt.text = "DISCO!";
				BgAnim.Play("Disco");
				CamAnim.Play("DiscoCam");

				start.SetActive (false);
				game.SetActive (false);
				end.SetActive (false);
				disco.SetActive(true);

				break;	
			}

	
		}
	}
}
