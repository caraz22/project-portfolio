#include <iostream>
#include <vector>
#include <Crop.h>
#include <Festival.h>

using namespace std;

class Character;

class Season {
    private:
    string name;
    int year;
    vector<Festival> festivals;
    vector<Character> birthdays;
    vector<Crop> crops;

    public:
    Season();
    
    Season(string);
    
    void setFestivals(vector<Festival>);
    void setBithdays(vector<Character>);
    void setCrops(vector<Crop>);

    string getName();
    vector<Festival> getFestivals();
    vector<Character> getBirthdays();
    vector<Crop> getCrops();

    int addYear();
};