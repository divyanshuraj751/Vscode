#include <iostream> 
using namespace std;
int main() {
    int n;
    cout<<"Enter a number\nPress 0 to exit loop\n";
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}