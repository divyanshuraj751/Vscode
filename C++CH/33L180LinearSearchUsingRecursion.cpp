#include <iostream>
using namespace std;

bool LinearSearch(int *arr,int size,int key) {
    if(size==0) {
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else {
        return LinearSearch(arr+1,size-1,key);
    }
    
}

int main() {
    int arr[8] = {24,346,687,12,63,74,96,45};
    int key ;
    cin>>key;
    (LinearSearch(arr,8,key) == true) ? cout<<"Yes" : cout<<"No";
    return 0;
}