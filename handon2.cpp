// ConsoleApplication38.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
double pi, seradd;
int n;

using namespace std;

int main() {
	seradd = 0;
	for (n = 1; n < 51; n++) {
		seradd = 1 / pow(n, 2) + seradd;

	}
	pi = sqrt(6 * seradd);

	cout << "The value of pi is: " << pi << endl;
	return 0;
}