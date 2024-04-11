#include <iostream>
using namespace std;
int WayToClimb(long long nStairs) {
    if(nStairs<0) {
        return 0;
    }
    if(nStairs==0) {
        return 1;
    }

    int ans = WayToClimb(nStairs-1) + WayToClimb(nStairs-2);
    return ans;

}

int main()  {
    int n;
    cin>>n;
    cout<<WayToClimb(n);
}