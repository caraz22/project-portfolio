#include <iostream>

using namespace std;

class Character {
    private:
    string name;
    string birthSeason;
    int birthDay;
    string birthday;
    string homeLocation;
    bool marriageable;
    string gender;

    public:
    Character();

    Character(string, bool, string);
    
    void setBirthday(string, int);
    void setHomeLocation(string);
    void setGender(string);

    string getBirthday();
    string getName();
    bool getMarriageable();
    string getHomeLocation();
    string getGender();
};