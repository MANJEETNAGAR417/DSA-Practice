#include<bits/stdc++.h>
using namespace std;
int a_to_pow_b(int a, int b){
    if(b==0) return 1;
    return a*a_to_pow_b(a,b-1);
}
int main(int argc, char const *argv[])
{   
    cout<<a_to_pow_b(3,4);
    return 0;
}
