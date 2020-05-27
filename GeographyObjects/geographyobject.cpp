#include "geographyobject.h"

const string& GeographyObject::getNameObject() const
{
    return nameObject;
}
const float& GeographyObject::getLatitude() const
{
    return latitude;
}
const float& GeographyObject::getLongitude() const
{
    return longitude;
}

void GeographyObject::setNameObject(string const &newNameObject)
{
    nameObject = newNameObject;
}
void GeographyObject::setLatitude(float const &newLatitude)
{
    latitude = newLatitude;
}
void GeographyObject::setLongitude(float const &newLongitude)
{
    longitude = newLongitude;
}

GeographyObject& GeographyObject::operator = (GeographyObject const &geographyObject)
{
    nameObject = geographyObject.nameObject;
    latitude = geographyObject.latitude;
    longitude = geographyObject.longitude;
    return *this;
}
