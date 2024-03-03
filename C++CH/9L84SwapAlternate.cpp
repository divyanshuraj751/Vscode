//why nested if statement
#include <iostream>
using namespace std;

void SwapAlter(int arr[],int size) {
    int arr1[100]={0};
    for(int i = 0;i<size;i++){
        if(i%2==0 || i == 0) {
            if(i+1<size) {
            arr1[i]=arr[i+1];
            }
            else {
                arr1[i]=arr[i];
            }
        }
        else {
            arr1[i]=arr[i-1];
        }
    }

    for(int i=0;i<size;i++) {
    cout<<arr1[i]<<" ";
    }
}

int main() {
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    SwapAlter(arr,size);
    return 0;

}