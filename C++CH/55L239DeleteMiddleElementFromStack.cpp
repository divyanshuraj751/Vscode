#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size) {
    //base case 
    if(count == size/2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //Recursive Call
    solve(inputStack,count+1,size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N) {
    int count = 0;
    solve(inputStack ,count , N);
}

int main() {
    stack<int> inputStack;
    int n;

    // Input the number of elements
    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    // Input the elements into the stack
    cout << "Enter the elements of the stack:" << endl;
    for(int i = 0; i < n; i++) {
        int element;
        cin >> element;
        inputStack.push(element);
    }

    // Delete the middle element
    deleteMiddle(inputStack, n);

    // Print the stack after deleting the middle element
    cout << "Stack after deleting the middle element:" << endl;
    while(!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    return 0;
}