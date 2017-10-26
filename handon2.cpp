// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
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