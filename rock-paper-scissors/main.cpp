#include "Player2.h"
#include <cctype>
#include <iostream>

using namespace std;

string changeCase(string str) {
    str[0] = toupper(str[0]);
    return str;
}

bool turnWinner(string playerRoll, string opponentRoll) {
    if (playerRoll == "Rock" && opponentRoll == "Scissors") {
        return 1;
    } else if (playerRoll == "Paper" && opponentRoll == "Rock") {
        return 1;
    } else if (playerRoll == "Scissors" && opponentRoll == "Paper") {
        return 1;
    } else {
        return 0;
    }
}

int main() 
{
    Player2 opponent;

    int playerScore = 0;
    string playerChoice;

    cout << "Rock, paper, scissors" << endl;
    cout << "Best of 5" << endl;
    cout << endl;

    while (playerScore < 5 && opponent.getScore() < 5) {
        cout << "Rock, paper, or scissors? ";
        cin >> playerChoice;
        
        string opponentRoll = opponent.roll();
        cout << "Player 2 rolled " << opponentRoll << endl;

        playerChoice = changeCase(playerChoice);

        if (playerChoice == opponentRoll) {
            cout << "It's a tie" << endl;
        } else if (turnWinner(playerChoice, opponentRoll) == 1) {
            cout << playerChoice << " beats " << opponentRoll << endl;
            cout << "Player 1 wins" << endl;
            playerScore++;
        } else if (turnWinner(playerChoice, opponentRoll) == 0) {
            cout << opponentRoll << " beats " << playerChoice << endl;
            cout << "Player 2 wins" << endl;
            opponent.win();
        }

        cout << "Player 1 score: " << playerScore << endl;
        cout << "Player 2 score: " << opponent.getScore() << endl;
        cout << endl;
    }

    if (playerScore == 5) {
        cout << "Player 1 wins the game";
    } else {
        cout << "Player 2 wins the game";
    }
}