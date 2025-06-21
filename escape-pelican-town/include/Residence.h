#include <iostream>
#include <vector>
#include "Character.h"
#include "Location.h"

using namespace std;

class Residence {
    private:
    string address;
    vector<Character> residents;
    Location residenceLocation;

    public:
    Residence(string, string);

    void setResidents(vector<Character>);

    string getAddress();
    vector<Character> getResidents();
    Location getLocation();
};