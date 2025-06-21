#include <iostream>

using namespace std;

class Festival {
    private:
    string festivalName;
    string festivalSeason;
    string festivalTheme;

    public:
    Festival(string);

    Festival(string, string);

    void setFestivalTheme(string);

    string getFestivalName();
    string getFestivalSeason();
    string getFestivalTheme();
};