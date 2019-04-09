#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

void doSystemCalls(char c) {
	// 'y' 'o' (in sequence) will send a "YO!" to subscribers to YOASL
	static bool yoFlag = false;

	switch (c) {
	case 'O':
		if (yoFlag) {
			yoFlag = false;
			system("curl --data ""api_token=ccb12be3-cd26-49a6-abbd-e53ad3447ee8"" http://api.justyo.co/yoall/");
		}
		break;
	case 'C':
		//open chrome
		Sleep(2000);
		ShellExecute(NULL, "open", "http://www.google.com", NULL, NULL, SW_SHOWNORMAL);
		yoFlag = true;
		break;
	case 'F':
		//search
		/*if (e.KeyCode == Keys.Enter)
		if (googleSearch.Checked ==
		true)*/
		//getCurrentBrowser().Navigate( "http://" +"google.com/search?q=" + searchTextBox.Text);
		//else
		Sleep(2000);
		ShellExecute(NULL, NULL, "http://", "--new-window", NULL, SW_SHOWNORMAL);

		yoFlag = true;
		break;
	case 'H':
		//history
		Sleep(2000);
		ShellExecute(NULL, NULL,"http://chrome://history", "--new-window", NULL, SW_SHOWNORMAL);
		yoFlag = true;
		break;
	case 'N':
		//newtab
		Sleep(3000);
		ShellExecute(NULL, "open", "http://www.facebook.com", "--new-window", NULL, SW_SHOWNORMAL);
		yoFlag = true;
		break;
	case 'V':
		//close chrome
		ShellExecute(NULL, "kill", "http://www.google.com", "--window.close", NULL, SW_SHOWNORMAL);
		yoFlag = true;
		break;
	case 'I':
			//newtab
			//ShellExecute(NULL, "open", "chrome://downloads", "--new-window", NULL, SW_SHOWNORMAL);
			ShellExecute(NULL, "close", NULL, NULL, NULL, SW_HIDE);
			yoFlag = true;
			break;
	case 'Y':
			yoFlag = true;
			break;
	default:
		yoFlag = false;
	}
}

