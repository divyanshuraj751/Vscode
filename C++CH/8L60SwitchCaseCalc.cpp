#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    
    char op;
    cin>>op;
    switch(op) {
        case '+': cout<< a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        case '%':cout<<a%b<<endl;
        break;
        default : cout<<"Wrong Input"<<endl;
    }
    return 0;
}