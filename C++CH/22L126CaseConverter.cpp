#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else {
        char temp = ch -'A' +'a';
    }
}

int main() {
    cout<<"Character is "<<toLowerCase('b')<<endl;
    cout<<"Character is "<<toLowerCase('C')<<endl;
    return 0;
}