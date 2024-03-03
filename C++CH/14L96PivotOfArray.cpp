#include <iostream>
using namespace std;

int LargestElement(int arr[],int size) {
    int ans =0;
    int i;
    for(i=0;i<size;i++) {
        if(arr[i]>ans) {
            ans = arr[i];   
        }
    }
    return ans;
}
int Pivot(int arr[],int size){
    int Large = LargestElement(arr,size);
    int a = 0;
    for(int i=0;i<size;i++)  {
        if(Large == arr[i])
        {
            a = i;
        }
    }
    
    //ForLeft
    int ans = 0;
    for(int i=0;i<a;i++){
        ans = ans + arr[i];
    }
    //ForRight
    int ans1=0;
    for(int i=size-1;i>a;i--) {
        ans1 = ans1 + arr[i];
    }
    if(ans==ans1) {
        return a;
    }
}

int main() {
    int size,arr[100];
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<LargestElement(arr,size);
    //cout<<Pivot(arr,size);
    return 0;
} 