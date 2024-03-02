#include <iostream>
using namespace std;

void rev(char name[]) {
    int count =0;
    for(int i=0;name[i]!='\0';i++) {
        count++;
    }

    for(int i=count-1;i>=0;i--) {
        cout<<name[i];
    }
}
int main() {
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;

    rev(name);
    return 0;
}