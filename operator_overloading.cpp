#include<iostream>
using namespace std;
class Fraction{
public:
        int num;
        int den;

        Fraction(int num,int den){
            this->num=num;
            this->den=den;
        }

        void display(){
            cout<<num<<"/"<<den<<endl;
        }

        Fraction add(Fraction f){
            int newNum;
            int newDen;
            newNum=this->num*f.den+this->den*f.num;
            newDen=this->den*f.den;
            Fraction ans(newNum,newDen);
            return ans;
        }

};
int main(int argc, char const *argv[])
{
    Fraction f1(1,2);
    Fraction f2(2,3);
    Fraction f3=f1.add(f2);
    f3.display();
    return 0;
}
