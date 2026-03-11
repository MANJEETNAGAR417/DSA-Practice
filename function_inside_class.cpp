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

        void print(){//it is advisabe to use this keyword below because sometimes we use some variables with same names in this type of function
            cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        }

        int matches(){
            return runs/avg;
        }
};
int main(int argc, char const *argv[])
{
    Cricketers c1("Virat",25000,55.8);
    Cricketers c2("Rohit",18000,48.6);
    c1.print();
    cout<<c1.matches();

    
    return 0;
}
