// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int fib[20];
int main() {

	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	fib[3] = 2;
	int i;
	for (i = 4; i < 20; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];    // beware of 
	}
	int j;
	for (j = 0; j < 20; j++) {

		if ((j != 0) && (j % 5 == 0)) {    // beware of
			cout << endl;
		}
		cout << setw(6) << fib[j] << " ";
	}

	return 0;
}