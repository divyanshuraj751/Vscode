#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
 
        for (int j = 1; j <= n; j++)
        {
            if(j>=i) {
                cout<<j-i+1;
            }
            else {
                cout<<" ";
            }
            
        }
        for(int k=n-i+1;k>1;k--){
            cout<<k-1;
        }
        cout << endl;
    }
}
