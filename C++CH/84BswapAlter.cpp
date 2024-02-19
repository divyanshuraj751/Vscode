#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size) {
    for(int i=0;i<size;i+=2) {
        if(i+1<size) {
        swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    int even[8] = {5,3,6,7,8,4,9,67};
    int odd[5] = {11,34,55,35,67};

    swapAlternate(even,8);
    printArray(even,8);
    return 0; 
}