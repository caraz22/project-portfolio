#include "Player.h"

Player::Player(string farmerName) {
    name = farmerName;
    amountOfGold = 0;
}

string Player::getName() {
    return name;
}

int Player::getAmountOfGold() {
    return amountOfGold;
}

void Player::adjustGold(int gold, bool addGold) {
    if (addGold == true) {
        amountOfGold += gold;        
    } else {
        amountOfGold -= gold;
    }

}