#pragma once
#include "geographyobject.h"
#include <iostream>
#include <string>

using namespace std;

class Country : public GeographyObject
{
protected:
    string capital;
public:

    Country(string const &nameObject = "newCountry", float const latitude = 0.0, float const longitude = 0.0, string const &capital = "");
    Country(Country const &country);
    const string& getCapital() const;
    void setCapital(string const &newCapital);
    void print() const;
    Country& operator = (Country const &country);
};
