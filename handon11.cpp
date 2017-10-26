// ConsoleApplication39.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int digit, num, temp;
int arr[100000];
int arr_num = 0;


int main() {

	for (num = 100; num <= 99999; num++) {
		if ((num / 10000) != 0) {
			digit = 5;
		}
		else if ((num / 1000) != 0) {
			digit = 4;
		}
		else if ((num / 100) != 0) {
			digit = 3;
		}

		if (digit == 5) {
			temp = pow((num / 10000), digit) + pow(((num % 10000) / 1000), digit) + pow(((num % 1000) / 100), digit) +
				pow(((num % 100) / 10), digit) + pow((num % 10), digit);   //beware of digit calculation
			if (temp == num) {
				arr[arr_num] = num;
				arr_num++;
			}
		}
		if (digit == 4) {
			temp = pow(((num % 10000) / 1000), digit) + pow(((num % 1000) / 100), digit) +
				pow(((num % 100) / 10), digit) + pow((num % 10), digit);
			if (temp == num) {
				arr[arr_num] = num;
				arr_num++;
			}
		}
		if (digit == 3) {
			temp = pow(((num % 1000) / 100), digit) +
				pow(((num % 100) / 10), digit) + pow((num % 10), digit);
			if (temp == num) {
				arr[arr_num] = num;
				arr_num++;
			}
		}

	}
	cout << "The nar numbers between 100 to 99999 are: " << endl;
	int i;
	for (i = 0; i < arr_num; i++) {
		cout << setw(8) << arr[i] << endl;
	}
	return 0;
}