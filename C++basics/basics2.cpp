#include<iostream>
using namespace std;
void func(int a,int b,int c,int d,int z){
    
    z=a+b+c+d;
    cout<<z;
    

}
int main(int argc, char const *argv[])
{   
    func(2,3,4,5,6);
    
    return 0;
}
