#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* sortList(Node* head) {
    int zeroCount = 0, oneCount = 0, twoCount = 0;

    Node* temp = head;
    // Count the number of 0s, 1s, and 2s
    while(temp != NULL) {
        if(temp->data == 0) {
            zeroCount++;
        } else if(temp->data == 1) {
            oneCount++;
        } else if(temp->data == 2) {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    // Update the linked list with sorted data
    while(temp != NULL) {
        if(zeroCount != 0) {
            temp->data = 0;
            zeroCount--;
        } else if(oneCount != 0) {
            temp->data = 1;
            oneCount--;
        } else if(twoCount != 0) {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 0 -> 1 -> 2 -> 0 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(0);
    head->next->next->next->next->next->next = new Node(1);

    cout << "Original list: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}
