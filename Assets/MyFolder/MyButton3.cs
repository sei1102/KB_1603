using UnityEngine;
using System.Collections;

public class MyButton3 : MonoBehaviour {


	//public static int c;

	public void OnClick() {

		//c = 3;


		//Debug.Log("Button2 click!");
		// 非表示にする
		//gameObject.SetActive(false);

		// 自分自身を無効化する
		MyCanvas.SetInteractive("Button3", false);

		//Cubeを表示
		MyCanvas.SetActive("robo", true);
		//taichi,unitychanの非表示
		MyCanvas.SetActive("taichi", false);
		MyCanvas.SetActive("unitychan", false);


		// Buttonを表示する
		//MyCanvas.SetActive("Button", true);

		//Buttonを有効化
		MyCanvas.SetInteractive("Button", true);
		MyCanvas.SetInteractive("Button2", true);

	}
}

