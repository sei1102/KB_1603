using UnityEngine;
using System.Collections;

public class WebBrowserScript : MonoBehaviour {

	public void WebBrowserOpen(){
		Application.OpenURL("https://developer.vuforia.com/targetmanager/project/deviceTargetListing");
	}
}
