#include <iostream>
using namespace std;
void printCounting(int n) {
    //FunctionBody
    for(int i=1;i<=n;i++) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    //function Call
    printCounting(n);
    return 0;
}