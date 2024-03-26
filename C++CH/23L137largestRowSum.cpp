#include <iostream>
#include <limits.h>
using namespace std;

int largestrowSum(int arr[][3],int row,int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0;row<3;row++) {
        int sum = 0;
        for(int col=0;col<3;col++) {
            sum += arr[row][col];
        }
        if(sum>maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return row;
}

int main() {
    int arr[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<largestrowSum(arr,3,3);
}

