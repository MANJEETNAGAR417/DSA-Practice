#include<bits/stdc++.h>
using namespace std;
int stair_path(int n){
    if(n==3)return 4;
    if(n==1 || n==2) return n;
    return stair_path(n-1)+stair_path(n-2)+stair_path(n-3);
}
int main(int argc, char const *argv[])
{   
    int n=5;
    int ways=stair_path(n);
    cout<<ways;
    return 0;
}
