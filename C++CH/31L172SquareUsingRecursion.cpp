#include <iostream>
using namespace std;

int power(int n) {
    //base case 
    if(n==0) {
        return 1;
    }

    //recursive Relation
    /*int smallerproblem = power(n-1);
    int biggerProblem = 2 * smallerproblem;

    return biggerProblem;*/

    return 2*power(n-1);
}

int main() {
    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;
    return 0;
}