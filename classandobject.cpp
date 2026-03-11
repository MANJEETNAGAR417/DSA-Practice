#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    string name;
    int model;
    int price;
    int seats;

};
int main(int argc, char const *argv[])
{
    Car c1;
    c1.name="Alto K10";
    c1.model=2011;
    c1.price=500000;
    c1.seats=4;

    Car c2;
    c2.name="Maruti Swift";
    c2.model=2014;
    c2.price=700000;
    c2.seats=5;

    Car c3;
    c3.name="Kia Sonet";
    c3.model=2018;
    c3.price=1500000;
    c3.seats=5;

    cout<<c1.name<<" "<<c1.model<<" "<<c1.price<<" "<<c1.seats<<" "<<endl;

    return 0;
}
