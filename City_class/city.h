#pragma once
#include <iostream>

using namespace std;

class City
{
protected:
    string name;
    string country;
    int countResidents;
public:
    City(string const name = "", string const country = "", int const countResidents = 0);
    City(City const &city);

    const string& getName () const;
    const string& getCountry () const;
    const int getCountResidents () const;

    void setName(string const &name);
    void setCountry(string const &country);
    const bool setCountResidents(int const countResidents);

    void print() const;
};
