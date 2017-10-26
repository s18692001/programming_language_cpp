///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-1
//  FILENAME   : HW03CB01B02024.CPP 
//  DESCRIPTION   : This program is for calculating happy number
//===============================================================================================================

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include <math.h>

using namespace std;
int number;
int happy;
int first_digit;
int second_digit;
int third_digit;
int n;
int unhappy;
int answer1;   // declare variables

int main() {

	for (number = 1; number < 1000; number++) {                                      // use for loop to go through all numbers less than 1000

		first_digit = number / 100;                                                   /*Calculate the first, second and third digits of the number */
		second_digit = (number % 100) / 10;
		third_digit = number % 10;
		n = pow(first_digit, 2) + pow(second_digit, 2) + pow(third_digit, 2);         // n is the sum of each digit's square

		while (n != 1 && n != 4) {       
			                                                                           // according to the math rules, if there n is once equal to 4, it's an unhappy number
 			first_digit = n / 100;                                                    
			second_digit = (n % 100) / 10;
			third_digit = n % 10;
			n = pow(first_digit, 2) + pow(second_digit, 2) + pow(third_digit, 2);      // find if there is any n equal to 1 or 4
		}
		if (n == 1) {                                                                  // if n is 1, then it's a happy number
			happy = number;
		}
		else if (n == 4) {                                                             // if n is 4, then it's an unhappy number
			unhappy = number;
		}

	}

	cout << "The largest happy number less than 1000 is: " << happy << endl;
	cout << "The largest happy number less than 1000 is: " << unhappy << endl;
	answer1 = happy;
	return 0;
}
