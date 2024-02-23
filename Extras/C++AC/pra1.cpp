#include <iostream>
using namespace std;

int PrintPrime(int a,int b) {
    int num,i;
    num=1;
    do{
      for(i=a;i<=b;i++) {
        if(i%num==0) {
            break;
        }
        else{
            cout<<i<<",";
        }
      }
    }while(num<=b);
    return i;
}
int main() { 
    int a,b;
    cin>>a>>b;

    PrintPrime(a,b);
    return 0;
}