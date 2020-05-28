#include<iostream>
#include<Windows.h>
#include"MMSystem.h"
#include<conio.h>
using namespace std;
int main()
{	
	char c;
	cout<<"*******VIRTUAL DRUM KIT*******"<<endl;
	cout<<"Press the following keys to produce sounds of a drum kit"<<endl;
	cout<<"a.Closed hihats"<<endl;
	cout<<"s.Closed hihats with kick"<<endl;
	cout<<"d.Open hihats"<<endl;
	cout<<"b.Kick"<<endl;
	cout<<"x.Snare"<<endl;
	cout<<"p.Crash1"<<endl;
	cout<<"o.crash2"<<endl;
	cout<<"y.Drumroll"<<endl;
	cout<<"e,r,t.Toms"<<endl;
	cout<<"z.EXIT"<<endl;
	while(c!='z')
	{
		c=getch();
		if(c=='b')
		{
			PlaySound(TEXT("B.wav"), NULL, SND_SYNC);
			
		}
		if(c=='x')
		{
			PlaySound(TEXT("SNARE.wav"), NULL, SND_SYNC);
			
		}
		if(c=='a')
		{
				PlaySound(TEXT("HIHAT(CSD).wav"), NULL, SND_SYNC);
		}
		if(c=='s')
		{
				PlaySound(TEXT("HIHATnB.wav"), NULL, SND_SYNC);
		}
		if(c=='d')
		{
				PlaySound(TEXT("HIHATS(OPN).wav"), NULL, SND_SYNC);
		}
		
		if(c=='p')
		{
				PlaySound(TEXT("CRASH1.wav"), NULL, SND_SYNC);
		}
		if(c=='o')
		{
				PlaySound(TEXT("CRASH2.wav"), NULL, SND_SYNC);
		}
		if(c=='e')
		{
				PlaySound(TEXT("TOM1.wav"), NULL, SND_SYNC);
		}
		if(c=='r')
		{
				PlaySound(TEXT("TOM2.wav"), NULL, SND_SYNC);
		}
		if(c=='t')
		{
				PlaySound(TEXT("TOM3.wav"), NULL, SND_SYNC);
		}
		if(c=='y')
		{
				PlaySound(TEXT("TOM1.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("TOM2.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("TOM3.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("SNARE.wav"), NULL, SND_SYNC);
				PlaySound(TEXT("CRASH2.wav"), NULL, SND_SYNC);
				
		}
	}
	
}

