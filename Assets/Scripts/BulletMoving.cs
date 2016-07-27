using UnityEngine;
using System.Collections;

public class BulletMoving : MonoBehaviour {

	GameObject player; // Intializes a Game Object that the player will be attached to.
	Vector2 moveBullet = new Vector2 (0f, 0f); // Determines the speed of the bullet.
	Rigidbody2D myRigidbody; // Opens a Rigidbody for the bullet
	public int bulletSpeedX = 50;
	public int bulletSpeedY = 50;


	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> ();
		player = GameObject.FindWithTag("Player");

		//Quaternion playerRotation = player.transform.rotation;
		Vector3 playerPosition = player.transform.position;
		transform.position = playerPosition;
		//transform.rotation = playerRotation;
		Vector3 playerDirection = player.transform.up;
		// Vector2 playerDirectionxy = ((player.transform.position.up.x) , (player.transform.position.up.y));
		moveBullet = playerDirection;






	}

	// Update is called once per frame
	void Update () {
		

	}

	void FixedUpdate () {
		myRigidbody.velocity = moveBullet * bulletSpeedX;

		 // Move the player controller at the speed established above times the amount of input they put into the machine.
	}

}
