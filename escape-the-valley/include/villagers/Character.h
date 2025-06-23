#include <iostream>
#include <Location.h>
#include <Season.h>

using namespace std;

class Character {
    private:
    string name;
    Season birthSeason;
    string birthday;
    string homeAddress;
    Location homeTown;
    bool marriageable;
    vector<Character> family;

    public:
    Character();

    Character(string, bool);

    void setBirthday(Season, int);
    void setHomeAddress(int, string);
    void setHomeTown(string);

    string getBirthday();
    string getName();
    bool getMarriageable();
    string getHomeAddress();
    Location getHomeTown();
};