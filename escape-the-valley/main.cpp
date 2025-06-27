#include <iostream>
#include "Festivals.h"
#include "Seasons.h"

using namespace std;

int main() {
    Festivals festivalManager;

    vector<Festival> springFestivals;
    vector<Festival> summerFestivals;
    vector<Festival> fallFestivals;
    vector<Festival> winterFestivals;

    festivalManager.addFestsToSeasons(springFestivals, spring);
    festivalManager.addFestsToSeasons(summerFestivals, summer);
    festivalManager.addFestsToSeasons(fallFestivals, fall);
    festivalManager.addFestsToSeasons(winterFestivals, winter);

    cout << "Hello, World!";
}