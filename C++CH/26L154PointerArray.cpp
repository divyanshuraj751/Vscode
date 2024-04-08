#include <iostream>
using namespace std;
int main() {
    //error
    //arr = arr+1;
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 1 ;
    cout<<ptr<<endl;
}