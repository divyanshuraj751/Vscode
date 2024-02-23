#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(int i = 2;i<n;i++)  {
        if(n%i == 0) {
            cout<<"The number is not a prime number";
            goto end;
        }
    }
    cout<<"The number is a prime number";
    end:
    return 0;
}