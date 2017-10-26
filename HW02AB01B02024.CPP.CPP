//======================================================================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-10
//  FILENAME   : HW02AB01B02024.CPP 
//  DESCRIPTION   : It's a program that inputs three integers from the keyboard and show the sum, average, product, smallest and largest of these numbers. 
//======================================================================================================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

int num1, num2, num3, largest, smallest; //declare the variables 
double average; //declare variable average 
int main() {
	cout << "Input three different integers: " ; // display the information to user 
	cin >> num1 >> num2 >> num3; // input three different integers 

	largest = num1; // assume num1 is the largest integer
	if (num2 > largest)
		largest = num2; // if the second integer is larger than the variable largest, then assign the second integer to variable largest.
	if (num3 > largest)
		largest = num3; // if the third integer is larger than the variable largest, then assign the third integer to variable largest.

	smallest = num1; // assume  num1 is the smallest integer 
	if (num2 < smallest) 
		smallest = num2; // if the second integer is smaller than the variable largest, then assign the second integer to variable smallest.
	if (num3 < smallest)
		smallest = num3; // if the third integer is smaller than the variable largest, then assign the third integer to variable smallest.

	average = (num1 + num2 + num3) / 3.0 ; // average is the sum of these numbers then divide them by 3


	cout << "Sum is " << num1 + num2 + num3 << endl; // display the sum of these numbers
	cout << "Average is " << average << endl; // display the average of these numbers
	cout << "Product is " << num1 * num2 * num3 << endl; // display the product of these numbers
	cout << "Smallest number is " << smallest << endl; // display the smallest number 
	cout << "Largest number is " << largest << endl; // display the largest number
			
		return 0;
}