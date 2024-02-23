#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout<<"Enter the numbers of rows\n";
    cin>>n1;
    cout<<"Enter the numbers of columns\n";
    cin>>n2;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}