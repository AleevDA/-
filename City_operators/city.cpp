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

City City::operator += (int const newResidents)
{
    countResidents += newResidents;
    return *this;
}
City City::operator -= (int const oldResidents)
{
    if(oldResidents > countResidents)
        countResidents = 0;
    else
        countResidents -= oldResidents;
    return *this;
}
City City::operator = (string const &newName_Country)
{
    name = newName_Country;
    country = newName_Country;
    return *this;
}
City City::operator = (int const residents)
{
    countResidents = residents;
    return *this;
}

City City::operator = (City const &city)
{
    countResidents = city.countResidents;
    name = city.name;
    country = city.country;
    return *this;
}
const bool City::operator == (City const &city) const
{
    if(countResidents != city.countResidents)
        return false;
    if(name != city.name)
        return false;
    if(country != city.country)
        return false;
    return true;
}
const bool City::operator != (City const &city) const
{
    return !(*this == city);
}
const bool City::operator < (City const &city) const
{
    if(country > city.country)
        return false;
    if(country < city.country)
        return true;
    if(name > city.name )
        return false;
    if(name < city.name )
        return true;
    return (countResidents < city.countResidents);
}
const bool City::operator > (City const &city) const
{
    if(country < city.country)
        return false;
    if(country > city.country)
        return true;
    if(name < city.name )
        return false;
    if(name > city.name )
        return true;
    return (countResidents > city.countResidents);
}
const bool City::operator <= (City const &city) const
{
    return (*this == city || *this < city);
}
const bool City::operator >= (City const &city) const
{
    return (*this == city || *this > city);
}

istream& operator >> (istream &in, City &city)
{
    in >> city.name;
    in >> city.country;
    in >> city.countResidents;
    return in;
}
ostream& operator << (ostream &out, City const &city)
{
    out << " " << city.name;
    out << " " << city.country;
    out << " " << city.countResidents;
    return out;
}
