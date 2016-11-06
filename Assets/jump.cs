using UnityEngine;
using System.Collections;

public class jump : MonoBehaviour {
	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			GetComponent<Animator> ().SetTrigger ("jumpTrigger");
		}
	}
}