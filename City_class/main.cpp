#include <iostream>
#include "city.h"
using namespace std;

int main()
{
    City cityA;
    cityA.print();
    cout<<endl;
    City cityB("bor");
    cityB.print();
    cout<<endl;
    City cityC("Saratov", "RussianFederation", 1200000);
    cityC.print();
    cout<<endl;
    cityA.setCountry("SSTU");
    cityA.setName("IPIT");
    cityA.setCountResidents(3000);
    City cityD(cityA);
    cityD.print();
    cout<<endl<<endl;
    cout<<"Name A: "<<cityA.getName()<<endl;
    cout<<"Country A: "<<cityA.getCountry()<<endl;
    cout<<"Count of residents A: "<<cityA.getCountResidents();
    return 0;
}
