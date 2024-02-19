#include <iostream>
using namespace std;

void printArray(char ch[], int size) {
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++) {
        cout<<ch[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}
int main() {
    char ch[5] = {'a','b','c','d','e'}; 
    cout<<ch[3]<<endl;
    printArray(ch,10);
    return 0;
}