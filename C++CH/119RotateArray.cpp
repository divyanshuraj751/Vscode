//Self
#include<iostream>
using namespace std;

void Rotate(int arr[],int size,int k) {
    int arr1[100];
    for(int i=0;i<size;i++) {
        arr1[i+k]=arr[i];
    }
    for(int i=size-k,j=0;i<size,j<k;i++,j++) {
        arr1[j]=arr[i];
    }
    arr= arr1;
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[100],k,size;
    cin>>size>>k;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    Rotate(arr,size,k);
}