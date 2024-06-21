#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

bool isCircular(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp!= NULL && temp != head) {
        temp = temp -> next;
    }

    if(temp == head) {
        return true;
    }

    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head; // Pointing back to the head, making it circular

    if (isCircular(head)) {
        cout << "Circular linked list" << endl;
    } else {
        cout << "Not a circular linked list" << endl;
    }

    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}

//tc-0(n)
//sc-0(1)