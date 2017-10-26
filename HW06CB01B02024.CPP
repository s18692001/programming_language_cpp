///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-18
//  FILENAME   : HW06CB01B02024.CPP 
//  DESCRIPTION   : Pangram check
//===============================================================================================================
#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>  // headers

using namespace std;

void PangramCheck(string);  // pangram check function prototype
string str;
int answer1 = 0, answer2 = 0;
int main()
{
	string filename = "PangramList.txt";   // input file address
	ifstream inFile;   // declare the input file stream object
	inFile.open(filename.c_str());  // open input file stream
	if (inFile.fail()) {                    // if it fails, then exit the program
		cout << "\n The file is not opened successfully." << endl;
		exit(1);
	}
	while (getline(inFile, str)) {      // read in the file line by line 

		answer2++;
		PangramCheck(str);  // deliver argument to function 
	}

	return 0;
}

void PangramCheck(string str) {
	static int nonpan = 0;     
	int alpha[26];
	for (int a = 0; a < 26; a++) {
		alpha[a] = 0;
	}
	for (int i = 0; i < str.length(); i++) {      // check every character in the string and assign the alphabet to alpha array
		switch (toupper(str[i])) {
		case 'A':
			alpha[0]++;
		case 'B':
			alpha[1]++;
		case 'C':
			alpha[2]++;
		case 'D':
			alpha[3]++;
		case 'E':
			alpha[4]++;
		case 'F':
			alpha[5]++;
		case 'G':
			alpha[6]++;
		case 'H':
			alpha[7]++;
		case 'I':
			alpha[8]++;
		case 'J':
			alpha[9]++;
		case 'K':
			alpha[10]++;
		case 'L':
			alpha[11]++;
		case 'M':
			alpha[12]++;
		case 'N':
			alpha[13]++;
		case 'O':
			alpha[14]++;
		case 'P':
			alpha[15]++;
		case 'Q':
			alpha[16]++;
		case 'R':
			alpha[17]++;
		case 'S':
			alpha[18]++;
		case 'T':
			alpha[19]++;
		case 'U':
			alpha[20]++;
		case 'V':
			alpha[21]++;
		case 'W':
			alpha[22]++;
		case 'X':
			alpha[23]++;
		case 'Y':
			alpha[24]++;
		case 'Z':
			alpha[25]++;

		}
	}

	for (int j = 0; j < 26; j++) {
		if (alpha[j] == 0) {     // check every element in alpha array, if an alphabet doesn't exist in the sentence, then output the sentence
			cout << str << endl;
			nonpan++;   // the number of non-pangram increase by one
			break;
		}
	}
	
	answer1 = nonpan;

	return;
}

