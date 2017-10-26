///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-7
//  FILENAME   : HW05ABB01B02024.CPP 
//  DESCRIPTION   : Caesar Shift Cipher Decoder Bonus
//===============================================================================================================
#include "stdafx.h"
#include <iostream> 
#include <string> 

using namespace std;

string Caesardecoder(string str, int shift);                // declare the function in string class
int answer1;
char answer2, answer3;  // declare variables

int main()
{
	string str = "GWC IZM ZMITTG I PIZL EWZSQVO ABCLMVB", decoded_string;   // declare encoded string and variable
	cout << "The encoded message is: " << str << endl;

	int a;   // declare variable
	for (a = 1; a < 26; a++) {       // Because there are 26 alphabets, the shift at most is 25
		int shift = a;
		decoded_string = Caesardecoder(str, shift);  // input the argument to the function


		cout << "Shift is: " << a << " " << "The decoded message is : " << decoded_string << endl;  // iterate to show the shifts from 1 to 25 and check the right message
	}

	decoded_string = Caesardecoder(str, 8);    // we find that when shift is 8, the message is reasonable
	answer1 = 8;                // answer1
	answer2 = decoded_string[0];  // answer2
	answer3 = decoded_string[(str.length() - 1)]; // answer3

	return 0;
}

string Caesardecoder(string str, int shift)
{
	string temp = str;
	int length;              // declare variables

	length = temp.length();   // assign the length of the string to variable length

	for (int i = 0; i < length; i++)           // run through all element in the array
	{
		if (isalpha(temp[i]))    // check if the element is alphabet of not
		{
			for (int j = 0; j < shift; j++)   // shift each element in the array
			{

				if (temp[i] == 'A')
				{
					temp[i] = 'Z';         // if the element is A, then it will be shifted to Z
				}
				else if (temp[i] == 'a')  // if the element is a, then it will be shifted to z
				{
					temp[i] = 'z';
				}
				else
				{
					temp[i]--;          // shift the alphabet element to the last alphabet
				}
			}
		}
	}

	return temp;
}