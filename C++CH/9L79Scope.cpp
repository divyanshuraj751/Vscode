#include <iostream>
using namespace std; 
void update(int arr[],int n) {     //call by reference
    cout<<"Inside the function"<<endl;
    arr[0]=123;
    for(int i=0;i<3;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;
}
int main() {
    int arr[3]={1,2,3};
    update(arr,3);

    for(int i=0;i<3;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}