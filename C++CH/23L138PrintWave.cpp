#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            if(row%2==0) {
            cout<<arr[col][row]<<" ";
            }
            else{
                cout<<arr[2-col][row]<<" ";
            }
        }
    }
}