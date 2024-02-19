#include <iostream>
using namespace std;

int duplicate(int arr[],int size) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(arr[i]==arr[j] && i!=j) {
                return arr[i];
                break;
            }
        }
    }
    return -1;}
int main() {
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    cout<<duplicate(arr,size)<<endl;
    return 0;
}