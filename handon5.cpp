// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
double eval(int);
int main() {

	for (int i = 1; i <= 10; i++) {
		eval(i);
	}

	return 0;
}
double eval(int x) {

	double val = 1;
	double temp = 1;
	for (int a = 1; a <= 20; a++) {
		temp = (temp * x) / a;
		val = val + temp;
	}

	cout << val;
	cout << endl;

	return 0;
}