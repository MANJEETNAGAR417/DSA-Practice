#include<iostream>
using namespace std;
class Cricketers{
public:
        string name;
        int runs;
        int avg;
       

        Cricketers(string name,int runs,int avg){
            this->name=name;
            this->runs=runs;
            this->avg=avg;
        }

        
        
};

void change(Cricketers *c){
            c->avg=76;//(*c).avg=76;
}

int main(int argc, char const *argv[])
{
    Cricketers c1("Virat",25000,55.8);
    Cricketers c2("Rohit",18000,48.6);

    Cricketers *p1=&c1;
    cout<<c1.runs<<endl;
    (*p1).runs=30000;
    cout<<c1.runs<<endl;
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg;

    

    
    return 0;
}
