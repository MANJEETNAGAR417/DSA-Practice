#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks;
    cout<<"Enter the marks "<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A"<<endl;}
    else if(marks>=70){
        cout<<"Grade B"<<endl;}
    else if(marks>=50){
        cout<<"Grade C";
    }
    
    return 0;
}
