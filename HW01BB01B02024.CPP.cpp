
//================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-3
//  FILENAME   : HW01BB01B02024.CPP 
//  DESCRIPTION   : This is a program to compute the conversion from Fahrenheit degree to Celcius degree
//================================================================


#include "stdafx.h"
#include <iostream>
using namespace std;

float degree;

int main()
{
	cout << "Please input the temperature number in Fahrenheit degree."; //this produces the display 
	cin >> degree; //user inputs the Fahrenheit degree number
	degree = (degree - 32) * 5 / 9;  // convert to Celcius degree and assign to degree variable
	cout << "It is " << degree << " Celcius degree." << endl; //output the Celcius degree to user

	return 0;
}

