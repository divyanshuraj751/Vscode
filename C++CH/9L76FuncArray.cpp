#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout<< " Printing the array" <<endl;
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}
int main() {
    int first[5]= {0};
    int last[7] = {2,3};

    printArray(first,5);
    printArray(last,7);
    return 0;
}