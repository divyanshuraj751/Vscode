#include <iostream>
using namespace std;

void PrintSumRow(int arr[][3],int row,int col) {
    cout<<"Printing Sum Row"<<endl;
    for(int row=0;row<3;row++) {
        int sum = 0;
        for(int col=0;col<3;col++) {
            sum +=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void PrintSumCol(int arr[][3],int row,int col) {
    cout<<"Printing sum Column"<<endl;
    
    for(int i=0;i<3;i++) {
       int sum=0;
       for(int j=0;j<3;j++) {
          sum+=arr[j][i];
       }
       cout<<sum<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[3][3];
    cout<<"Enter the elements"<<endl;
    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            cin>>arr[row][col];
        }
    }
    PrintSumRow(arr,3,3);
    PrintSumCol(arr,3,3);
} 