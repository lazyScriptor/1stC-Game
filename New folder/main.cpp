#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(){
	char audiofile_char[]={"C:/Users/Theekshana/Desktop/New folder/[YT2mp3.info] - UwU - SOUND EFFECT (320kbps).wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str=audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();

}