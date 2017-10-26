///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-18
//  FILENAME   : HW06AB01B02024.CPP 
//  DESCRIPTION   : Bridge card game
//===============================================================================================================
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib> // headers
using namespace std;
//variables declaration
int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0, currentSize;
int play1[3], play2[3], play3[3], play4[3], card[52], val = 0, deal, count1 = 0, count2 = 0, count3 = 0;

int main()
{
	string outfilename = "CardGame.txt";  // declare output file address in my desktop
	ofstream outFile;  // declare output file stream object
	outFile.open(outfilename.c_str());    // open output file stream
	if (outFile.fail()) {
		cout << "The file is not opened successfully";
		exit(1);          //if it doesn't open, exit the program
	}


	// Create an array have four sets of 1-13
	for (int i = 0; i < 52; i++) {
		card[i] = (val % 13) + 1;
		val++;
	}

	int counts = 51;
	srand(time(0));  // initialize the random number 

	for (int j = 0; j < 3; j++) {   // deal for 3 rounds

		int temp = rand() % (counts + 1);
		if (temp >(counts + 1) / 2) {
			for (int s = temp; s > 0; s--) {
				swap(card[s], card[counts - s]);   // randomly swap the cards
			}
		}
		else {
			for (int t = temp; t < counts; t++) {
				swap(card[t], card[counts - t]);  // randomly swap the cards
			}
		}


		play1[j] = card[0];
		play2[j] = card[1];
		play3[j] = card[2];
		play4[j] = card[3];       // the first 4 cards would be dealt to four players respectively

		for (int k = 4; k < counts + 1; k++) {
			card[k - 4] = card[k];
		}                       // replace the first four cards by the following cards
		counts = counts - 4;

	}

	cout << "       1st" << "    2nd" << "    3rd" << endl;
	outFile << "       1st" << "    2nd" << "    3rd" << endl;
	cout << "Player1: ";
	outFile << "Player1: ";
	for (int a = 0; a < 3; a++) {
		if (play1[a] == 1 || play1[a] == 11 || play1[a] == 12 || play1[a] == 13) {
			switch (play1[a]) {              // change the demonstration of A, J, Q, K card
			case 1:
				cout << setw(4) << 'A';
				outFile << setw(4) << 'A';
				answer1 += 4;
				break;
			case 11:
				cout << setw(4) << 'J';
				outFile << setw(4) << 'J';
				answer1 += 1;
				break;
			case 12:
				cout << setw(4) << 'Q';
				outFile << setw(4) << 'Q';
				answer1 += 2;
				break;
			case 13:
				cout << setw(4) << 'K';
				outFile << setw(4) << 'K';
				answer1 += 3;
				break;
			}
		}
		else {
			cout << setw(4) << play1[a];
			outFile << setw(4) << play1[a];
		}

	}

	cout << endl;
	outFile << endl;
	cout << "Player2: ";
	outFile << "Player2: ";
	for (int b = 0; b < 3; b++) {
		if (play2[b] == 1 || play2[b] == 11 || play2[b] == 12 || play2[b] == 13) {
			switch (play2[b]) {     // change the demonstration of A, J, Q, K card
			case 1:
				cout << setw(4) << 'A';
				outFile << setw(4) << 'A';
				answer2 += 4;
				break;
			case 11:
				cout << setw(4) << 'J';
				outFile << setw(4) << 'J';
				answer2 += 1;
				break;
			case 12:
				cout << setw(4) << 'Q';
				outFile << setw(4) << 'Q';
				answer2 += 2;
				break;
			case 13:
				cout << setw(4) << 'K';
				outFile << setw(4) << 'K';
				answer2 += 3;
				break;
			}
		}
		else {
			cout << setw(4) << play2[b];
			outFile << setw(4) << play2[b];
		}
	}
	cout << endl;
	outFile << endl;
	cout << "Player3: ";
	outFile << "Player3: ";
	for (int c = 0; c < 3; c++) {
		if (play3[c] == 1 || play3[c] == 11 || play3[c] == 12 || play3[c] == 13) {
			switch (play3[c]) {             // change the demonstration of A, J, Q, K card
			case 1:
				cout << setw(4) << 'A';
				outFile << setw(4) << 'A';
				answer3 += 4;
				break;
			case 11:
				cout << setw(4) << 'J';
				outFile << setw(4) << 'J';
				answer3 += 1;
				break;
			case 12:
				cout << setw(4) << 'Q';
				outFile << setw(4) << 'Q';
				answer3 += 2;
				break;
			case 13:
				cout << setw(4) << 'K';
				outFile << setw(4) << 'K';
				answer3 += 3;
				break;
			}
		}
		else {
			cout << setw(4) << play3[c];
			outFile << setw(4) << play3[c];
		}
	}

	cout << endl;
	outFile << endl;
	cout << "Player4: ";
	outFile << "Player4: ";
	for (int d = 0; d < 3; d++) {
		if (play4[d] == 1 || play4[d] == 11 || play4[d] == 12 || play4[d] == 13) {
			switch (play4[d]) {              // change the demonstration of A, J, Q, K card
			case 1:
				cout << setw(4) << 'A';
				outFile << setw(4) << 'A';
				answer4 += 4;
				break;
			case 11:
				cout << setw(4) << 'J';
				outFile << setw(4) << 'J';
				answer4 += 1;
				break;
			case 12:
				cout << setw(4) << 'Q';
				outFile << setw(4) << 'Q';
				answer4 += 2;
				break;
			case 13:
				cout << setw(4) << 'K';
				outFile << setw(4) << 'K';
				answer4 += 3;
				break;
			}
		}
		else {
			cout << setw(4) << play4[d];
			outFile << setw(4) << play4[d];
		}
	}

	cout << endl;
	outFile << endl;

	outFile.close();

	
	return 0;
}

