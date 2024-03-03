#include <iostream>
using namespace std;

void PairSum(int arr[],int size,int sum) {
    for(int i=0;i<size;i++) {
        for(int j=i+1;j<size;j++) {
            if(sum==arr[i]+arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
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
    
    PairSum(arr,size,sum);
    
    return 0;
} 