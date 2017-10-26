// ConsoleApplication39.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>   // beware of 
#include <iomanip>

using namespace std;
int tally[6];
int dice;
int main() {
	srand(time(0));   // srand(time(0))  need to put outside of loop!
	int r;
	for (r = 1; r <= 10000; r++) {
		
		dice = (rand() % 6) + 1;  // beware of 

		switch (dice) {        // veware of the bracelet of switch
		case 1:
			tally[0] = tally[0] + 1;
			break;
		case 2:
			tally[1] = tally[1] + 1;
			break;
		case 3:
			tally[2] = tally[2] + 1;
			break;
		case 4:
			tally[3] = tally[3] + 1;
			break;
		case 5:
			tally[4] = tally[4] + 1;
			break;
		case 6:
			tally[5] = tally[5] + 1;
			break;

		}
	}
	cout << "Dice number: ";
	int i;
	for (i = 1; i <= 6; i++) {
		cout << setw(8) << i;
	}
	cout << endl;
	cout << "Dice counts: ";
	int j;

	for (j = 0; j < 6; j++) {
		cout << setw(8) << tally[j];
	}
	cout << endl;

	return 0;
}