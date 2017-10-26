// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>

int ptime;
int fee;
int charge(int);
using namespace std;

int main()
{

	do
	{
		cout << "Please input the parking time between 1 to 2000: ";
		cin >> ptime;
	} while (ptime > 2000 || ptime < 1);


	cout << "The parking fee is: " << charge(ptime) << endl;

	return 0;
}

int charge(int ptime) {
	if (ptime <= 30) {
		fee = 0;
	}
	if (ptime > 30 && ptime <= 1440) {
		fee = (ptime / 30) * 20;
		if (ptime % 30 != 0) {
			fee = fee + 20;   // beware of it
		}
		if (fee > 240) {
			fee = 240;
		}
	}
	else if (ptime > 1440) {
		ptime = ptime - 1440;
		int dayfee;              // beware of additional day fee
		dayfee = 240;
		fee = (ptime / 30) * 20;
		if (ptime % 30 != 0) {
			fee = fee + 20;
		}
		fee = fee + dayfee;
	}

	return fee;
}

