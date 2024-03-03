#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int nextTerm;
    cout<<"0,1,";
    for(int i=1;i<n-1;i++) {
        nextTerm = a + b;
        cout<<nextTerm<<",";
        a=b;
        b=nextTerm;
    }
    return 0;
}