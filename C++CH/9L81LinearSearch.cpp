#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int n) {
    for(int i=0;i<size;i++) {
        if(arr[i]==n) {
            return i;
        }
    }
}
int main() {
    int size;
    cin>>size;
    
    int arr[100];

    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    int n;
    cin>>n;
    cout<<"Position of element is"<<endl;
    cout<<LinearSearch(arr,size,n)<<endl;
    return 0;
}