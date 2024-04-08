#include <iostream>
using namespace std;

void update(int **p) {    // change **p to **p2 for third case
    //p = p + 1;   no change
    //*p = *p + 1;   //change will happen
    //**p2 = **p2 + 1;   change will happen
}

int main() {
    int i=5;
    int *p=&i;
    int **p2= &p;

    cout<<"Before "<< i <<endl;
    cout<<" Before "<<p<<endl;
    cout<<"Before "<<p2<<endl;

    update(p2);
    
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"Ater "<<p2<<endl;
}