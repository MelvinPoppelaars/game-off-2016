using UnityEngine;
using System.Collections;

public class Logo : MonoBehaviour {
private Animator anim;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator>();
	}

	void OnLevelWasLoaded() {
		anim = GetComponent<Animator>();
		anim.Play("Logo");

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (PlayerController.GameStart != false) {
			anim.Play ("LogoOut");
		}

	}
}
