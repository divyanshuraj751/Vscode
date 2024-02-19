#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}
void Short(int arr[],int size){
    int left=0,right=size-1;
    while(left<right) {
        while(arr[left] == 0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
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

    Short(arr,size);
    printArray(arr,size);
    return 0;
}