//Wrong
#include <iostream>
using namespace std;

int unique(int arr[],int size){
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(arr[i]^arr[j] && i!=j) {
                return arr[j];
                break;
            }
        }
    }
    return -1;
}
int main() {
    int m;
    cin>>m;
    int size= 2*m+1;
    int arr[100];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    int ans=unique(arr,size);
    cout<<ans<<endl;
    return 0;
}