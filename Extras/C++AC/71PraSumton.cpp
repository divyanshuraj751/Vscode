#include <iostream>
using namespace std;

int sum(int n) {
    int res = n*(n+1)/2;
    return res;
}
int main() {
   int n;
   cin>>n;
   cout<<sum(n)<<endl;
   return 0;
}