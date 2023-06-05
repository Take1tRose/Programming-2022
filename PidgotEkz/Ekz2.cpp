#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class Base
{
public:
    string type;
    const double teaPrice = 30;
    const double coffeePrice = 60.5;
    bool isCold;
    double getBasePrice()
    {
        return type == "tea" ? teaPrice : coffeePrice;
    }
};

class Addition
{
public:
    string type;
    const double MilkPrice = 15;
    const double ChocoPrice = 30.5;
    const double SugarPrice = 4.75;

    double getAddtionPrice()
    {
        if (type == "milk")
            return MilkPrice;
        if (type == "chocolate")
            return ChocoPrice;
        return SugarPrice;
    }
};
class Drink
{
public:
    Base base;
    vector<Addition> additions;
    double getPrice()
    {
        double price = 0;
        price += base.getBasePrice();
        for (int i = 0; i < additions.size(); i++)
        {
            price += additions[i].getAddtionPrice();
        }
        return price;
    }
};
int main()
{
    vector<Drink> drinks;
    ifstream inFile;
    inFile.open("order.txt");
    string line;
    while (!inFile.eof())
    {
        string base;
        string isCold;
        vector<string> additions;
        getline(inFile, line);
        stringstream ss(line);
        string item;

        ss >> base >> isCold;

        Drink drink;
        drink.base.type = base;
        drink.base.isCold = isCold == "cold" ? true : false;
        while (ss >> item)
        {
            Addition tempAdd;
            tempAdd.type = item;
            drink.additions.push_back(tempAdd);
        }
        drinks.push_back(drink);
    }
    inFile.close();
    ofstream outputFile("bills.txt");
    if (outputFile.is_open())
    {
        for (auto &drink : drinks)
        {
            outputFile << "Drink name: " << drink.base.type << "; Price: " << drink.getPrice() << endl;
        }
    }

    return 0;
}