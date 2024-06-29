#include <iostream>
using namespace std;

class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;

public:
    //inatialize twostack
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    //push in stack1
    void push1(int num) {
        //atleast a empty space is present
        if(top2-top1 > 1) {
            top1++;
            arr[top1] = num;
        }
        else {
            cout<<"Stack Overflow "<<endl;
        }
    }


    //push in stack2
    void push2(int num) {
        if(top2-top1 > 1) {
            top2--;
            arr[top2] = num;
        }
    }

    //pop from stack1 and return popped element
    int pop1() {
        if(top1 >= 0 ) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else {
            return -1;
        }
    }

    //pop from stack2 and return popped element
    int pop2 () {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else {
            return -1;
        }
    }

     // Destructor to free allocated memory
    ~TwoStack() {
        delete[] arr;
    }
};

int main() {
    TwoStack ts(10);

    ts.push1(5);
    ts.push2(10);
    ts.push1(15);
    ts.push2(20);

    cout << "Popped from stack1: " << ts.pop1() << endl; // Should print 15
    cout << "Popped from stack2: " << ts.pop2() << endl; // Should print 20
    cout << "Popped from stack1: " << ts.pop1() << endl; // Should print 5
    cout << "Popped from stack2: " << ts.pop2() << endl; // Should print 10

    return 0;
}