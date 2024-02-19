#include <iostream>
using namespace std;

void Finder(int arr[],int size,int key) {
    for(int i=0;i<size;i++) {
        if(arr[i]==key) {
            cout<<i<<" ";
            break;
        }
    }
    for(int j=size-1;j>=0;j--) {
        if(arr[j]==key) {
            cout<<j<<" ";
            break;
        }
    }
}

int main() {
    int arr[100],size,key;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    cin>>key;

    Finder(arr,size,key);
    return 0;
}