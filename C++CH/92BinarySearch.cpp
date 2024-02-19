#include <iostream>
#include <vector>
using namespace std;

int binarysearch(int arr[100],int size,int key){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if (arr[mid]>key){
        e=mid-1;
    }
    else {
        s=mid+1;
    }
    mid = s +(e-s)/2;
    }
}

int main() {
    int size,key,arr[100];
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    cin>>key;

    cout<<binarysearch(arr,size,key)<<endl;
    return 0;
}
