#include <iostream>
#include <vector>
#include "Character.h"
#include "Crop.h"

using namespace std;

class Season {
    private:
    string seasonName;
    vector<string> seasonFestivals;
    vector<Character> seasonBirthdays;
    vector<Crop> seasonalCrops;
};