#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* getMiddle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to print the middle node
void printMiddle(Node* head) {
    Node* middle = getMiddle(head);
    if (middle != NULL) {
        cout << "Middle node: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }
}

int main() {
    // Creating a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Printing the list
    cout << "Linked list: ";
    printList(head);

    // Printing the middle node
    printMiddle(head);

    return 0;
}


//tc - 0(n)
//sc - 0(1)