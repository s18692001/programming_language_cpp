///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-1
//  FILENAME   : HW03BB01B02024.CPP 
//  DESCRIPTION   : This program for presentation of the largest prime number below 1000
//===============================================================================================================

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include <math.h>

using namespace std;
int remain;
int number;
int n;
int prime;
int answer1;                                                   // declare variables

int main() {

	for (number = 2; number <= 1000; number = number + 1) {    // for loop to run through number below 1000

		for (n = 2; n <= sqrt(number); n = n + 1) {            // for loop to run through n below root square of number

			remain = (number % n);                             // remain is the remainder of (number / n)

			if (remain == 0) {                                 // if remainder is break, break this for loop
				break;
			}
			else if (n + 1 > sqrt(number)) {                   // if n+1 > the square root of number, assign the number as prime number
				prime = number;                                // need to use else if, not just if !!

			}


		}


	}
	cout << prime << endl;
	answer1 = prime;                                           // in the end, the answer would be the largest prime number under 1000
	return 0;
}

