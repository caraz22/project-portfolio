#include "Character.h"

Character::Character(string characterName, bool isMarriageable, string characterGender) {
    name = characterName;
    marriageable = isMarriageable;
    gender = characterGender;
}

void Character::setBirthday(string characterBirthSeason, int characterBirthDay) {
    birthday = characterBirthSeason + " " + to_string(characterBirthDay);
}

void Character::setHomeLocation(string characterHomeLocation) {
    homeLocation = characterHomeLocation;
}

void Character::setGender(string characterGender) {
    gender = characterGender;
}

string Character::getBirthday() {
    return birthday;
}

string Character::getName() {
    return name;
}

bool Character::getMarriageable() {
    return marriageable;
}

string Character::getHomeLocation() {
    return homeLocation;
}

string Character::getGender() {
    return gender;
}