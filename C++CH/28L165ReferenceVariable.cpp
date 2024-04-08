#include <iostream>
using namespace std;

int& func(int a) {    //BadPractice
    int num= a;
    int& ans = num;
    return ans;
}

int* fun(int n) {   //BadPractice
    int* ptr = &n;
    return ptr;
}

int main() {
    int n=5;
    cout<<func(n)<<endl;
    cout<<fun(n)<<endl;

    return 0;
}