#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& s,int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int> &mystack,int x) {
    solve(mystack,x);
    return mystack;
}

int main() {
    stack<int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);

    int x = 0;
    mystack = pushAtBottom(mystack, x);

    // Print the stack elements
    while (!mystack.empty()) {
        cout << mystack.top() << " ";
        mystack.pop();
    }
    return 0;
}
