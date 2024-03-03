#include <iostream>
using namespace std;

void TripletSum(int arr[],int size,int sum) {
    for(int i=0;i<size;i++) { 
        for(int j=i+1;j<size;j++){ 
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==sum) {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
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
    cout<<"Enter the sum"<<endl;
    int sum;
    cin>>sum;
    TripletSum(arr,size,sum);
    return 0;
}