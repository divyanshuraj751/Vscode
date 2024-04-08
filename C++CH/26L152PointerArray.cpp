#include <iostream>
using namespace std;
int main() {
    int temp[10] = {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<"size of element "<<sizeof(*temp)<<endl;
    cout<<"Size of address "<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    return 0;
}