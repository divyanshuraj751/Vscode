//Notworking

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Rev(vector<int> &arr,int n) {
    for(int i=0;i<n;i++) {
        swap(arr[0],arr[n-i-1]);
        if(arr[i]>n/2){
            break;
        }
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