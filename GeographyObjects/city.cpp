#include "city.h"
using namespace std;

City::City(string const &nameObject, float const latitude, float const longitude, string const &capital,string const &country, int const population):
    Country(nameObject, latitude, longitude, capital)
{
    this->country = country;
    this->population = population;
}
City::City(City const &city):
    Country(city)
{
    this->country = city.country;
    this->population = city.population;
}

const string& City::getCountry() const
{
    return country;
}
const int City::getPopulation() const
{
    return population;
}
void City::setCountry(string const &newCountry)
{
    country = newCountry;
}
const bool City::setPopulation(int const newPopulation)
{
    if(newPopulation < 0)
        return false;
    population = newPopulation;
    return true;
}

void City::print() const
{
    Country::print();
    cout<<" Population: "<<population;
    cout<<" Country: "<<country;
}
City& City::operator = (City const &city)
{
    Country::operator = (city);
    country = city.country;
    population = city.population;
    return *this;
}
