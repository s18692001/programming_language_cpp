//================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-12-7
//  FILENAME   : HW05BB01B02024.CPP
//  DESCRIPTION   : Game of Life
//================================================================
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;

bool first_gen[20][20];
bool second_gen[20][20];
bool third_gen[20][20];
int first_live, second_live, third_live;
bool live_change(bool[20][20]);
int answer1, answer2, answer3;       // declaration of array,function and variables

int main()
{
	cout << "Please input a 20*20 matrix for first generation" << endl;
	int a, b;
	for (a = 0; a < 20; a++) {
		for (b = 0; b < 20; b++) {
			cin >> first_gen[a][b];          // Webcat could input 400 variables in to a two-dimensional array

		}
	}
	cout << "The first generation is: " << endl;
	int c, d;
	for (c = 0; c < 20; c++) {
		for (d = 0; d < 20; d++) {
			cout << setw(20) << first_gen[c][d];
			if (d == 19) {
				cout << endl;
			}                                // show the 2-D array of first generation
		}
	}

	int e, f;
	for (e = 0; e < 20; e++) {
		for (f = 0; f < 20; f++) {
			if (first_gen[e][f] == 1) {
				first_live++;          // calculate the total number of live cells in first generation
			}
		}
	}
	cout << "The number of live cells in first generation is: " << first_live << endl;
	answer1 = first_live;   // answer1

	live_change(first_gen);         // use the function to shift into next generation
	int u, v;
	for (u = 0; u < 20; u++) {
		for (v = 0; v < 20; v++) {
			second_gen[u][v] = first_gen[u][v];     // fill in the new first_gen array to second generation array
		}
	}

	cout << "The second generation is: " << endl;
	int j, k;
	for (j = 0; j < 20; j++) {
		for (k = 0; k < 20; k++) {
			cout << setw(20) << second_gen[j][k];
			if (k == 19) {
				cout << endl;                      // show the 2-D array of second generation
			}
		}
	}
	int q, l;
	for (q = 0; q < 20; q++) {
		for (l = 0; l < 20; l++) {
			if (second_gen[q][l] == 1) {
				second_live++;             // calculate the live cells in second generation
			}
		}
	}
	cout << "The number of live cells in second generation is: " << second_live << endl;
	answer2 = second_live;   // answer2
	
	

	live_change(second_gen);                        // use the function to shift into next generation

	int x, y;
	for (x = 0; x < 20; x++) {
		for (y = 0; y < 20; y++) {
			third_gen[x][y] = second_gen[x][y];
		}
	}


	cout << "The third generation is: " << endl;        // show the third generation 
	int t, s;
	for (t = 0; t < 20; t++) {
		for (s = 0; s < 20; s++) {
			cout << setw(20) << third_gen[t][s];
			if (s == 19) {
				cout << endl;
			}
		}
	}
	int m, n;
	for (m = 0; m < 20; m++) {
		for (n = 0; n < 20; n++) {
			if (third_gen[m][n] == 1) {
				third_live++;
			}                             // calculate the third generation
		}
	}

	cout << "The number of live cells in third generation is: " << third_live << endl;
	answer3 = third_live;   // answer3
	return 0;
}

bool live_change(bool gen[20][20]) {         // this function uses a boolean 2-D array as parameter, then output a boolean type data
											 //find out neighbors
	int g, h, n_sum;
	int temp[20][20];
	for (g = 0; g < 20; g++) {
		for (h = 0; h < 20; h++) {
			//deal with the boundaries
			//1. Any live cell with fewer than two live neighbors dies, as if by loneliness.
			//4. Any live cell with more than three live neighbors dies, as if by overcrowding.
			//3. Any live cell with two or three live neighbors lives, unchanged, to the next generation.
			//4. Any dead cell with exactly three live neighbors comes to life.
			if (g == 0 && h != 0 && h != 19) {
				n_sum = gen[g][h - 1] + gen[g][h + 1] + gen[g + 1][h - 1] + gen[g + 1][h] + gen[g + 1][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (g == 19 && h != 0 && h != 19) {
				n_sum = gen[g - 1][h - 1] + gen[g - 1][h] + gen[g - 1][h + 1] + gen[g][h - 1] + gen[g][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}

				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (h == 0 && g != 0 && g != 19) {
				n_sum = gen[g - 1][h] + gen[g - 1][h + 1] + gen[g][h + 1] + gen[g + 1][h] + gen[g + 1][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (h == 19 && g != 0 && g != 19) {
				n_sum = gen[g - 1][h - 1] + gen[g - 1][h] + gen[g][h - 1] + gen[g + 1][h - 1] + gen[g + 1][h];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (g == 0 && h == 0) {
				n_sum = gen[g][h + 1] + gen[g + 1][h] + gen[g + 1][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (g == 0 && h == 19) {
				n_sum = gen[g][h - 1] + gen[g + 1][h - 1] + gen[g + 1][h];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (g == 19 && h == 0) {
				n_sum = gen[g - 1][h] + gen[g - 1][h + 1] + gen[g][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//deal with the boundaries
			else if (g == 19 && h == 19) {
				n_sum = gen[g - 1][h - 1] + gen[g - 1][h] + gen[g][h - 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
			//1. Any live cell with fewer than two live neighbors dies, as if by loneliness.
			//4. Any live cell with more than three live neighbors dies, as if by overcrowding.
			//3. Any live cell with two or three live neighbors lives, unchanged, to the next generation.
			//4. Any dead cell with exactly three live neighbors comes to life.
			else {
				n_sum = gen[g - 1][h - 1] + gen[g - 1][h] + gen[g - 1][h + 1] + gen[g][h - 1] + gen[g][h + 1] +
					gen[g + 1][h - 1] + gen[g + 1][h] + gen[g + 1][h + 1];
				if (gen[g][h] == 1 && n_sum < 2) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && n_sum > 3) {
					temp[g][h] = 0;
				}
				else if (gen[g][h] == 1 && (n_sum == 2 || n_sum == 3)) {
					temp[g][h] = 1;
				}
				else if (gen[g][h] == 0 && n_sum == 3) {
					temp[g][h] = 1;
				}
				else temp[g][h] = 0;
			}
		}
	}
	int r,s ;
	for (r = 0; r < 20; r++) {
		for (s = 0; s < 20; s++) {
			gen[r][s] = temp[r][s];
		}
	}
	
	return gen;
	

}




