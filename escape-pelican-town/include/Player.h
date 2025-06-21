#include <iostream>

using namespace std;

class Player {
    private:
    string name;
    int amountOfGold;

    public:
    Player(string, int);

    string getName();
    int getAmountOfGold();

    void addGold(int);
};