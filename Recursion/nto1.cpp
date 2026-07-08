#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<endl;
    print(n-1);
    return;
}
int main(int argc, char const *argv[])
{
print(5);
    return 0;
}
