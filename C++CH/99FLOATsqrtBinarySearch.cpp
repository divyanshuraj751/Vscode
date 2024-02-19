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

double MorePrecision(int key,int precision,int tempsoln) {
    double factor =1;
    double ans = tempsoln;
    for(int i=0;i<precision;i++) {
        factor = factor/10;
        for(double j=0;j*j<key;j= j+factor) {
           ans = j;
        }
    }
    return ans;
}
int main() {
    int key;
    cin>>key;

    int tempsoln = sqrt(key); 
    cout<<"Answer is "<<MorePrecision(key,3,tempsoln);
    return 0;
}