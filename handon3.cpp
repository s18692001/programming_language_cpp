// ConsoleApplication40.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;
void reverse(string);


int main() {
	string str;

	cout << "Please input the string to reverse: " << endl;
	while (getline(cin, str)) {       // important !!  while loop ��getline, �i�Hdefault ��^Z ����

		cout << endl;
		reverse(str);
		cout << "Please input the string to reverse: " << endl;
	}
	return 0;
}

void reverse(string str1) {
	int n = str1.length();
	for (int i = 0; i < (n + 1) / 2; i++) {       //important
		swap(str1[i], str1[n - 1 - i]);
	}
	cout << str1;
	cout << endl;
	return;
}
