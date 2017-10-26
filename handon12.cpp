// ConsoleApplication40.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int M, L, N;
int mal(int **, int **, int, int, int);  //very important!!

int main()
{
	cout << "Please input the matrices A (M x L) and B (L x N) " << endl;
	cout << "M is: ";
	cin >> M;
	cout << "L is: ";
	cin >> L;
	cout << "N is: ";
	cin >> N;

	int **A = new int *[M];     // declaration of 2D array is very important
	for (int i = 0; i < M; i++) {
		A[i] = new int[L];
	}
	int **B = new int *[L];
	for (int j = 0; j < L; j++) {
		B[j] = new int[N];
	}

	cout << endl;
	cout << "Please input the entries of matrix A: " << endl;
	for (int k = 0; k < M; k++) {
		for (int l = 0; l < L; l++) {
			cin >> A[k][l];

		}
	}
	cout << "Please input the entries of matrix B: " << endl;
	for (int m = 0; m < L; m++) {
		for (int n = 0; n < N; n++) {
			cin >> B[m][n];

		}
	}

	cout << "The matrix A is: " << endl;
	for (int p = 0; p < M; p++) {
		for (int q = 0; q < L; q++) {
			cout << setw(4) << A[p][q];

		}
		cout << endl;
	}
	cout << "The matrix B is: " << endl;
	for (int r = 0; r < L; r++) {
		for (int s = 0; s < N; s++) {
			cout << setw(4) << B[r][s];

		}
		cout << endl;
	}

	mal(A, B, M, L, N);
	delete[] A, B;

	return 0;
}

int mal(int **A, int **B, int M, int L, int N) {         // important!!

	int **C = new int *[M];        // important!!
	for (int u = 0; u < M; u++) {
		C[u] = new int[N];
	}

	for (int i = 0; i < M; i++) {         // important to initialization!!!!
		for (int j = 0; j < N; j++) {
			C[i][j] = 0;
		}
	}

	for (int Arow = 0; Arow < M; Arow++) {          // important algorithm!!!!!!!!
		for (int Bcol = 0; Bcol < N; Bcol++) {
			for (int Acol = 0; Acol < L; Acol++) {
				C[Arow][Bcol] += (A[Arow][Acol] * B[Acol][Bcol]);
			}
		}
	}
	cout << "The matrix C is: " << endl;
	for (int a = 0; a < M; a++) {
		for (int b = 0; b < N; b++) {
			cout << setw(4) << C[a][b];
		}
		cout << endl;
	}
	delete[] C;
	return 0;
}