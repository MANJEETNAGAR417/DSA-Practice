#include<iostream>
using namespace std;
class Loading{
public:
        void sum(int a,int b){
            cout<<a+b<<endl;
        }

        void sum(int a,int b,int c){
            cout<<a+b+c<<endl;
        }

        void sum(string a ,string b){
            cout<<a<<" "<<b<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Loading a;
    a.sum(2,3);
    a.sum("MANJEET","NAGAR");

    return 0;
}
