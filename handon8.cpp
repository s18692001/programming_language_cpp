// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;



int main() {
	int N;
	cin >> N;
	int *prime = new int[N];
	cout << endl;
	int a;
	int b;
	prime[0] = 2;     //beware of 1 is not prime number!!
	int temp = 1;
	for (a = 3; a < N; a++) {
		for (b = 2; b < a; b++) {       // beware of a and b
			if (a % b == 0) {
				break;
			}
			if (b == a - 1) {     // beware of b == a-1
				prime[temp] = a;
				temp++;
			}
		}

	}
	cout << "The prime numbers are: " << endl;
	int i;
	for (i = 0; i < temp; i++) {
		cout << setw(4) << prime[i];
	}
	cout << endl;

	delete[] prime;
	return 0;
}