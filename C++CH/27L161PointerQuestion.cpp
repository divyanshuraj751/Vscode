#include <iostream>
using namespace std;

/*  void update(int *p) {
    *p = (*p)*2;
}

int main() {
    int i=10;
    update(&i);
    cout<<i<<endl;
}    */

/*    void fun(int arr[]) {
    cout<<arr[0]<<" ";
}

int main() {
    int arr[] = {11,12,13,14};
    fun(arr+1);
    cout<<arr[0]<<endl;
}          */

void square(int *p) {
    int a = 70;
    p = &a;
    *p = (*p) * (*p);
}

int main()  {
    int a = 70;
    square(&a);
    cout<<a<<endl;
}