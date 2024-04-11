#include <iostream>
using namespace std;

int ElementSum(int *arr,int size) {
    if(size == 0 ){
        return 0;
    }
    else if(size ==1){
        return arr[0];
    }
    else {
    return ElementSum(arr+1,size-1) + arr[0];
    }
}

int main() {
    int arr[8] = {2,4,6,1,6,3,7,9};
    cout<<ElementSum(arr,8);
    return 0;

}