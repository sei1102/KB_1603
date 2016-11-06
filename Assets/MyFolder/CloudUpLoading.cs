using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

using System;
using System.Collections;
using System.Collections.Generic;
//using UnityEditor;

using System.IO;
using System.Net;
using System.Linq;
using System.Text;

using Pathfinding.Serialization.JsonFx;

using System.Security.Cryptography;

public class PostNewTrackableRequest
{
	public string name;
	public float width;
	public string image;
	public string application_metadata;
}

public static class StringUtils
{
	public const string PASSWORD_CHARS = 
		"0123456789abcdefghijklmnopqrstuvwxyz";

	public static string GeneratePassword( int length )
	{
		var sb  = new System.Text.StringBuilder( length );
		var r   = new System.Random();

		for ( int i = 0; i < 1; i++ )
		{
			int     pos = r.Next( PASSWORD_CHARS.Length );
			char    c   = PASSWORD_CHARS[ pos ];
			sb.Append( c );
		}

		return sb.ToString();
	}
}

public class CloudUpLoading : MonoBehaviour 
{
	private string access_key = "109824367b4f8ea928a10d5bfb07a92dae3eb997";
	private string secret_key = "07a30e4e4cebfe55b430f7db19cd144178cb1197";
	private string url = @"https://vws.vuforia.com";

	public InputField inputField;
	public Text text;
	public string number;
	public string targetName; // must change when upload another Image Target, avoid same as exist Image on cloud
//	string pass = System.Web.Security.Membership.GeneratePassword(8, 0);

	public Texture2D texture = null;
	public string path = "";

	public void SaveText () {
		targetName = inputField.text;
		text.text = targetName;
		inputField.text = "";
	}

	public string GetScreenShotPath(){
		switch (Application.platform) {
		case RuntimePlatform.IPhonePlayer:
			path = Application.persistentDataPath + "/screenshot.png";
			break;
		case RuntimePlatform.Android:
			path = Application.persistentDataPath + "/screenshot.png";
			break;
		default:
			path = "screenshot.png";
			break;
		}
		return path;
	}

	public const string PASSWORD_CHARS = 
		"0123456789abcdefghijklmnopqrstuvwxyz";

	public static string GeneratePassword( int length )
	{
		var sb  = new System.Text.StringBuilder( length );
		var r   = new System.Random();

		for ( int i = 0; i < 1; i++ )
		{
			int     pos = r.Next( PASSWORD_CHARS.Length );
			char    c   = PASSWORD_CHARS[ pos ];
			sb.Append( c );
		}

		return sb.ToString();
	}
		
	void Update(){
/*		if(Input.GetKey(KeyCode.S)){
			Debug.Log( StringUtils.GeneratePassword( 4 ) );
		}
		if (Input.GetKey (KeyCode.S)) {
			VuforiaRegister ();
		}*/
	}

	public void VuforiaRegister(){
		Application.CaptureScreenshot("screenshot.png");
		GetScreenShotPath ();
		ShowCapture();
		StartCoroutine (PostNewTarget());
	}

	// とったスクリーンショットをTexture2Dに格納するスクリプト
	public void ShowCapture(){
		byte[] image = File.ReadAllBytes(path);

		texture = new Texture2D(0, 0);
		texture.LoadImage(image);
	}
		
	IEnumerator PostNewTarget(){
		string requestPath = "/targets";
		string serviceURI = url + requestPath;
		string httpAction = "POST";
		string contentType = "application/json";
		string date = string.Format("{0:r}", DateTime.Now.ToUniversalTime()); 

		Debug.Log(date);

		// if your texture2d has RGb24 type, don't need to redraw new texture2d
		Texture2D tex = new Texture2D(texture.width,texture.height,TextureFormat.RGB24,false);
		tex.SetPixels(texture.GetPixels());
		tex.Apply();
		byte[] image = tex.EncodeToPNG();

		string metadataStr = "Vuforia metadata";//May use for key,name...in game
		byte[] metadata = System.Text.ASCIIEncoding.ASCII.GetBytes(metadataStr);
		PostNewTrackableRequest model = new PostNewTrackableRequest();
		model.name = targetName;
		model.width = 64.0f; // don't need same as width of texture
		model.image = System.Convert.ToBase64String(image);

		model.application_metadata = System.Convert.ToBase64String(metadata);
		string requestBody = JsonWriter.Serialize(model);

		WWWForm form = new WWWForm ();

		var headers = form.headers;
		byte[] rawData = form.data;
		headers[ "Host"]=url;
		headers["Date"] = date;
		headers["Content-Type"]= contentType;

		HttpWebRequest httpWReq = (HttpWebRequest)HttpWebRequest.Create(serviceURI);

		MD5 md5 = MD5.Create();
		var contentMD5bytes = md5.ComputeHash(System.Text.Encoding.ASCII.GetBytes(requestBody));
		System.Text.StringBuilder sb = new System.Text.StringBuilder();
		for (int i = 0; i < contentMD5bytes.Length; i++){
			sb.Append(contentMD5bytes[i].ToString("x2"));
		}

		string contentMD5 = sb.ToString();

		string stringToSign = string.Format("{0}\n{1}\n{2}\n{3}\n{4}", httpAction, contentMD5, contentType, date, requestPath);

		HMACSHA1 sha1 = new HMACSHA1(System.Text.Encoding.ASCII.GetBytes(secret_key));
		byte[] sha1Bytes = System.Text.Encoding.ASCII.GetBytes(stringToSign);
		MemoryStream stream = new MemoryStream(sha1Bytes);
		byte[] sha1Hash = sha1.ComputeHash(stream);
		string signature = System.Convert.ToBase64String(sha1Hash);

		headers["Authorization"]=string.Format("VWS {0}:{1}", access_key, signature);

		Debug.Log("<color=green>Signature: "+signature+"</color>");

		WWW request =new WWW(serviceURI,System.Text.Encoding.UTF8.GetBytes(JsonWriter.Serialize(model)), headers);
		yield return request;
		Debug.Log (request.text);

		if (request.error != null){
			Debug.Log("request error: " + request.error);
		}
		else{
			Debug.Log("request success");
			Debug.Log("returned data" + request.data);
		}
	}
}

