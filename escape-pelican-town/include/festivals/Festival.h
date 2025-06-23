#include <iostream>

using namespace std;

class Festival {
    private:
    string name;
    string season;
    string theme;

    public:
    Festival(string, string);

    void setTheme(string);

    string getName();
    string getSeason();
    string getTheme();
};