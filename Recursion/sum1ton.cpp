#include<bits/stdc++.h>
using namespace std;
int sum_of_n(int n){
    if(n==0) return 0;
    return n+sum_of_n(n-1);
}
int main(int argc, char const *argv[])
{   
    int n=10;
    cout<<sum_of_n(n);
    return 0;
}
