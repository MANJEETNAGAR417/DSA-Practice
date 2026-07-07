#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1;
    cin>>s1;
    cout<<s1;
    //agar cin me m ek line input deta to uska first word hi print hota
    //is limit ko hataane ke liye we use getline func;
    getline(cin,s1);
    cout<<s1;
    return 0;
}
