#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    // address of Operator - &
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;
    cout<<"Value is "<<*ptr<<endl;
    cout<<"Address is "<<ptr<<endl;

    double d = 4.5;
    double *p2 = &d;

    cout<<"Address is "<<p2<<endl;
    cout<<"Value is "<<*p2<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer "<<sizeof(p2)<<endl;   //size of pointer is same always is 8byte
    return 0;
}     