#include "city.h"
using namespace std;
City::City(string const name, string const country, int const countResidents)
{
    this->name = name;
    this->country = country;
    this->countResidents = countResidents;
}
City::City(City const &city)
{
    this->name = city.name;
    this->country = city.country;
    this->countResidents = city.countResidents;
}
const string& City::getName () const
{
    return this->name;
}
const string& City::getCountry () const
{
    return this->country;
}
const int City::getCountResidents () const
{
    return this->countResidents;
}

void City::setName(string const &name)
{
    this->name = name;
}
void City::setCountry(string const &country)
{
    this->country = country;
}
const bool City::setCountResidents(int const countResidents)
{
    if(countResidents < 0)
        return false;
    this->countResidents = countResidents;
    return true;
}
void City::print() const
{
    cout<<"\tName: "<<this->name;
    cout<<"\tCountry: "<<this->country;
    cout<<"\tCount of residents: "<<this->countResidents;
}
