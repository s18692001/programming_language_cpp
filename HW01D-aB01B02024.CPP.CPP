//================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-3
//  FILENAME   : HW01D-bB01B02024.CPP 
//  DESCRIPTION   : The increase in length of a rectangular slab of aluminum  metal that's fixed at one end and pulled by a force
//================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

double I, F, k, l, w, d, e; // declare variables (e is epsilon)
							/* I is the increase in length(mm).
							F is the applied force(N = kg - m / s2).
							k is 1000 (conversion of F to millimeter units).
							l is the slab¡¦s length(mm).
							w is the slab¡¦s width(mm).
							d is the slab¡¦s depth(mm).
							e is the metal¡¦s modulus of elasticity(N / mm2). */

int main() {

	l = 3 * 1000; // the slab of aluminum is 3 * 1000 mm long
	w = 4 * 10;  //it is 4 * 10 mm wide
	d = 2; // it is 2 mm deep
	F = 4; // it is subjected to a force of 4 N
	e = 110000; // the metal's modulus of elasticity is 68950 (N/mm2)
	k = 1000;
	I = (F * k * l) / (w * d * e);

	cout << " The increase of this metal is " << I << " mm" << endl;

	return 0;


}