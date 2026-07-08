#include<bits/stdc++.h>
using namespace std;
void zigzag(int n){
    if(n==0)return;
    cout<<n<<endl;
    zigzag(n-1);
    cout<<n<<endl;
    zigzag(n-1);
    cout<<n<<endl;
    return;
    
}
int main(int argc, char const *argv[])
{
    zigzag(3);
    return 0;
}
