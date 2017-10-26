// ConsoleApplication40.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int josephus(int, int);
int main() {

	int N, skipk, dir, start;
	cout << "Please input N: ";
	cin >> N;
	int *ori = new int[N];
	int *after = new int[N];
	cout << endl;
	cout << "Input K: ";
	cin >> skipk;
	cout << endl;
	cout << "Input direction (1 for clockwise, -1 for counterclockwise): ";
	cin >> dir;
	cout << endl;
	cout << "Starting point: ";
	cin >> start;
	int K = skipk + 1;


	if (dir == 1) {
		for (int i = 0; i < N; i++) {
			ori[i] = i + 1;
		}
		for (int j = 0; j < N; j++) {
			after[j] = ori[(start - 1 + j) % N];
		}
		cout << endl;
		for (int a = 0; a < N; a++) {
			cout << setw(3) << after[a];

		}
		cout << endl;
	}

	if (dir == -1) {
		int count = N;
		for (int i = 0; i < N; i++) {
			ori[i] = count;
			count--;
		}
		for (int k = 0; k < N; k++) {
			after[k] = ori[(N - start + k) % N];
		}
		cout << endl;
		for (int b = 0; b < N; b++) {
			cout << setw(3) << after[b];
		}
		cout << endl;
	}

	cout << "The survive one is: " << after[josephus(N, K)];   //it's position
	cout << endl;
	cout << josephus(N, K);
	delete[] ori;
	delete[] after;
	return 0;
}

int josephus(int N, int K) {
	if (N == 1) {
		return 0;

	}
	else
		return (josephus(N - 1, K) + K) % N;
}