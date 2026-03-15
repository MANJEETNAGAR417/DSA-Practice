#include<iostream>
using namespace std;
class Scooty{
public:
    int topseed;
    int mileage;

    void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

private:
    int bootspace;

};
class Bike : public Scooty{
public:
    int gears;

    virtual void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class Superbike : public Scooty{
public:
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    // Bike *b=new Bike;
    // b->gears=6;
    // cout<<b->gears<<endl;
    // (*b).sound();

    Scooty *s=new Bike();//scooty me aapa ne bike ka address store karaaya
    s->sound();
    Scooty *c=new Superbike();
    c->sound();
    return 0;
}
