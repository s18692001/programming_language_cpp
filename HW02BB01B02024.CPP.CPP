//======================================================================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-10
//  FILENAME   : HW02BB01B02024.CPP 
//  DESCRIPTION   : It's a program that takes the x-y coordinates of a point in the Cartesian plane and displays a message telling either an axis on which the point lies or the quadrant in which it is found.
//======================================================================================================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

double x, y; // declare the variables x nad y

int main() {

	cout << "Please input the x-y coordinates of a point: "; // display the information to user for inputting 
	cin >> x >> y; // input the x and y values
	
	if (x == 0 && y == 0)
		cout << "It's in the origin."; // if x and y are both zero, the point is in the origin.
	if (x == 0 && y != 0) 
		cout << "It's on the y-axis."; // if x is equal to zero and y is non-zero, the point is on the y-axis.
	if (x != 0 && y == 0)
		cout << "It's on the x-axis."; // if y is equal to zero and x is non-zero, the point is on the x-axis.
	if (x > 0 && y > 0)
		cout << "It's in quadrant I"; // if x is positive and y is positive, the point is in quadrant I.
	if (x > 0 && y < 0)
		cout << "It's in quadrant IIII"; // if x is positive and y is negative, the point is in quadrant IIII.
	if (x < 0 && y > 0)
		cout << "It's in quadrant II"; // if x is negative and y is positive, the point is in quadrant II.
	if (x < 0 && y < 0)
		cout << "It's in quadrant III"; // if x is negative and y is negative, the point is in quadrant III.
			
		return 0;
}
