#include "Character.h"

Character::Character() {

}

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