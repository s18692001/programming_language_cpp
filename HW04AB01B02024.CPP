///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-13
//  FILENAME   : HW04AB01B02024.CPP 
//  DESCRIPTION   : This program is to find the perfect numbers between 1 to 10000
//===============================================================================================================

#include "stdafx.h"
#include "iostream"
#include <math.h>
#include "iomanip"
using namespace std;
int factor[10000];
int input;
int boolean;
int answer1;
void PerfectNumber(long int);        // function prototype
// declaration of variables and function

int main()
{
	
	for (input = 10000; input > 1; input--) {                       // use for loop to go through numbers under 10000
		cout << "Input number is : " << input << endl;          
		PerfectNumber(input);                                       // put argument in function
		if (boolean == 1) {                                         
			cout << " The bigest perfect number under 10000 is: " << input << endl;
			break;                                                  // if it's true, then output the result and break the for loop
		}
	}
	answer1 = input;                                                // assign the result to answer1
	return 0;
}

void PerfectNumber(long int Num) {

	// find factors and assign them into array
	int i;
	int array_index;
	int factor_sum;                     // local variables declaration
	factor_sum = 0;          
	array_index = 0;                    // local variables initialization
	for (i = 1; i < input; i++) {
		if (input % i == 0) {
			factor[array_index] = i;
			array_index++;              // use for loop to go through numbers smaller than itself
		}                               // if the remainder is zero, then assign the divisor into array
	}
	// sum up the factors in array, then identify it's perfect number or not
	int a;                              // local variables declaration
	for (a = 0; a < array_index; a++) {
		factor_sum = factor[a] + factor_sum;
	}                                   // use for loop to sum up all factors 
	cout << " The factor list is: ";
	int b;                              // local variables declaration
	for (b = 0; b < array_index; b++) {
		cout << factor[b] << " ";
	}                                   // let user understand the factor list 
	cout << endl;
	cout << " The factors sum is: " << factor_sum << endl;   // let user understand the sum of factors
	if (input == factor_sum) {
		boolean = 1;                   
	}                                   // if the input is equal to the sum of factor, then assign 1 to boolean
	else {
		boolean = 0;                    // if the input is equal to the sum of factor, then assign 0 to boolean
	}

}