using UnityEngine;
using System.Collections;

public class Killable : MonoBehaviour {

	public int maxHealth = 100; // Set the starting health for all characters.
	public int currentHealth; // Set the value that will hold health.




	// Use this for initialization
	void Start () {
		currentHealth = maxHealth; // When this script first runs, health is set to the maximum amount.
	}

	public void Hurt (int damage) {
		currentHealth -= damage; // Current health is subtracted by the damage level given.
		currentHealth = Mathf.Clamp (currentHealth, 0, maxHealth); // Keeps current health from giving above or below

		// Destroy myself if my health is less than or equal to zero.
		if (currentHealth <= 0) {
			Destroy (gameObject); // Destroys this GameObject.
		}
	}

	// Update is called once per frame
	void Update () {
		
	
	}
}
