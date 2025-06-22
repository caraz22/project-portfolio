#include "Season.h"

Season::Season(string seasonName) {
    name = seasonName;
    year = 1;
}

void Season::setFestivals(vector<Festival> seasonFestivals) {
    festivals = seasonFestivals;
}

void Season::setBithdays(vector<Character> seasonBirthdays) {
    birthdays = seasonBirthdays;
}

void Season::setCrops(vector<Crop> seasonCrops) {
    crops = seasonCrops;
}

vector<Festival> Season::getFestivals() {
    return festivals;
}

vector<Character> Season::getBirthdays() {
    return birthdays;
}

vector<Crop> Season::getCrops() {
    return crops;
}

int Season::addYear() {
    year += 1;
}