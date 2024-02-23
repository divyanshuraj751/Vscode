#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int key) {
    for(int i=0;i<n;i++) {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
} 

int main() {
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    cout<<"The position of "<<key<<" is"<<endl;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}