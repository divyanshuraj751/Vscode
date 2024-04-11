#include <iostream>
using namespace std;

void print(int arr[],int s,int e) {
    for(int i=s;i<e;i++) {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}


bool BinarySearch(int *arr,int s,int e,int key) {
    cout<<endl;
    print(arr,s,e);

    //base Case
    //elementNotFound   (base case)
    if(s>e) {
        return false;
    }
    int mid = s + (e-s)/2;
    cout<<"Value of arr mid is"<<arr[mid]<<endl;
    

    //elementFound    (base case)
    if(arr[mid]==key) {
        return true;
    }

    
    if(arr[mid] < key) {
        return BinarySearch(arr,mid + 1, e, key);
    }
    else {
        return BinarySearch(arr,s,mid-1,key);
    }
}

int main() {
    int arr[8]= {2,35,4,67,54,85,92,90};
    cout<<endl;
    (BinarySearch(arr,0,8,92)==true) ? cout<<"Yes" : cout<<"No";
    return 0;
}