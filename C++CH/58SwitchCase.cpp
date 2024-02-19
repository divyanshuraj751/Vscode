#include <iostream>
using namespace std;
int main() {
    char ch ='a';
    switch(ch) {
        case 1: cout<<'First'<<endl;
        break;
        case '1':cout<<"It is a default case"<<endl;
        break;
        default: cout<<"It is a default case"<<endl;
    }
    cout<<endl;
    return 0;
}