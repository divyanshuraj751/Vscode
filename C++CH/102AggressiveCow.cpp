#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[],int size,int k,int mid) {
    int cowCount = 1;
    int lastPos = arr[0];
    
    for(int i=0;i<size;i++) {
        if(arr[i]-lastPos>=mid) {
            cowCount++;
            if(cowCount==k) {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[],int size,int k) {
    sort(arr,arr+size);
    int s = 0 ;
    int maxi = -1;
    for(int i=0;i<size;i++) {
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(isPossible(arr,size,k,mid)) {
            ans = mid;
            s = mid +1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int arr[100];
    int k,size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the number of aggressive cow"<<endl;
    cin>>k;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<aggressiveCows(arr,size,k)<<endl;
    return 0;
}