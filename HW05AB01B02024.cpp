///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-7
//  FILENAME   : HW05AB01B02024.CPP 
//  DESCRIPTION   : Caesar Shift Cipher Decoder
//===============================================================================================================

#include "stdafx.h"
#include <iostream> 
#include <string> 

using namespace std;

string Caesardecoder(string str, int shift);                // declare the function in string class
char answer1, answer2;  // declare variables
int main()
{
	string str = "O RUBK IUSVAZKX VXUMXGSSOTM YU SAIN", decoded_string;   // declare encoded string and variable

	int shift = 6;   // the shift is 6

	cout << "The encoded message is: " << str << endl;

	decoded_string = Caesardecoder(str, shift);  // input the argument to the function

	cout << "The decoded message is : " << decoded_string << endl;

	answer1 = decoded_string[0];                   // answer1
	answer2 = decoded_string[(str.length() - 1)];  // answer2

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