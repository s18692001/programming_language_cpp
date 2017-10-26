///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-14
//  FILENAME   : HW04DB01B02024.CPP 
//  DESCRIPTION   : This program is to simulate dice rolling
//===============================================================================================================
#include "stdafx.h"
#include "iostream"
#include <math.h>
#include "iomanip"
#include <cstdlib>
#include <ctime>
using namespace std;
double counts[11];        // Declare counts array with 11 elements
int dice1; 
int dice2;
int dice_sum;
double count_sum;         // variables declaration
double prob[11];          // Declare probability array with 11 elements
double answer1, answer2, answer3;   // answers variables

int main()
{
	const long int Iteration = 100000;   // set iteration times as constant 
	srand(time(0)); 
	int i;
	for (i = 1; i <= Iteration; i++)
	{
		dice1 = (rand() % 6) + 1;        
		dice2 = (rand() % 6) + 1;        // randomize the value of dice1 and dice2 from 1 to 6
		dice_sum = dice1 + dice2;        // sum up the values of dice1 and dice2
		switch (dice_sum) {              // use switch function to tally counts by cases
		case 2:                          // if the sum is 2, then add 1 count in counts array[0]
			counts[0]++;
			break;
		case 3:                          // if the sum is 3, then add 1 count in counts array[1]
			counts[1]++;
			break;
		case 4:
			counts[2]++;                 // if the sum is 4, then add 1 count in counts array[2]
			break;
		case 5:                          // if the sum is 5, then add 1 count in counts array[3]
			counts[3]++;
			break;
		case 6:                          // if the sum is 6, then add 1 count in counts array[4]
			counts[4]++;
			break;
		case 7:                          // if the sum is 7, then add 1 count in counts array[5]
			counts[5]++;
			break;
		case 8:                          // if the sum is 8, then add 1 count in counts array[6]
			counts[6]++;
			break;
		case 9:                          // if the sum is 9, then add 1 count in counts array[7]
			counts[7]++;
			break;
		case 10:                         // if the sum is 10, then add 1 count in counts array[8]
			counts[8]++;
			break;
		case 11:                         // if the sum is 11, then add 1 count in counts array[9]
			counts[9]++;
			break;
		case 12:                         // if the sum is 12, then add 1 count in counts array[10]
			counts[10]++;
			break;
		}


	}
	cout << setw(12) << "Sum:    ";
	int j;
	for (j = 2; j < 13; j++) {
		cout << setw(6) << j;
	}                                     // Show the sum of dices with proper format

	cout << endl;
	cout << setw(12) << "Frequency:  ";     
	int a;
	for (a = 0; a < 11; a++) {
		cout << setw(6) << counts[a];
	}                                     // Show the frequency with proper format
	cout << endl;
	int b;
	for (b = 0; b < 11; b++) {
		count_sum = count_sum + counts[b];
	}
	cout << " The sum of counts is:" << count_sum << endl;

	int c;
	for (c = 0; c < 11; c++) {
		prob[c] = (counts[c] / count_sum);
	}                                     // Show the sum of total counts with proper format
	cout << setw(12) << "Probability: ";
	int d;
	for (d = 0; d < 11; d++) {
		cout << setw(6) << fixed << setprecision(3) << prob[d];
	}
	cout << endl << endl;                 // Show each sum's probabilities with proper format

	answer1 = prob[5];
	answer2 = prob[0];
	answer3 = prob[10];
	cout << "The probability of rolling 7: " << answer1 << endl;
	cout << "The probability of rolling 2: " << answer2 << endl;
	cout << "The probability of rolling 12: " << answer3 << endl;    // Show the answers

	return 0;
}


