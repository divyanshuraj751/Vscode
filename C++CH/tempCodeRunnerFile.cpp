#include <iostream>
#include <vector>
using namespace std;

int peak(int matrix[],int size) {
    int ans=-1;
    int s=0;
    int end = size-1;
    int mid = s + (end-s)/2;
    while(s<end) {
        if(matrix[mid]<matrix[mid+1]) {
            s = mid+1;
        }
        else {
            end = mid;
        }
        mid = s + (end-s)/2;
    }
    return s;
}

int main() {
    int size,matrix[6];
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>matrix[i];
    }
    cout<<peak(matrix,size);
    return 0;
}