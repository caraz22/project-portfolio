#include "Festivals.h"
#include "Seasons.h"

Festival eggFestival("Egg Festival", spring);
Festival flowerDance("Flower Dance", spring);
Festival luau("Luau", summer);
Festival moonlightJellies("Dance of the Moonlight Jellies", summer);
Festival sdvFair("Stardew Valley Fair", fall);
Festival spiritsEve("Spirit's Eve", fall);
Festival festOfIce("Festival of Ice", winter);
Festival feastOfWinterStar("Feast of the Winter Star", winter);

vector<Festival> allFestivals = {eggFestival, flowerDance, luau, moonlightJellies, sdvFair, spiritsEve, festOfIce, feastOfWinterStar};

vector<Festival> Festivals::addFestsToSeasons(vector<Festival> seasonFestivals, Season festivalSeason) {
    for (int i = 0; i < allFestivals.size(); i++) {
        if (festivalSeason.getName() == "Spring" && allFestivals[i].getSeason() == spring) {
            seasonFestivals.push_back(allFestivals[i]);
        } else if (festivalSeason.getName() == "Summer" && allFestivals[i].getSeason() == summer) {
            seasonFestivals.push_back(allFestivals[i]);
        } else if (festivalSeason.getName() == "Fall" && allFestivals[i].getSeason() == fall) {
            seasonFestivals.push_back(allFestivals[i]);
        } else {
            seasonFestivals.push_back(allFestivals[i]);
        }
    }

    return seasonFestivals;
}
