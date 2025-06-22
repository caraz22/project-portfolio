#include <iostream>
#include <vector>
#include "Character.h"
#include "Location.h"

using namespace std;

class Residence {
    private:
    string address;
    vector<Character> habitants;
    Location location;

    public:
    Residence(string, string);

    void setHabitants(vector<Character>);

    string getAddress();
    vector<Character> getResidents();
    Location getLocation();
};