#include<bits/stdc++.h>
using namespace std;
int maiz_path(int n, int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1)return 1;
    if(n==1){
        rightways+=maiz_path(n,m-1);
    }
    if(m==1){
        downways+=maiz_path(n-1,m);
    }
    if(n>1 && m>1){
        rightways+=maiz_path(n-1,m);
        downways+=maiz_path(n,m-1);
    }
    return rightways+downways;
    
}
int main(int argc, char const *argv[])
{
    cout<<maiz_path(3,3);
    return 0;
}
