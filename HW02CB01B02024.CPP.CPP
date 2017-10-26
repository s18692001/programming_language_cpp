///======================================================================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-10
//  FILENAME   : HW02CB01B02024.CPP 
//  DESCRIPTION   : This program allows the user to input relative information and then output the number of chocolate bars that should be consumed to maintain one's weight.
//======================================================================================================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

double w, h, age, bar, BMR; // declare variables 
char sex; // declare character variable sex 
int main() {

	cout << "Please input your weight in kilograms: "; // display the request of weight input  
	cin >> w; // input weight
	cout << "Please input your height in centimeters: "; // display the request of height input  
	cin >> h; // input height
	cout << "Please input your age in years: "; // display the request of age input  
	cin >> age; // input age
	cout << "Please input your sex ( M / F ): "; // display the request of sex input  
	cin >> sex; // input sex 

	if (sex == 'F')
		BMR = 655 + (9.563 * w) + (1.850 * h) - (4.676 * age); // if sex is female, then follow this BMR formula
	if (sex == 'M')
		BMR = 66.5 + (13.75 * w) + (5.003 * h) - (6.755 * age); // if sex is male, then follow this BMR formula

	bar = BMR / 230; // number of chocolate bar is equal to the calories from BMR divided by 230 
	cout << "The number of chocolate bars that should be consumed is: " << bar << endl; // output the bar numbers 


	return 0;
}