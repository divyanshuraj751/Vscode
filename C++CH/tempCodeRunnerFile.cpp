#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int k;
    cin >> k;

    sort(A.begin(), A.end());
    /*for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }*/
    cout << endl;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
           ans = i;
        }
        break;
    }
    cout<<ans+1<<endl;    
}
