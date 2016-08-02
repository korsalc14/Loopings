// Loopings.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{

	int count = 0;
	bool isPotentualTrue = true;

	// [While...]
	while (isPotentualTrue)
	{
		count = count + 1;
		cout << "count = " << count << endl;

		if (count == 100)
		{
			isPotentualTrue = false;
		}
	}
	system("pause");
	/////////////////////////////////////////////////////
		// [Do... While] : mind. ein Mal ausgeführt
	do
	{
		cout << (count = count--) << endl;
	} while (count != 0);

	/////////////////////////////////////////////////////
	// for(...;...;...)
	for (int count = 0; count < 5; count++)
	{

	}

	// andere Möglichkeiten
	int u{ 1 };
	for (char c = 'a';c<='z';c++,u++)
	{
		cout << "[c.u]: " << c << "." << u << " | " << endl;
	}

	system("pause");
	return 0;
}
