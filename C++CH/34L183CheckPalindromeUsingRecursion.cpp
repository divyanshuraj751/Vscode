#include <iostream>
using namespace std;

bool checkPalindrome(string s,int i,int j) {
    if(i>j) {
        return true;
    }
    if(s[i]!=s[j]) {
        return false;
    }
    else {
        return checkPalindrome(s,i+1,j-1);
    } 
}

int main() {
    string name= "abccba";
    bool IsPalindrome = checkPalindrome(name,0,name.length()-1);
    if(IsPalindrome) {
        cout<<"Yes"<<endl;
    } 
    else {
        cout<<"No"<<endl;
    }
    return 0;
}