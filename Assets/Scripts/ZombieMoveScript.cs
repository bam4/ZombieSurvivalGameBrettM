using UnityEngine;
using System.Collections;

public class ZombieMoveScript : MonoBehaviour {


	// public Transform player; //Create a varible to house the player's location.
	public float zombieSpeed = 5; // This is the speed that the zombie should approach the player from.
	public GameObject player;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
	}
	
	// Update is called once per frame
	void Update () {
		// GameObject player = GameObject.FindGameObjectWithTag ("player");

		Vector3 directionToPlayer = player.transform.position - transform.position; // The direction of the play is determined by the difference between the player's position and the zombie's position;
		transform.up = directionToPlayer;

		if (Vector3.Distance (transform.position, player.transform.position) > 0.25f) {
			transform.position += Vector3.Normalize (player.transform.position - transform.position) * Time.deltaTime;
		}





		// transform.position = directionToPlayer  * zombieSpeed * Time.deltaTime;
	}

//	void OnDrawGizmos () {
//		Gizmos.DrawLine(transform.position, player.transform.position );
//	}

}
