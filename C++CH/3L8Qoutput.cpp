#include <iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=122) {
        cout<<"The letter is lowercase";
    }
    else if(ch>=65 && ch<=90) {
        cout<<"The letter is Upper Case";
    } 
    else if(ch>=48 && ch<=57) {
        cout<<"This is numeric";
    }
    return 0;
}             