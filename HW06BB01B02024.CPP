//================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-18
//  FILENAME   : HW06BB01B02024.CPP
//  DESCRIPTION   : Morse Code
//================================================================

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>   // headers 
using namespace std;

int answer1, answer2;  // answers variables

int main()
{
	// Read file
	string filename = "MorseCode.txt"; // The file path in my desktop
	string data, temp;

	ifstream inFile;

	inFile.open(filename.c_str());

	//check for successful open

	if (inFile.fail()) {
		cout << "\n The file is not opened successfully."
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}
	// Read and display the file's contents

	cout << "The original input is: " << endl;
	while (!inFile.eof()) {
		getline(inFile, temp);  //In the while loop, "temp" is always replaced by a new line in the file
		data.append(temp);
	}
	cout << data << endl;
	inFile.close();

	// connect to output file stream
	string ofilename = "MorseCode.dat";// The file path in my desktop
	ofstream outFile;

	outFile.open(ofilename.c_str());

	if (outFile.fail()) {
		cout << "The output file is not opened successfully." << endl;
		exit(1);
	}

	cout << "The coded output is: " << endl;
	// use switch-case function. if it encounters corresponding character, it will write into file and display
	for (int i = 0; i < data.length(); i++) {
		switch (toupper(data[i])) {
		case 'A':
			outFile << ".- ";
			cout << ".- ";
			answer2++;
			break;
		case 'B':
			outFile << "-... ";
			cout << "-... ";
			answer2++;
			break;
		case 'C':
			outFile << "-.-. ";
			cout << "-.-. ";
			answer2++;
			break;
		case 'D':
			outFile << "-.. ";
			cout << "-.. ";
			answer2++;
			break;
		case 'E':
			outFile << ". ";
			cout << ". ";
			answer2++;
			break;
		case 'F':
			outFile << "..-. ";
			cout << "..-. ";
			answer2++;
			break;
		case 'G':
			outFile << "--. ";
			cout << "--. ";
			answer2++;
			break;
		case 'H':
			outFile << ".... ";
			cout << ".... ";
			answer2++;
			break;
		case 'I':
			outFile << ".. ";
			cout << ".. ";
			answer2++;
			break;
		case 'J':
			outFile << ".--- ";
			cout << ".--- ";
			answer2++;
			break;
		case 'K':
			outFile << "-.- ";
			cout << "-.- ";
			answer2++;
			break;
		case 'L':
			outFile << ".-.. ";
			cout << ".-.. ";
			answer2++;
			break;
		case 'M':
			outFile << "-- ";
			cout << "-- ";
			answer2++;
			break;
		case 'N':
			outFile << "-. ";
			cout << "-. ";
			answer2++;
			break;
		case 'O':
			outFile << "--- ";
			cout << "--- ";
			answer2++;
			break;
		case 'P':
			outFile << ".--. ";
			cout << ".--. ";
			answer2++;
			break;
		case 'Q':
			outFile << "--.- ";
			cout << "--.- ";
			answer2++;
			break;
		case 'R':
			outFile << ".-. ";
			cout << ".-. ";
			answer2++;
			break;
		case 'S':
			outFile << "... ";
			cout << "... ";
			answer2++;
			break;
		case 'T':
			outFile << "- ";
			cout << "- ";
			answer2++;
			break;
		case 'U':
			outFile << "..- ";
			cout << "..- ";
			answer2++;
			break;
		case 'V':
			outFile << "...- ";
			cout << "...- ";
			answer2++;
			break;
		case 'W':
			outFile << ".-- ";
			cout << ".-- ";
			answer2++;
			break;
		case 'X':
			outFile << "-..- ";
			cout << "-..- ";
			answer2++;
			break;
		case 'Y':
			outFile << "-.-- ";
			cout << "-.-- ";
			answer2++;
			break;
		case 'Z':
			outFile << "--.. ";
			cout << "--.. ";
			answer2++;
			break;
		case ' ':
			outFile << "   ";
			cout << "   ";
			answer1++;
			break;
		case '.':
			outFile << ".-.-.-";
			cout << ".-.-.-";
			break;
		case ',':
			outFile << "--..--";
			cout << "--..--";
			break;

		}

	}
	cout << endl;
	answer1++;   // the word numbers is the number of space + 1

	outFile.close();  //close the output file stream

	cout << "The total number of words is: " << answer1 << endl;
	cout << "The total number of characters is: " << answer2 << endl;
	return 0;
}

