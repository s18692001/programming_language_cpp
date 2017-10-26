///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-7
//  FILENAME   : HW05CB01B02024.CPP 
//  DESCRIPTION   : Magic Square
//===============================================================================================================

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
int m_sqr[100][100];
int N;
int magic_shift(int[100][100]);
int answer1, answer2;              // declaration of function, array and variables

int main() {
	cout << "Please input the column and row number N: ";
	cin >> N;             // user could imput the row numbers of this square matrix

	magic_shift(m_sqr);     // input argument to the magic_square function to calculate

	int a, b;
	for (a = 0; a < N; a++) {
		for (b = 0; b < N; b++) {
			cout << setw(3) << m_sqr[a][b];
			if (b == N - 1) {
				cout << endl;       // show the square matrix
			}
		}
	}
	answer1 = m_sqr[0][0];  // answer1
  	answer2 = m_sqr[N - 1][N - 1];  // answer2

	return 0;
}

int magic_shift(int arr[100][100])    // input parameter into function
{

	int matrix[100][100];         // declare an 2D array with 100*100 entries

	int entries = N * N;
	int i = 0, j = N / 2;     // the starting point

	for (int k = 1; k <= entries; ++k)    // go through all conditions until the entries are full
	{
		matrix[i][j] = k;   // Condition 1

		i--;
		j++;

		if (k % N == 0)   // Condition 2
		{
			i += 2;
			--j;
		}
		else              // Condition 3
		{
			if (j == N)
				j -= N;

			else if (i<0)
				i += N;
		}
	}
	int r, s;
	for (r = 0; r < N; r++) {
		for (s = 0; s < N; s++) {
			arr[r][s] = matrix[r][s];   // assign the matrix array to arr array
		}
	}
	return 0;
}