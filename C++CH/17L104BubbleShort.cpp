#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n) {
    for(int i=1;i<n;i++) {
        bool swapped = false;
       for(int j=0;j<n-i;j++) {
        if(arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
       }
       if(swapped == false){
        break;
       }
    }
   for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
   }
}

int main() {
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    return 0;
}