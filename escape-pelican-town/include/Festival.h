#include <iostream>

using namespace std;

class Festival {
    private:
    string name;
    string season;
    string theme;

    public:
    Festival(string);

    Festival(string, string);

    void setFestivalTheme(string);

    string getFestivalName();
    string getFestivalSeason();
    string getFestivalTheme();
};