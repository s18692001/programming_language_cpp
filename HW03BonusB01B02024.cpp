///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-1
//  FILENAME   : HW03BonusB01B02024.CPP 
//  DESCRIPTION   : This program for presentation of the twin primes below 1000
//===============================================================================================================

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include <math.h>

using namespace std;
int number;
int remain;
int n;
int prime[1000];
int i = 1;
int a;
int b;
int first_maxtwin;
int second_maxtwin;
int answer1;
int answer2;  // declare variables

int main() {
	for (number = 2; number <= 1000; number = number + 1) {       // use for loop to run through all numbers less than 1000

		for (n = 2; n <= sqrt(number); n = n + 1) {               // use for loop to check the numbers less than its square root

			remain = (number % n);                                // assign the remainder
			 
			if (remain == 0) {
				break;                                            // if the remainder is zero, then break the for loop
			}
			else if (n + 1 > sqrt(number)) {                      // if n+1 > the square root of number, then assign the prime number into array
				prime[i] = number;
				i++;

			}
				}
			}
	for (a = 1; a < i; a++) {
		for (b = a + 1; b <= i; b++) {
			if (prime[b] - prime[a] == 2) {
				second_maxtwin = prime[b];
				first_maxtwin = prime[a];
			}                                                     /* use for loop to run through all pairs of prime numbers in the array.
																  		assign the first and second prime number in the twin prime */
		}
	}

	cout << "The first prime number of the largest pair of twin prime less than 1000: " << first_maxtwin << endl;
	cout << "The second prime number of the largest pair of twin prime less than 1000: " << second_maxtwin << endl;
	answer1 = first_maxtwin;
	answer2 = second_maxtwin;
	return 0;
}

