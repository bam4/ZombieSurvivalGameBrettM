using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {


	public float moveSpeed = 5f; // This number multiples the vector2, which contains the velocity value. 
	Vector2 moveVector = new Vector2 (0f, 0f); // We are setting the new Vector moveVector to these values. 
	Rigidbody2D myRigidbody; // We are creating a shell that will hold the Rigidbody.
	public Transform player; // Create a variable that will house the player's position.
	public GameObject bulletObject;

	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> (); // We are grabbing the Rigidbody component.
	}



	// Update is called once per frame
	void Update () {

		Vector3 cursorWorldPos = Camera.main.ScreenToWorldPoint (Input.mousePosition); // Turn the player's position on the screen to a position in the world space, then assign this value to a new vector3.
		cursorWorldPos.z = 0f; //Set the Z value of this Vector3 to 0 so that we do not follow the mouse when it goes deeper into Z space and potentially out of the view of the camera.
		Vector3 lineFromPlayerToCursor = cursorWorldPos - player.position; // Create a line from the mouse's position to the player.

		player.up = lineFromPlayerToCursor; // Set the player's Up value so that it will follow that line.

		float horizontal = Input.GetAxis ("Horizontal"); // The level of horizontal movement will be determined by the amount of input on the horizontal aixs
		float vertical = Input.GetAxis("Vertical"); // The level of vertical movement will be determined by the amount of input on the vertical axis.
		moveVector = new Vector2(horizontal, vertical); // Our vector set takes in the horizontal and vertical values.
		if (moveVector.magnitude > 1f) { // If those values are greater than one, normalize them to one.
			moveVector = moveVector.normalized; // Better way of normalization.
		}

		if (Input.GetMouseButtonDown (0)) {
			Instantiate (bulletObject);
		}



	}

	void FixedUpdate () {
		myRigidbody.velocity = moveVector * moveSpeed; // Move the player controller at the speed established above times the amount of input they put into the machine.
	}
}
