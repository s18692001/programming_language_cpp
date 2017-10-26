// ConsoleApplication39.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int arr[15] = { 3, 8, 10, 30, 2, 16, 27, 13, 22, 17, 42, 33, 38, 29, 14 };
int SortArr(int[15]);
int main()
{
	cout << "The array before sorting is: " << endl;
	int i;
	for (i = 0; i < 15; i++) {
		cout << setw(4) << arr[i];
	}
	SortArr(arr);
	cout << endl;
	cout << "The array after sorting is: " << endl;
	int j;
	for (j = 0; j < 15; j++) {
		cout << setw(4) << arr[j];
	}
	cout << endl;
	return 0;
}

int SortArr(int arr[15]) {          // remember arr[15]
	int a, b, temp;

	for (a = 1; a < 15; a++) {
		for (b = 1; b < 15; b++) {           //beware of 1 and 15, b-1 and b
			if (arr[b - 1] > arr[b]) {
				temp = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = temp;
			}
		}
	}
	return 0;
}

