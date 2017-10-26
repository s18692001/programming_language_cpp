// ConsoleApplication38.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;
int root1, root2;

int main() {

	cout << "Please input the coeff. (a is nonzero) : " << endl;
	do {
		cout << "a is: ";
		cin >> a;
	} while (a == 0);       //beware of a is nonzero
	cout << endl;
	cout << "b is: ";
	cin >> b;
	cout << endl;
	cout << "c is: ";
	cin >> c;
	cout << endl;

	if ((pow(b, 2) - 4 * a * c) > 0) {
		root1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / 2 * a;
		root2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / 2 * a;
	}
	if ((pow(b, 2) - 4 * a * c) == 0) {
		root1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / 2 * a;
		root2 = root1;
	}
	if ((pow(b, 2) - 4 * a * c) < 0) {
		cout << "There is no real number roots" << endl;
		exit(0);
	}

	cout << "The roots are: " << root1 << "  " << root2 << endl;

	return 0;

}