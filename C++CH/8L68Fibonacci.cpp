//NotWorking
#include <iostream>
using namespace std;
void Fib(int n) {
    int a=0;
    int b=1;
    int nextTerm;
    cout<<"0,1,";
    for(int i=1;i<n-1;i++) {
        nextTerm = a+b;
        a=b;
        b=nextTerm;
        cout<<nextTerm;
    }
}
int main() {
   int n;
   cin>>n;
   cout<< Fib(n);
   return 0;
}