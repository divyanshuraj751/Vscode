#include <iostream>
using namespace std;

void print(int n) {
    //base case 
    if(n==0) {
        return ;
    }
    cout<<n<<endl;    //tail recursion (prints from n to 1)
    print(n-1);

    //cout<<n<<endl;    head recursion(prints from 1 to n)
}

int main() {
    int n;
    cin>>n;

    print(n);
    return 0;
}