using UnityEngine;
using System.Collections;

public class message : MonoBehaviour {



	public void OnClick() {


		// 自分自身を無効化する
		MyCanvas.SetInteractive("WordButton", false);

		MyCanvas.SetActive("InputField", true);
		MyCanvas.SetActive("send", true);
		MyCanvas.SetActive("Image", true);
		//MyCanvas.SetActive("ButtonCharactor", true);


		MyCanvas.SetActive("Panel", false);




		//Buttonを有効化
		MyCanvas.SetActive("ButtonCharacter", true);




		// Buttonを表示する
		//MyCanvas.SetActive("Button", true);




	}
}

