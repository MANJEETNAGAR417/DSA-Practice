#include<bits/stdc++.h>
using namespace std;
int a_to_pow_b(int a, int b){
    if(b==0) return 1;
    if(b==1)return a;
    if(b%2==0){
        return a_to_pow_b(a,b/2)*a_to_pow_b(a,b/2);
    }
    else return a*(a_to_pow_b(a,(b-1)/2)*a_to_pow_b(a,(b-1)/2));
}
int main(int argc, char const *argv[])
{   
    cout<<a_to_pow_b(5,3);
    return 0;
}
