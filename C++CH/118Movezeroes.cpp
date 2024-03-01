#include <iostream>
#include <algorithm>
using namespace std;

void Move(int arr[],int size) {
    int i=0;
    for(int j=0;j<size;j++) {
        if(arr[j]!=0) {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size,arr[100];
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    Move(arr,size);
    return 0;
}