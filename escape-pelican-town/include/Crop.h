#include <iostream>

using namespace std;

class Crop {
    private:
    string cropName;
    string season;
    int costOfSeeds;
    int daysTillHarvest;
    int sellPrice;

    public:
    Crop(string, string);

    void setCostOfSeed(int);
    void setDaysTillHarvest(int);
    void sellPrice(int);

    string getCropName();
    string getSeason();
    string getCropPurchaseInfo();
    string getSellPrice();

    int totalCost(string, int);
};