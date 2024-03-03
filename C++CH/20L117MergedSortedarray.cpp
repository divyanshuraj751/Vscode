#include <iostream>
#include <algorithm>
using namespace std;

void arraySort(int arr1[],int arr2[],int size1,int size2) {
    int arr3[100];
    for(int i=0;i<size1;i++) {
        arr3[i]=arr1[i];
    }
    for(int i=size1,j=0;i<size1+size2,j<size2;i++,j++) {
        arr3[i]=arr2[j];
    }
    sort(arr3,arr3+size1+size2);
    for(int i=0;i<size1+size2;i++) {
        cout<<arr3[i]<<" ";
    }
}

int main() {
    int size1,size2;
    int arr1[100],arr2[100];
    cin>>size1>>size2;
    for(int i=0;i<size1;i++) {
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++) {
        cin>>arr2[i];
    }
    arraySort(arr1,arr2,size1,size2);
}