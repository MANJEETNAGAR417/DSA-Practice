#include<bits/stdc++.h>
using namespace std;
int maiz_path(int sr, int sc, int n, int m){
    int rightways=0;
    int downways=0;
    if(sr==n && sc==m)return 1;
    if(sr==n){
        rightways+=maiz_path(sr,sc+1,n,m);
    }
    if(sc==m){
        downways+=maiz_path(sr+1,sc,n,m);
    }
    if(sr<n && sc<m){
        rightways+=maiz_path(sr,sc+1,n,m);
        downways+=maiz_path(sr+1,sc,n,m);
    }
    return rightways+downways;
    
}
int main(int argc, char const *argv[])
{
    cout<<maiz_path(1,1,2,2);
    return 0;
}
