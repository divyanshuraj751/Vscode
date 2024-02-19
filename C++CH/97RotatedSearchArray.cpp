#include <iostream>
using namespace std;

int getPivot(int arr[],int n) {
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    
    while(s<e) {
        if(arr[mid]>=arr[0]) {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binarySearch(int arr[],int s,int e,int key) {
    int start=s,end=e;
    int mid = s +(e-s)/2;

    while(s<=e) {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key) {
            s = mid +1;
        }
        else {
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
    return -1;
}

int findPosition(int arr[],int n,int key) {
    int pivot = getPivot(arr,n);
    
    if(key>=arr[pivot] && key<=arr[n-1]) {
        return binarySearch(arr,pivot,n-1,key);
    }
    else {
        return binarySearch(arr,0,pivot-1,key);
    }
}

int main() {
    int n,key,arr[100];
    cout<<"Size of array";
    cin>>n;
    cout<<"Elements of array";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the key";
    cin>>key;

    findPosition(arr,n,key);
    return 0;
}