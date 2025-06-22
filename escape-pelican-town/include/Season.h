#include <iostream>
#include <vector>
#include "Character.h"
#include "Crop.h"
#include "Festival.h"

using namespace std;

class Season {
    private:
    string name;
    int year;
    vector<Festival> festivals;
    vector<Character> birthdays;
    vector<Crop> crops;

    public:
    Season(string);
    
    void setFestivals(vector<Festival>);
    void setBithdays(vector<Character>);
    void setCrops(vector<Crop>);

    vector<Festival> getFestivals();
    vector<Character> getBirthdays();
    vector<Crop> getCrops();

    int addYear();
};