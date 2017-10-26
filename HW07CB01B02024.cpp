///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2017-1-1
//  FILENAME   : HW07CB01B02024.CPP 
//  DESCRIPTION   : Sudoku solver
//===============================================================================================================

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

const int empty_grid = 0;
const int N = 9;
int answer1, answer2, answer3;

// Check if it's right to assign number to this given place
bool safe_check(int grid[N][N], int row, int col, int num);

// This function finds the empty_grid
bool Findempty(int grid[N][N], int &row, int &col);

bool Findempty(int grid[N][N], int &row, int &col)
{
	for (row = 0; row < N; row++)
		for (col = 0; col < N; col++)
			if (grid[row][col] == empty_grid)
				return true;
	return false;
}

bool Solver(int grid[N][N])
{
	int row, col;

	// finish it when there is no empty place
	if (!Findempty(grid, row, col))
		return true;
	// try number 1 to 9					 
	for (int num = 1; num <= 9; num++)
	{
		// check if it's a right place 
		if (safe_check(grid, row, col, num))
		{
			// assign a temp value in it
			grid[row][col] = num;

			// if it's right, return true
			if (Solver(grid))
				return true;

			// if it fails, then try again
			grid[row][col] = empty_grid;
		}
	}
	return false;
	// backtracking
}

// return true or false and indicate if the given number match any number in the row
bool Row_check(int grid[N][N], int row, int num)
{
	for (int col = 0; col < N; col++)
		if (grid[row][col] == num)
			return true;
	return false;
}

// return true or false and indicate if the given number match any number in the column
bool Col_check(int grid[N][N], int col, int num)
{
	for (int row = 0; row < N; row++)
		if (grid[row][col] == num)
			return true;
	return false;
}


// return true or false to indicate that if the given entry match the given number in 3*3 box
bool Box_check(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row + boxStartRow][col + boxStartCol] == num)
				return true;
	return false;
}


bool safe_check(int grid[N][N], int row, int col, int num)
{
	return !Row_check(grid, row, num) &&
		!Col_check(grid, col, num) &&
		!Box_check(grid, row - row % 3, col - col % 3, num);
}

// function to print our grid of sudoku
void print_su(int grid[N][N])
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
			printf("%2d", grid[row][col]);
		cout << "\n";
	}
}


int main()
{

	//Read into the words.txt file
	string filename = "sudoku.txt";
	ifstream inFile;
	inFile.open(filename.c_str());
	// Check whether the file is read successfully or not
	if (inFile.fail()) {
		cout << "The input file is not opened successfully.";
		exit(1);
	}
	int grid[N][N];
	cout << endl;
	cout << "First round" << endl;
	int i = 0;
	while (i < N * N && inFile >> grid[i / N][i % N])
		i++;

	if (Solver(grid) == true) {
		print_su(grid);
		answer1 = grid[4][4];
	}

	else
		cout << "No solution";

	cout << endl;
	cout << "Second round" << endl;
	int j = 0;
	while (j < N * N && inFile >> grid[j / N][j % N])
		j++;

	if (Solver(grid) == true) {
		print_su(grid);
		answer2 = grid[4][4];
	}
	else
		cout << "No solution";

	cout << endl;
	cout << "Third round" << endl;
	int k = 0;
	while (k < N * N && inFile >> grid[k / N][k % N])
		k++;

	if (Solver(grid) == true) {
		print_su(grid);
		answer3 = grid[4][4];
	}
	else
		cout << "No solution";

	inFile.close();
	return 0;
}