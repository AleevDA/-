#include <iostream>
#include "geographyobject.h"
    #include "country.h"
        #include "city.h"
    #include "wildobject.h"
using namespace std;

int main()
{
    Country countryA;
    countryA.print();
    cout<<endl;
    City cityA;
    cityA.print();
    cityA.setCapital("Orlan");
    cout<<endl;
    cityA.print();
    City cityB(cityA);
    cityB.setCountry("ElfLand");
    cityB.setPopulation(75000);
    cityB.setLatitude(37.44);
    cityB.setLongitude(-213.02);
    cityB.setNameObject("AeroTown");
    cout<<endl;
    cityB.print();
    cout<<endl<<endl<<endl;
    WildObject wildObjectA("WildEast", 170.11, -730);
    wildObjectA.print();
    return 0;
}
