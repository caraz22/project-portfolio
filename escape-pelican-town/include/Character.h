#include <iostream>

using namespace std;

class Character {
    private:
    string name;
    string birthSeason;
    int birthDay;
    string houseLocation;
    bool marriageable;
    string gender;

    public:
    Character(string, bool);
    
    void setBirthday(string, int);
    void setHouseLocation(string);
    void setGender(string);

    string getBirthday();
};