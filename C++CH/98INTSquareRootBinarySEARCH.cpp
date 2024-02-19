#include <iostream>
using namespace std;

long long int sqrt(int key) {
    int s=0,e=key;
    long long int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {
        if(mid*mid==key) {
            return mid;
        }
        else if(mid*mid<key) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int key;
    cin>>key;
    cout<<sqrt(key);
    return 0;
}