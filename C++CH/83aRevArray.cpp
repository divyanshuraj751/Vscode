#include <iostream>
using namespace std;

int main() {
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

   int arr1[100];
	for(int i=0; i<size; i++) {
    arr1[i] = arr[size-i-1];
	/*if(size-i-1<0) {
		break;
	}*/
}

	for(int j=0;j<size;j++) {
		cout<<arr1[j]<<" ";
	}
   return 0;
}