#include <string>
using namespace std;

class Player2 {
    private:
    int score;              // player 2's score

    public:
    Player2();              // empty constructor

    string roll();          // rock, paper, or scissors    

    void win();             // adds a point to player 2's score

    void lose();            // removes a point from player 2's score

    int getScore();         // returns player 2's score
};