using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MySave : MonoBehaviour {

	string str;
	public InputField inputField;
	public Text text;

	//public static int c=2;

	public void SaveText () {
		str = inputField.text;
		text.text = str;
		inputField.text = "";
		MyCanvas.SetActive("word", true);
	}
}