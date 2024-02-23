#include <iostream>
using namespace std;

int fact(int a) {
    int f=1;
    for(int i=2;i<=a;i++) {
        f=f*i;
    }
    return f;
}

int ncr(int n,int r) {
    int res = fact(n)/(fact(r)*fact(n-r));
    return res;
}

int main() {
    int row;
    cin>>row;
    for(int i=0;i<row;i++) {
        for(int j=0;j<row;j++) {
            if(j<=i) {
                cout<<ncr(i,j)<<" ";;
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}