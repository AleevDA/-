#pragma once
#include "country.h"
#include <iostream>
#include <string>
using namespace std;

class City : public Country
{
protected:
    string country;
    int population;
public:
    City(string const &nameObject = "newCity", float const latitude = 0.0, float const longitude = 0.0, string const &capital = "",string const &country = "oldCountry", int const population = 0);
    City(City const &city);

    const string& getCountry() const;
    const int getPopulation() const;
    void setCountry(string const &newCountry);
    const bool setPopulation(int const newPopulation);

    void print() const;
    City& operator = (City const &city);
};
