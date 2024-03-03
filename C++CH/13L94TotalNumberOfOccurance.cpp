#include <iostream>
using namespace std;

int FirstOccurance(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {
        if(arr[mid]==key) {
            mid = ans;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else if(arr[mid]<key) {
            s= mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int LastOccurance(int arr[],int size,int key) {
    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(arr[mid]==key){
            mid = ans;
            s = mid+1;
        }
        else if (arr[mid]>key) {
            s = mid+1;
        }
        else if(arr[mid]<key) {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int size,key,arr[100]; 
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    int LastIN = LastOccurance(arr,size,key);
    int FirstIN = FirstOccurance(arr,size,key);

    int Occ = LastIN-FirstIN+1;
    cout<<Occ<<endl;
    return 0;
}