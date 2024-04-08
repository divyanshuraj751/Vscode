#include <iostream>
using namespace std;
int main() {
    int arr[10] = {23,55,26,67};

    cout<<"Address of first memory bloack is "<<arr<<endl;
    cout<<"Address of first memory bloack is "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<< *(arr) + 1 <<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr + 2)<<endl;
    return 0;
}