#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int x=1;
    for (int i=1;i<=a;i++) {
        for(int j=1;j<=a;j++) {
            cout<<x<<" ";
            x++; 
        }
        
        cout<<endl;
    }
}