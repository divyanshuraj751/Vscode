#include <iostream>
using namespace std;
int main() {
    char ch='1';
    int num=1;
    
    switch(ch) {
        case 1: cout<<"First"<<endl;
                cout<<"First Again"<<endl;
                break;
        case '1': switch(num) {
            case 1: cout<<"Value of num  is "<<num<<endl;
            break;
        }
        break;
        default: cout<<"It is a default case "<<endl;
    }
    return 0;
}