#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 1;
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=n;j++) {
            if(i>j) {
                cout<<" ";
            }
            else {
                cout<<count;
            }
            
        }
        count++;
        cout<<endl;
    }
}