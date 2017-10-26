///==============================================================================================================
//  PROGRAMMER : ¤û³Ó¹l
//  DATE       : 2016-11-1
//  FILENAME   : HW03DB01B02024.CPP 
//  DESCRIPTION   : This program is for the game of paper scissor stone
//===============================================================================================================

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;
int computer_figure;
int player_figure;
int game_round;
int player_win_counts;
int computer_win_counts;
int answer1;               // declare variables


int main() {

	cout << "Welcome to the paper-scissor-rock game!" << endl;     // Welcome to this game!

	while (player_win_counts != 3 && computer_win_counts != 3) {   // run this loop while the winning counts of player and computer are not 3 


																   // Player side

		do {
			cout << "Please input your figures (0 for paper, 1 for scissor, 2 for rcok)" << endl;
			cin >> player_figure;                                                                   // tell the user to input their figures 
		} while (player_figure != 0 && player_figure != 1 && player_figure != 2);                   // run it when the number is 1, 2 or 3


																									// Computer side
		srand(time(0));
		int num = (rand() % 3);                     // randomly assign a number 0, 1, 2 

		switch (num)
		{
		case 0:
			computer_figure = 0;                        // if the random number is 0, then computer figure is 0,
			break;
		case 1:
			computer_figure = 1;                        // if the random number is 1, then computer figure is 1,
			break;
		case 2:
			computer_figure = 2;                        // if the random number is 2, then computer figure is 2,
			break;
		}

		if (computer_figure == 0 && player_figure == 1) {      // computer is paper and player is scissor
			player_win_counts++;                   // the player wins one time
			game_round++;                          // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}

		else if (computer_figure == 0 && player_figure == 2) {      // computer is paper and player is rock
			computer_win_counts++;     // computer wins one time
			game_round++;      // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}

		else if (computer_figure == 1 && player_figure == 0) {      // computer is scissor and player is paper
			computer_win_counts++;   // computer wins one time
			game_round++;         // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}

		else if (computer_figure == 1 && player_figure == 2) {      // computer is scissor and player is rock
			player_win_counts++;   // player wins one time
			game_round++;    // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}

		else if (computer_figure == 2 && player_figure == 0) {      // computer is rock and player is paper
			player_win_counts++;     // player wins one time
			game_round++;    // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}

		else if (computer_figure == 2 && player_figure == 1) {      // computer is rock and player is scissor
			computer_win_counts++;    // computer wins one time
			game_round++;     // next round
			cout << "Winning counts of Computer is: " << computer_win_counts << endl;
			cout << "Winning counts of Player is: " << player_win_counts << endl;
			cout << "The rounds of this game is: " << game_round << endl;
		}
		else {
			game_round++;
			cout << "Tie" << endl;            // if no one wins, then it's tie.
		}


	}
	answer1 = game_round;
	return 0;

}