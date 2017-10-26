///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-14
//  FILENAME   : HW04CB01B02024.CPP 
//  DESCRIPTION   : This program is to create a table of gcd from 1 to 20
//===============================================================================================================
#include "stdafx.h"
#include "iostream"
#include <math.h>
#include "iomanip"
using namespace std;
int x[20];
int y[20];               // declare two arrays with 20 elements respectively
int gcd_func(int, int);  // function prototype
int gcd;
int answer1, answer2, answer3;            // declare variables
int main()
{
	int a;
	for (a = 0; a < 20; a++) {
		x[a] = a + 1;               // fill in numbers 1 to 20 in array x
	}
	int b;
	for (b = 0; b < 20; b++) {
		y[b] = b + 1;               // fill in numbers 1 to 20 in array y
	}
	int c;
	cout << "        ";
	for (c = 0; c < 20; c++) {
		cout << setw(3) << x[c];    
	}
	cout << endl;
	cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ";

	                                // make a proper format of the table
	int i, j;
	for (i = 0; i < 20; i++) {
		cout << setw(4) << y[i] << " |" << "  ";
		for (j = 0; j < 20; j++) {
			cout << setw(3) << gcd_func(x[j], y[i]);     // call gcd function, produce gcd value in a proper format
		}
		cout << endl;
	}
	answer1 = gcd_func(x[9], y[14]);       // gcd of 10 and 15
	answer2 = gcd_func(x[1], y[16]);       // gcd of 2 and 17      
	answer3 = gcd_func(x[19], y[19]);      // gcd of 20 and 20

	cout << endl;
	cout << "answer1 is: " << answer1 << endl;
	cout << "answer2 is: " << answer2 << endl;
	cout << "answer3 is: " << answer3 << endl;  // Show the answers

	return 0;
}

int gcd_func(int x, int y) {        // gcd function definition 
	int tempnum;
	if (x < y) {                     // if x is smaller then y
		tempnum = x;                 // then, assign x as tempnum 
		while (tempnum >= 1) {         
			if ((y % tempnum == 0) && (x % tempnum == 0)) {
				gcd = tempnum;
				break;
			}
			tempnum--;               // find a number that can divide both x and y  
		}
	}
	if (x == y) {       // if x and y are equal, then gcd is x (and y)
		gcd = x;
	}
	if (x > y) {                  // if y is smaller then x
		tempnum = y;            // then, assign y as tempnum
		while (tempnum >= 1) {
			if ((x % tempnum == 0) && (y % tempnum) == 0) {
				gcd = tempnum;
				break;
			}
			tempnum--;          // find a number that can divide both x and y 
		}
	}
	return gcd;
}

