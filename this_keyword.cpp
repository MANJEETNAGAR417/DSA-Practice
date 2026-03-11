#include<iostream>
using namespace std;
class Cricketers{
public:
        string name;
        int runs;
       

        Cricketers(string name,int runs){
            this->name=name;
            this->runs=runs;
        }
};
int main(int argc, char const *argv[])
{
    Cricketers c1("Virat",25000);
    cout<<c1.name<<" "<<c1.runs<<endl;
    return 0;
}
