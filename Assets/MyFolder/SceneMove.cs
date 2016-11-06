using UnityEngine;
using System.Collections;

public class SceneMove : MonoBehaviour {

	public void Start(){
	}

	public void Updata(){
	}

	public void RecoSceneLoad (){
		Application.LoadLevel ("RecoScene");
	}
	public void FolderSceneLoad (){
		Application.LoadLevel ("FolderScene");
	}

	public void EditSceneLoad (){
		Application.LoadLevel ("EditScene");
	}

	public void RegisterSceneLoad (){
		Application.LoadLevel ("RegisterScene");
	}
}
