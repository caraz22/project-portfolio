#include <iostream>

using namespace std;

class Location {
    private:
    string locationName;
    string currentLocation;

    public:
    Location(string);

    void setCurrentLocation(string);    
    
    string getLocationName();
    string getCurrentLocation();

    string locationRelativity(string);
};