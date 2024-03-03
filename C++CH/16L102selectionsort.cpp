#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j = i+1;j<n;j++) {
            if(arr[j]<arr[i]) {
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n,arr[100];
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    return 0;
}