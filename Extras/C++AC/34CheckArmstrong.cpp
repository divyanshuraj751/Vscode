#include <iostream>
#include <math.h>
using namespace std;
int main() {    
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int sum = 0;
    int orignaln = n;
    
    while(n>0) {
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;
    }

    if(sum == orignaln) {
        cout<<"Armstorng number"<<endl;
    }
    else{
        cout<<"Not armstrong"<<endl;
    }
    return 0;
}