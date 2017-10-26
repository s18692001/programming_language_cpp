///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2017-1-1
//  FILENAME   : HW07AB01B02024.CPP 
//  DESCRIPTION   : Streams and File I/O
//===============================================================================================================

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>   //headers

using namespace std;
int answer1, answer2;
int bsearch(vector<string>&, int, string);  // prototype of string binary search
void compare_str(string, string&);      // compare the length of the searched string
int main()
{
	//Read into the words.txt file
	string filename = "words.txt";
	ifstream inFile;
	inFile.open(filename.c_str());
	// Check whether the file is read successfully or not
	if (inFile.fail()) {
		cout << "The input file is not opened successfully.";
		exit(1);
	}

	string word;
	vector <string> wordlist;
	
	// read in words with space delimiter
	while (inFile >> word) {        									  
		transform(word.begin(), word.end(), word.begin(), ::tolower);  // force all the words into lowercase
		wordlist.push_back(word);  // put the words into vector container
	}
	// show how many words are in the vector 
	cout << "The size of the vector is: " << wordlist.size() << endl;

	answer1 = wordlist.size(); // answer1
	
	// reverse each string element in vector and search for matched string in vector
	string answer;
	
	for (int i = 0; i < wordlist.size(); i++) {
		string str = wordlist[i];
		string copy(str);
		reverse(copy.begin(), copy.end());   // reverse the string 
		int location = bsearch(wordlist, wordlist.size(), copy);  // binary search for the key string
		if (location > -1) {
			compare_str(copy, answer);  // compare the length of key string and previous string
		}
				
	}
	cout << "The final answer is: " << answer << endl;
	answer2 = answer.length();
	wordlist.clear();
	inFile.close();   // close the input file stream
	return 0;
}

int bsearch(vector<string>& wordlist, int size, string key) {
	// binary search of key string
	int left, right;
	left = 0;
	right = size - 1;
	while (left <= right) {
		int midpt = (int)((left + right) / 2);
		if (key == wordlist[midpt]) {
			return midpt;
		}
		else if (key > wordlist[midpt]) {
			left = midpt + 1;
		}
		else right = midpt - 1;
	}
	return -1;
}

void compare_str(string copy, string& answer) {
	// compare the length of key string and previous one
	if (copy.length() >= answer.length()) {
		answer = copy;
	}

	return;
}

