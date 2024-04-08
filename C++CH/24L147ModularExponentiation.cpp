#include <iostream>
using namespace std;

int modularExponentiation(int n,long long x,long long m) {
    long long res = 1;

    while(n>0) {
        if(n&1) {
            long long res = ((res) * (x)%m)%m;
        }
        x = ((x)%m*(x)%m)%m;
        n = n>>1;
    }
    return res;
}

int main() {
    int n;
    long long x, m;
    cin>>n;
    cin>>x>>m;
    cout<<modularExponentiation(n,x,m);
    return 0;
}
//1
//3 2