#include <iostream>
#include <vector>
#include "Character.h"
#include "Location.h"

using namespace std;

class Shop {
    private:
    string shopName;
    Character shopOwner;
    Location shopLocation;
    vector<string> daysOpen;
    int openingHour;
    int closingHour;

    public:
    Shop(string, Location);

    void setShopOwner(Character);
    void setDaysOpen(vector<string>);
    void setOpeningHour(int);
    void setClosingHour(int);

    Character getShopOwner();
    Location getShopLocation();
    
    int getHours(int, int);
};