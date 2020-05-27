#include "country.h"

using namespace std;

Country::Country(string const &nameObject, float const latitude, float const longitude, string const &capital)
{
    this->nameObject = nameObject;
    this->latitude = latitude;
    this->longitude = longitude;
    this->capital = capital;
}
Country::Country(Country const &country)
{
    this->nameObject = country.nameObject;
    this->latitude = country.latitude;
    this->longitude = country.longitude;
    this->capital = country.capital;
}
const string& Country::getCapital() const
{
    return capital;
}
void Country::setCapital(string const &newCapital)
{
    capital = newCapital;
}
void Country::print() const
{
    cout<<" Name: "<<nameObject;
    cout<<" Latitude: "<<latitude;
    cout<<" Longitude: "<<longitude;
    cout<<" Capital: "<<capital;
}
Country& Country::operator = (Country const &country)
{
    GeographyObject::operator = (country);
    this->capital = country.capital;
    return *this;
}
