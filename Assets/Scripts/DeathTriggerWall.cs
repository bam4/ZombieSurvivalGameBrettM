using UnityEngine;
using System.Collections;

public class DeathTriggerWall : MonoBehaviour {

	public int damage = 100;

	// a function that is automatically called when
	// AS LONG AS a thing stays in the trigger, each frame

	void OnTriggerStay2D (Collider2D activator) {
		// Does the activating thing have a Killble Script?
		if (activator.tag != "Player") { 

			if (activator.GetComponent<Killable> () != null) {
				activator.GetComponent<Killable> ().Hurt (damage);
			}
		}
	}





	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
