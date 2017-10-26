///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-14
//  FILENAME   : HW04BB01B02024.CPP 
//  DESCRIPTION   : This program is to operate data processing and sort
//===============================================================================================================
#include "stdafx.h"
#include "iostream"
#include <math.h>
#include "iomanip"
using namespace std;
int stock[100][2] = { 1001, 62,
949, 85,
1050, 33,
1200, 23,
867, 125,
346, 59,
1025, 105 };                // declare a two dimensional array 
int StockSort(int[], int);  // function prototype
int answer1;        
int answer2;                // declare variables 

int main()
{
	const int NUMEL = 7;    // declare constant to store numbers of elements
	int i; 
	int j;                  // declare variables
	cout << " The stock list is:" << endl;
	cout << "Part No. " << "Quantity" << endl;    
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 2; j++) {
			cout << setw(8) << stock[i][j];
		}
		cout << endl;
	}                                           // Show the list of stock including Part No. and Quantity
	int Quantity[NUMEL] = { 62, 85, 33, 23, 125, 59, 105 };  // declare a quantity array
	int a;
	StockSort(Quantity, NUMEL);                           // Use StockSort function to bubble sort the Quantity array
	cout << "The sorted list, in decreasing order, is:\n";
	for (a = 0; a < NUMEL; ++a)
		cout << "  " << Quantity[a];                      // Show the quantity array in decreasing order
	cout << endl;
	cout << "The highest stock quantity is: " << Quantity[0] << endl;       // show the highest stock quantity
	cout << "The lowest stock quantity is: " << Quantity[NUMEL - 1] << endl;  // show the lowest stock quantity
	int b;
	for (b = 0; b < NUMEL; b++) {
		if (Quantity[0] == stock[b][1]) {
			answer1 = stock[b][0];
		}
		else if (Quantity[NUMEL - 1] == stock[b][1]) {
			answer2 = stock[b][0];                             // search the part number of according quantity
		}
	}
	cout << "answer1 is: " << answer1 << endl;
	cout << "answer2 is: " << answer2 << endl;                 // show the value of answer1 and answer2
	return 0;
}

// Use bubble sort function, sort in decreasing order
int StockSort(int num[], int numel) {                          
	int i, j, temp;
	for (i = 0; i < (numel - 1); i++) {
		for (j = 1; j < numel; j++) {
			if (num[j] > num[j - 1]) {
				temp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = temp;

			}
		}
	}
	return 0;
}


