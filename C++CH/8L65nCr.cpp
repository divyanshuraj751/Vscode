#include <iostream>
using namespace std;
int factorial(int n) {
    int ans =1;
    for(int i=0;i<n;i++) {
        ans = ans*(n-i);
    }
    return ans;
}
int nCr(int n,int r) {
    int a = n-r;
    int  factNR= factorial(a);
    int down = factorial(r)*factorial(a);
    int answer = factorial(n)/down;
    return answer;
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
}