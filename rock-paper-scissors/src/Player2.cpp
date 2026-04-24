#include "Player2.h"
#include <ctime>

// Initialize player 2
// Set player 2's initial score to 0
Player2::Player2() { 
    score = 0;
}

// roll: Player 2 chooses rock, paper, or scissors
// Returns player 2's choice
string Player2::roll() {
    srand(time(0));                     
    
    int rollNum = (rand() % 3) + 1;    

    string rollName;

    if (rollNum == 1) {
        rollName = "Rock";
    } else if (rollNum == 2) {
        rollName = "Paper";
    } else {
        rollName = "Scissors";
    }

    return rollName;
}

// win: If player 2 wins, add 1 to their score
void Player2::win() {
    score = getScore() + 1;
}

// getScore: Return player 2's score
int Player2::getScore() {
    return score;
}