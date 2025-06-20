#include <iostream>

using namespace std;

class Player {
    private:
    string name;
    int amountOfGold = 0;

    public:
    Player(string, int);

    void setName(string);

    string getName();
    int getAmountOfGold();

    void addGold(int);
};