#include <iostream>
using namespace std;
int main() {
    int row,column,i,j;\
    cout<<"Print a hollow Rectangle pattern\n";
    cout<<"Enter the numbers of rows\n";
    cin>>row;
    cout<<"Enter the numbers of colums\n";
    cin>>column;
    for(i = 1;i<=row;i++) {
        for (int j = 1;j<=column;j++) {
            if (i==1 || i==row || j==1 || j==column) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}