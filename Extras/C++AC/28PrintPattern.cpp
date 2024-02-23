#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Half Pyramid After 180 degree rotation\n";
   cout<<"Enter the numbers of rows\n";
   cin>>n;

   for(int i=1;i<=n;i++){
      for (int j =1;j<=n;j++) {
        if(j<=n-i) {
            cout<<" ";
        }
        else {
            cout<<"*";
        }
      }
      cout<<endl;
   }
   return 0;
}