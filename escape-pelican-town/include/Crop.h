#include <iostream>

using namespace std;

class Crop {
    private:
    string name;
    string season;
    int costOfSeeds;
    int daysTillHarvest;
    int sellPrice;

    public:
    Crop(string, string);

    void setCostOfSeed(int);
    void setDaysTillHarvest(int);
    void setSellPrice(int);

    string getCropName();
    string getSeason();
    int getCostOfSeeds();
    int getDaysTillHarvest();
    int getSellPrice();

    int totalCost(int);
};