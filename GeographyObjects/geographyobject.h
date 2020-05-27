#pragma once
#include <string>
using namespace std;
class GeographyObject
{
protected:
    string nameObject;
    float latitude;
    float longitude;
public:
    virtual void print() const = 0;

    const string& getNameObject() const;
    const float& getLatitude() const;
    const float& getLongitude() const;

    void setNameObject(string const &newNameObject);
    void setLatitude(float const &newLatitude);
    void setLongitude(float const &newLongitude);

    GeographyObject& operator = (GeographyObject const &geographyObject);
};
