// ConsoleApplication40.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;
void reverse(string);


int main() {
	string str;

	cout << "Please input the string to reverse: " << endl;
	while (getline(cin, str)) {       // important !!  while loop 放getline, 可以default 由^Z 結束

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
