// ConsoleApplication10.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const long int Iteration = 100000;
	int i = 0;
	int scissors = 0;
	int rock = 0;
	int paper = 0;
	srand(time(0));

	for (i = 0; i <= Iteration; i++)
	{
		int num = (rand() % 3) + 1;
	    
		switch (num)
		{
		case 1:
			scissors++;
			break;
		case 2:
			rock++;
			break;
		case 3:
			paper++;
			break;
		}
	}
	
	cout << "The number of scissors: " << scissors << endl;
	cout << "The number of rock    : " << rock << endl;
	cout << "The number of paper   : " << paper << endl;



	cin.ignore();
	cin.get();
	return 0;
}

