using UnityEngine;
using System.Collections;


public class Mybutton : MonoBehaviour {



	/// ボタンをクリックした時の処理
	public void OnClick() {
		//Debug.Log("Button click!");

		//c = 1;

		// 非表示にする
		//gameObject.SetActive(false);

		// 自分自身を無効化する
		MyCanvas.SetInteractive("Button", false);

		//Cubeを非表示
		MyCanvas.SetActive("unitychan", false);
		MyCanvas.SetActive("robo", false);

		//taichiの表示
		MyCanvas.SetActive("taichi", true);

	



		// Button2を表示する
		//MyCanvas.SetActive("Button2", true);

		//Button2の有効化
		MyCanvas.SetInteractive("Button2", true);
		MyCanvas.SetInteractive("Button3", true);

	}
		




	// Use this for initialization
	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
	
	}
}
