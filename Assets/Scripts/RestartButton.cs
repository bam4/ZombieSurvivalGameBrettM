using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class RestartButton : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.R)) {
			int currentSceneNumber = SceneManager.GetActiveScene ().buildIndex;
			SceneManager.LoadScene (currentSceneNumber);
		}
	}
}
