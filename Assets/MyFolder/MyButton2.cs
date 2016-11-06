using UnityEngine;
using System.Collections;

public class MyButton2: MonoBehaviour {



	public void OnClick() {

		//c = 2;

		//Debug.Log("Button2 click!");
		// 非表示にする
		//gameObject.SetActive(false);

		// 自分自身を無効化する
		MyCanvas.SetInteractive("Button2", false);

		//unitychanを表示
		MyCanvas.SetActive("unitychan", true);
		//taichiの非表示
		MyCanvas.SetActive("taichi", false);
		MyCanvas.SetActive("robo", false);


		


		// Buttonを表示する
		//MyCanvas.SetActive("Button", true);

		//Buttonを有効化
		MyCanvas.SetInteractive("Button", true);
		MyCanvas.SetInteractive("Button3", true);

	}
}

