//method2
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

bool Palindrome(char str[]) {
    int count=0;
    int i=0;
    while(str[i]!='\0') {
        count++;
        i++;
    }
    for(int i=0;i<count/2;i++) {
        if(toLowerCase(str[i])==toLowerCase(str[count-1-i])) {
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main() {
    char str[50];
    cin>>str;
    
    bool check = Palindrome(str);
    if(check==false){
        cout<<"No";
    }
    else {
        cout<<"Yes";
    }
}