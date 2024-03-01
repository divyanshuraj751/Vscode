#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse(vector<int> v ) {
    int s =0;
    int e = v.size()-1;

    while(s<e) {
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1+val2+carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}
int main() {
   int n,m,x,y;
   cin>>n>>m;
   vector<int> a;
   vector<int> b;
   for(int i=0;i<n;i++) {
       cin>>x;
       a.push_back(x);
   }
   for(int i=0;i<m;i++) {
    cin>>y;
    b.push_back(y);
   }
   vector<int> result =findArraySum(a,n,b,m);
   for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
