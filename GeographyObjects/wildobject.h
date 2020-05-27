#pragma once
#include "geographyobject.h"
#include <iostream>
#include <string>

using namespace std;

class WildObject : public GeographyObject
{
public:

    WildObject(string const &nameObject = "newWildObject", float const latitude = 0.0, float const longitude = 0.0);
    WildObject(WildObject const &wildObject);
    void print() const;
    WildObject& operator = (WildObject const &wildObject);
};
