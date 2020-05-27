#include <iostream>
#include "city.h"
using namespace std;

int main()
{
    City cityA;
    cityA.print();
    cout<<endl;
    cityA = "anklav";
    cityA.print();
    cout<<endl;
    cityA += 10;
    cityA.print();
    cout<<endl;
    cityA -= 5;
    cityA.print();
    cout<<endl;
    cityA -= 50;
    cityA.print();
    cout<<endl;
    cityA = 5;
    cityA.print();
    cout<<endl;
    City cityB;
    cityB = cityA;
    cityB.print();
    cout<<endl;

    if(cityB == cityA)
        cout<<"\n"<< cityB << " Is equal " << cityA;
    cityB -= 1;
    if(cityB != cityA)
        cout<<"\n"<< cityB << " Is unequal " << cityA;
    if(cityB >= cityA)
        cout<<"\n"<< cityB << " Is unequal or more than " << cityA;
    if(cityB <= cityA)
        cout<<"\n"<< cityB << " Is unequal or less than" << cityA;
    if(cityB > cityA)
        cout<<"\n"<< cityB << " Is more " << cityA;
    if(cityB < cityA)
        cout<<"\n"<< cityB << " Is less " << cityA;

    return 0;
}
