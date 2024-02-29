//Notworking

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Rev(vector<int> &arr,int n) {
    for(int i=0;i<n/2;i++) {
        swap(arr[i],arr[n-i-1]);
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}


int main() {
    vector<int> arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
        arr.push_back(a);
    }
    Rev(arr,n);
}