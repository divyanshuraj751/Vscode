#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    switch(num) {
        case 1: cout<<"First"<<endl;
        break;
        case 2:cout<<"second"<<endl;
        break;
        default: cout<<"It is a default case"<<endl;
    }
    return 0;
}