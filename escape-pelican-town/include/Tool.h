#include <iostream>

using namespace std;

class Tool {
    private:
    string toolName;
    string toolStatus;
    int upgradeCost;
    string upgradeIngredients;

    public:
    Tool(string, string);

    void setToolName(string);
    void setToolStatus(string);
    void setUpgradeCost(int);
    void setUpgradeIngredients(string);

    string getToolName();
    string getToolStatus();
    int getUpgradeCost();
    string getUpgradeIngredients();

    Tool upgradeTool(int, string);
};