// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int cal(int, int);
int num1, num2;
char cond;
int main() {

	do {
		do {
			cout << "Please input two positive integers: " << endl;
			cout << "number one is: ";
			cin >> num1;
			cout << endl;
			cout << "number two is: ";
			cin >> num2;

		} while (num1 < 0 || num2 < 0);

		cal(num1, num2);
		cout << "continue or not ? (y/n) : " << endl;
		cin >> cond;
	} while (cond == 'y' || cond == 'Y');   // beware of the two do while loops

		return 0;

}

int cal(int num1, int num2) {
	int gcd, lcm, tempg;         
	if (num1 > num2) {
		tempg = num2;

		int i;
		for (i = tempg; i >= 1; i--) {
			if (num1 % i == 0 && num2 % i == 0) {
				gcd = i;
				break;
			}
		}
				}
	}
	else {
		tempg = num1;
		int j;
		for (j = tempg; j >= 1; j--) {
			if (num1 % j == 0 && num2 % j == 0) {
				gcd = j;
				break;
			}
		}

	}
	
	lcm = (num1 * num2) / gcd;   // lcm 的公式!!

	cout << "The GCD is: " << gcd << endl;
	cout << "The LCM is: " << lcm << endl;


	return 0;
}