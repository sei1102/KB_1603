using UnityEngine;
using System.Collections;

public class SNSShareScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void TwitterShare(){
		Application.OpenURL("http://twitter.com/intent/tweet?text=" + WWW.EscapeURL("『Greeting！』友達から特別なメッセージが届いたよ！\nhttp://static.greeting.com/line/?pass_code=Mzc5Njc4NTg4\n↑このURLをタップしてGreetを受け取ろう！\n\nこのGreetが登録されているカードはこれだよ！\n\nhttp://static.greeeting.com/i/?i=379678588&k=793&p=27&f=line\n↑Greetingをまだ始めていなかったらこのURLからアプリをインストールしてね！ #Greet"));
	}

	public void LINEShare(){
		Application.OpenURL("http://line.naver.jp/R/msg/text/?" + WWW.EscapeURL("『Greeting！』友達から特別なメッセージが届いたよ！\nhttp://static.greeting/line/?pass_code=Mzc5Njc4NTg4\n↑このURLをタップしてGreetを受け取ろう！\n\nこのGreetが登録されているカードはこれだよ！\n\nhttp://static.greeting.com/i/?i=379678588&k=793&p=27&f=line\n↑Greetingをまだ始めていなかったらこのURLからアプリをインストールしてね！",System.Text.Encoding.UTF8));
	}
}
