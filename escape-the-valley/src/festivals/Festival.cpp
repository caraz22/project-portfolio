#include "Festival.h"

Festival::Festival(string festivalName, string festivalSeason) {
    name = festivalName;
    season = festivalSeason;
}

void Festival::setTheme(string festivalTheme) {
    theme = festivalTheme;
}

string Festival::getName() {
    return name;
}

string Festival::getSeason() {
    return season;
}

string Festival::getTheme() {
    return theme;
}