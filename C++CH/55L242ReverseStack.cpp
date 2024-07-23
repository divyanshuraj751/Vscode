#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stack,int element) {
    //basecase
    if(stack.empty()) {
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    insertAtBottom(stack,element);

    stack.push(num);
}

void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original stack: ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    reverseStack(s);

    cout << "Reversed stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}

//tc - o(n^2)