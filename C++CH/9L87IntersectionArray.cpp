#include <iostream>
using namespace std;

void Intersection(int arr[],int arr1[],int size,int size1) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size1;j++) {
            if(arr[i]==arr1[j]){
                cout<<arr1[j]<<" ";
                break;
            }
        }
    }
}

int main() {
    int size,size1;
    int arr[100];
    int arr1[100];
    cout<<"Size of First Array"<<endl;
    cin>>size;
    cout<<"Size of second Array"<<endl;
    cin>>size1;
    cout<<"First Array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"For second array"<<endl;
    for(int i=0;i<size1;i++) {
        cin>>arr1[i];
    }

    Intersection(arr,arr1,size,size1);
    return 0;

}