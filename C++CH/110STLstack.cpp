#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Mango");
    s.push("Banana");
    s.push("Apple");

    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    
    cout<<"Size of stack"<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl; 
}