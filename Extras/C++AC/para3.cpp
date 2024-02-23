#include <iostream>
using namespace std;

/*int main() {
    int n;
    cin>>n;
    //part1
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=i) {
            cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    
    //part4
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=i) {
            cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

int binarySearch(int arr[],int n,int key) {
      
}

int main() {
   int n,key;
   cout<<"Enter the size of array\n";
   cin>>n;
   cout<<"Enter the element of array\n";
   int arr[n];
   for(int i=0;i<n;i++) {
    cin>>arr[i];
   }
   cout<<"Enter the element to search";
   cin>>key;

   binarySearch(arr,n,key);
}