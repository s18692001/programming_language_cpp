///======================================================================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-1
//  FILENAME   : HW03AB01B02024.CPP 
//  DESCRIPTION   : This program calculates the value of pi.
//======================================================================================================================================================


#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include <math.h>

using namespace std;
int k;
double pi;
double pi_intermediate;
double answer1;
// declare the variables

int main()
{
	for (k = 0; k <= 100000; k = k + 1) {                   // use for loop to calculate. k start from zero, then increase one by one until 100000
		pi_intermediate = (pow((-1), k)) / (2 * k + 1);       // store the value as an intermediate pi value
		pi = pi + pi_intermediate;                            // accumulate the sum of pi and intermediate pi value 

	}

	pi = pi * 4;                                              // the actual pi value need to be multiplied with 4
	cout << "Pi value is: " << setprecision(10) << fixed << pi << endl;// show the pi value with 10 digits below decimal point


	answer1 = pi;
	
	return 0;


}



