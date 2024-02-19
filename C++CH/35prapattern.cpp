#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            if(j<=n-i+1) {
                cout<<j;
            }
            else {
                cout<<"*";
            }
        }
        for(int k=1;k<=n;k++) {
			if(i>k) {
				cout<<"*";
			}
			else {
				cout<<n-k+1;
			}
		}
        cout<<endl;
    } 
}