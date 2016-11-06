using UnityEngine;
using System.Collections;

public class Chara : MonoBehaviour {



	public void OnClick() {


		// 自分自身を無効化する
		MyCanvas.SetInteractive("ButtonCharacter", false);

		MyCanvas.SetActive("Panel", true);






		// Buttonを表示する
		//MyCanvas.SetActive("Button", true);

		//Buttonを有効化
		MyCanvas.SetInteractive("Button", true);
		MyCanvas.SetInteractive("Button3", true);

	}
}

