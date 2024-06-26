#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int roq,int col) {
    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            if(arr[row][col]==target) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][4];
    /*int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}*/
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)) {
        cout<<"Element found";
    }
    else {
        cout<<"Element not found";
    }
    return 0;
}