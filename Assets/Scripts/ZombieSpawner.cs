using UnityEngine;
using System.Collections;

public class ZombieSpawner : MonoBehaviour {


	public Transform zombieSpawnerPos;
	// GameObject zombie;
	public GameObject zombie;

	void Start () {
		InvokeRepeating ("zombieSpawnFunction", 3f, 3f);
	}

	public void zombieSpawnFunction () {
		//zombie = GameObject.FindWithTag("Zombie");
		Instantiate(zombie, zombieSpawnerPos.position, Quaternion.Euler(0f, 0f, 0f));
	}



	// Use this for initialization

	
	// Update is called once per frame
	void Update () {
	
	}


}
