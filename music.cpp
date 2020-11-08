#include<bits/stdc++.h>
#include<windows.h>

//since this code needs "windows.h" to use Beep(), you need a Windows computer, not a Lunix, Unix, or Ubuntu one.
using namespace std;
stringstream inp;
#define STOP 180//stop time between two notes (warning:may cause exceptions(some notes get silenced because the beeper is busy) playing the sound if set too small(under 200))
#define ADD 10//the frequency addition to notes
#define TIME D
//the length of notes:A-four,B-two,C-one,D-half,E-one-fourth,F-one-eighth
//down are the frequency of notes.if you aren't sure what it means,please don't change it!!!!!!!!!!
#define L1 262//                                           ^ 
#define L2 294//                                           |
#define L3 330//                                           |
#define L4 349//                                           |
#define L5 392//                                           |
#define L6 440//                                           |
#define L7 493//                                           |
#define N1 532//                                           |
#define N2 588//                                           |
#define N3 660//                                           |
#define N4 698//                                           |
#define N5 784//                                           |
#define N6 880//                                           |
#define N7 988//                                           |
#define H1 1046//                                          |
#define H2 1175//                                          |
#define H3 1319//                                          |
#define H4 1397//                                          |
#define H5 1568//                                          |
#define H6 1760//                                          |
#define H7 1976//                                          |
//down are the time lengths(that is what you used up there | to define the time length)
#define A 1600
#define B 800
#define C 400
#define D 200
#define E 100
#define F 50
#define l1 277
#define l2 311
#define l4 370
#define l5 415
#define l6 466
#define n1 554
#define n2 622
#define n4 740
#define n5 831
#define n6 932
#define h1 1046
#define h2 1245
#define h4 1480
#define h5 1661
#define h6 1865
//music array
vector<float> music;
//integer checker(now deprecated)
bool isint(double d)
{
	if(d==int(d)) return 1;
	return 0;
}
//decoder
void decode()
{
	int n=0;
	//This code is in C++11
	for(float i:music)
	{
		//if(!isint(music[i])) music[i]-=1;
		if(i== -1)
		{
			break;//-1 is the end of a song
		}
		if(i== 0)
		{
			n=-ADD;//0 means stop one time unit
		}
		//down are the music frequency converters
		if(i== 2)
		{
			n=L2;
		}
		if(i== 3)
		{
			n=L3;
		}
		if(i== 4)
		{
			n=L4;
		}
		if(i== 5)
		{
			n=L5;
		}
		if(i== 6)
		{
			n=L6;
		}
		if(i== 7)
		{
			n=L7;
		}
		if(i== 11)
		{
			n=N1;
		}
		if(i== 12)
		{
			n=N2;
		}
		if(i== 13)
		{
			n=N3;
		}
		if(i== 14)
		{
			n=N4;
		}
		if(i== 15)
		{
			n=N5;
		}
		if(i== 16)
		{
			n=N6;
		}
		if(i== 17)
		{
			n=N7;
		}
		if(i== 21)
		{
			n=H1;
		}
		if(i== 22)
		{
			n=H2;
		}
		if(i== 23)
		{
			n=H3;
		}
		if(i== 24)
		{
			n=H4;
		}
		if(i== 25)
		{
			n=H5;
		}
		if(i== 26)
		{
			n=H6;
		}
		if(i== 27)
		{
			n=H7;
		}
		if(i== 1.5)
		{
			n=l1;
		}
		if(i== 2.5)
		{
			n=l2;
		}
		if(i== 4.5)
		{
			n=l4;
		}
		if(i== 5.5)
		{
			n=l5;
		}
		if(i== 6.5)
		{
			n=l6;
		}
		if(i== 11.5)
		{
			n=n1;
		}
		if(i== 12.5)
		{
			n=n2;
		}
		if(i== 14.5)
		{
			n=n4;
		}
		if(i== 15.5)
		{
			n=n5;
		}
		if(i== 16.5)
		{
			n=n6;
		}
		if(i== 21.5)
		{
			n=h1;
		}
		if(i== 22.5)
		{
			n=h2;
		}
		if(i== 24.5)
		{
			n=h4;
		}
		if(i== 25.5)
		{
			n=h5;
		}
		if(i== 26.5)
		{
			n=h6;
		}
		//a message to tell you the frequency of current note
		cout<<"current note frequency:"<<n<<"+"<<ADD<<"="<<n+ADD<<endl;
		//plays the note
		Beep(n+ADD,TIME);
		//stops the set time
		Sleep(STOP-50);
		system("cls");
	}
}
//file note reader
void readfile(ifstream &i)
{
	int cur;
	float val;
	while(i>>val)
	{
		cur++;
		music.push_back(val);
	}
}
string str;
int play(){
	ifstream ifile(str.c_str());
		if(ifile)
		{
			readfile(ifile);
			decode();
			cout << "Play done.\nDo you wany to replay?(y=yes,other=no)";
			char c=getchar();
			system("cls");
			if(c=='y' || c=='Y')play();
			else return 0;
		}
		else
		{
			MessageBox(NULL,"error:file not found.Please check if the file is deleted or moved.","Error",MB_OK+16);
			system("cls"); 
			return 1;
		}
}
int main(int argc,char* argv[])
{
	if(argc==1){
		MessageBox(NULL,"usage:music <filename>.mus\nexample:music c:\\foo\\bar.mus","Info",MB_OK);
		
		return 1;
	}
	inp << argv[1];
	inp >> str;
	play();
}
