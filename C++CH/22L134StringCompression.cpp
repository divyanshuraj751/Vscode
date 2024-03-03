#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n) {
        int j= i + 1;
        while(j<n && chars[i]==chars[j]) {
            j++;
        }
        chars[ansIndex++]= chars[i];
        int count = j-i;
        if(count>1) {
            string cnt = to_string(count);
            for(char ch:cnt) {
                chars[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;
}

int main() {
    vector<char> chars;
    int size;
    char ch;
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>ch;
        chars.push_back(ch);
    }
    cout<<compress(chars);
}


//input- aabbbccc
//Output- a2b3c3