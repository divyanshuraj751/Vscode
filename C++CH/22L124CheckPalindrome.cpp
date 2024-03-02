//method1
#include <iostream>
#include <algorithm>
using namespace std;

int RevStr(char String[]){ 
    int count = 0;
    int i=0;
    while(String[i]!='\0') {
        count++;
        i++;
    }
    char str1[50];
    for(int i=0;i<count;i++){
        str1[i]=String[count-i-1];
    }

    for(int i=0;i<count;i++) {
        if(str1[i]==String[i]) {
            continue;
        }
        else{
            return false;
        }
    }
    return true; 
}

int main() {
    char String[50];
    cin>>String;
    int yes = RevStr(String);
    if(yes==true){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}