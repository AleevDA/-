#include "wildobject.h"

using namespace std;

WildObject::WildObject(string const &nameObject, float const latitude, float const longitude)
{
    this->nameObject = nameObject;
    this->latitude = latitude;
    this->longitude = longitude;
}
WildObject::WildObject(WildObject const &WildObject)
{
    this->nameObject = WildObject.nameObject;
    this->latitude = WildObject.latitude;
    this->longitude = WildObject.longitude;
}
void WildObject::print() const
{
    cout<<" Name: "<<nameObject;
    cout<<" Latitude: "<<latitude;
    cout<<" Longitude: "<<longitude;
}
WildObject& WildObject::operator = (WildObject const &WildObject)
{
    GeographyObject::operator = (WildObject);
    return *this;
}
