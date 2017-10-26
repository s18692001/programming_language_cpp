///======================================================================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-10-10
//  FILENAME   : HW02DB01B02024.CPP 
//  DESCRIPTION   : This program accepts three card values as inputs and display the total value of the hand, and the value of the three cards.
//======================================================================================================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;
int card1, card2, card3, sum; // declare variables of values of three cards and their sum

int main() {

	cout << "Please input the values of three cards: "; // display the notice for the user
	cin >> card1 >> card2 >> card3; // input the values of three cards


	if (card1 == 1) {
		card1 = 11;
		sum = card1 + card2 + card3;
		if (sum > 21) {
			card1 = 1;
			sum = card1 + card2 + card3;
		}
	}  /* if the value of card1 is 1, then try to assign card1 as 11, calculate their sum.
	   If the sum exceeds 21, then assign 1 back to card1. */


	if (card2 == 1) {
		card2 = 11;
		sum = card1 + card2 + card3;
		if (sum > 21) {
			card2 = 1;
			sum = card1 + card2 + card3;
		}
	}   /* if the value of card2 is 1, then try to assign card2 as 11, calculate their sum.
		If the sum exceeds 21, then assign 1 back to card2. */

	if (card3 == 1) {
		card3 = 11;
		sum = card1 + card2 + card3;
		if (sum > 21) {
			card3 = 1;
			sum = card1 + card2 + card3;
		}
	}   /* if the value of card3 is 1, then try to assign card3 as 11, calculate their sum.
		If the sum exceeds 21, then assign 1 back to card3. */

	cout << "The total value of the hand is: " << sum << endl; // display the total value of the hand.
	cout << "The values of these three cards: " << card1 << ", " << card2 << ", " << card3 << endl; // display the values of these three cards.

	return 0;
}