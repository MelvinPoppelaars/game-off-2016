using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
public static float MovementSpeed = 3f;
public float JumpForce;
private float JumpOffForce;
public float PlayerDamage = 2f;
private float AttackDamage = 1f;
private float yOffset = 1f;
public static float health = 1f;
private Collider2D Col;

[HideInInspector]public float ScaleMin;
[HideInInspector]public float ScalePlus;
private float xMin;
private float xMax;
private float yMax;
private float top = 0;
private float left;
private float right;
private float distanceToCamera;
public AudioClip EnemyHit;
public AudioClip JumpClip;
public GameObject HitFX;
bool MovingRight;
private Rigidbody2D rig;
private Animator anim;
private AudioSource Audio;
private int RandomPitch;


public static bool GameStart = false;


	// Use this for initialization
	void Start ()
	{
		Audio = GetComponent<AudioSource>();
		Audio.pitch = 2f;
		health = 1;
		GameStart = false;
	//reset scale of playerBody on start
		Col = GetComponent<BoxCollider2D>();
		Col.enabled = true;
		ScaleMin = -1f;
		ScalePlus = 1f;
		float probability = 0.5f;
		
		if (Random.value < probability) {
			MovingRight = true;
		} else {
			MovingRight = false;
		}
	
		rig = GetComponent<Rigidbody2D>();
		anim = GetComponent<Animator>();

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (GameStart != false) {
			if (MovingRight == true) {
				MoveRight (ScalePlus);
			} else if (MovingRight == false) {
				MoveLeft (ScaleMin, ScalePlus);
			}
		}

		if (health <= 0) {
			die ();
		}
	// assign random pitch to the audio source
		RandomPitch = Random.Range (1,2);
		Audio.pitch = RandomPitch;


// get the edges of the screen using the camera position.z - the player's position
		distanceToCamera = (transform.position - Camera.main.transform.position).z;
		Vector3 LeftEdge = Camera.main.ViewportToWorldPoint (new Vector3 (0, 0, distanceToCamera));
		Vector3 RightEdge = Camera.main.ViewportToWorldPoint (new Vector3 (1, 0, distanceToCamera));
		Vector3 Top = Camera.main.ViewportToWorldPoint (new Vector3 (0, 1, distanceToCamera));
		// get floats for the edges
		xMin = LeftEdge.x;
		xMax = RightEdge.x;	
		yMax = Top.y;

// get offset for the edges
		left = transform.position.x - 0.5f;
		right = transform.position.x + 0.5f;
		//top = transform.position.y + 0.5f;

// switch player direction if edge is reached
		if (left < xMin) {
			MovingRight = true;
		
		} else if (right > xMax) {
			MovingRight = false; 

		} 
//prevent rigidbody velocity to go beyond the top of the screen
		if (top > yMax) {
			ResetVelocity ();
		}
//prevent player to go outside screen on the Y position
		Vector3 pos = Camera.main.WorldToViewportPoint (transform.position);
		pos.y = Mathf.Clamp (pos.y, -1f, 0.96f);
		transform.position = Camera.main.ViewportToWorldPoint (pos);

		if (Input.GetKeyDown (KeyCode.Space) && health > 0) {
			Jump (JumpForce);
			anim.Play ("Knight_Jump");
			GameStart = true;

		} else {
			return;}

		}		
	public void MoveLeft(float Min, float Plus) {
		Min = ScaleMin;
		Plus = ScalePlus;
		transform.localScale = new Vector3 (ScaleMin, ScalePlus, ScalePlus);
		transform.position +=  Vector3.left * MovementSpeed * Time.deltaTime;
	}

	public void MoveRight(float Plus) {
		Plus = ScalePlus;
		transform.localScale = new Vector3 (ScalePlus, ScalePlus, ScalePlus);
		transform.position +=  Vector3.right * MovementSpeed * Time.deltaTime;
	}


	public void Jump (float jumpForce)
	{
  		rig.velocity = new Vector2(rig.velocity.x,jumpForce);
		Audio.PlayOneShot(JumpClip);
	}

	void die() {
		Col.enabled = false;
		anim.Play("Knight_Die");
		Destroy(transform.parent.gameObject, 2f);

		

	}
 
	void Footsteps (AudioClip Clip)
	{	
		Audio.clip = Clip;
		Audio.PlayOneShot(Clip);
	}

//if this object has collission with enemy, deal damage to enemy

	void OnCollisionEnter2D (Collision2D col)
	{
		
		GameObject CurrentTarget = col.gameObject;
		EnemyController enemy = CurrentTarget.GetComponent<EnemyController> ();
		
		if (enemy) {
// if enemy position.y is lower than player, deal damage
			if (enemy.transform.position.y <= gameObject.transform.position.y) {
				enemy.DamageEnemy (AttackDamage);
				GameObject Clone = Instantiate (HitFX, transform.position, HitFX.transform.rotation) as GameObject;
				Audio.PlayOneShot (EnemyHit);
				Destroy(Clone,2F);
				JumpOffForce = JumpForce / 2;
				Jump (JumpOffForce);
				anim.Play("Knight_Jumping");
			} else if (enemy.transform.position.y >= gameObject.transform.position.y - yOffset) {
				Audio.PlayOneShot (EnemyHit);
				SwitchDirection ();
			}
			

		}

		if (CurrentTarget.tag == ("Floor") && GameStart != false) {
			anim.Play ("Knight_Running");
		}
	

	}
	
	public void DamagePlayer (float damage) {
		health -= damage;
	}

	void CurrentHealth(float currentHealth) {
		currentHealth = health;
	}
	
	void ResetVelocity() {
	rig.velocity = new Vector2(rig.velocity.x,0);
	}

// can be used as a game mod that you switch direction when you jump on an enemy
// Switch direction when you hit an platform / non lethal object
	public void SwitchDirection ()
	{
		if (MovingRight == true) {
			MovingRight = false;
		} else if (MovingRight == false) {
			MovingRight = true;
		}
	}

}

