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

Node* uniqueSortedList(Node* head) {
    //empty list 
    if(head == NULL) {
        return NULL;
    }

    //non-empty list 
    Node* curr = head;

    while(curr != NULL) {
        if((curr->next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else {
            //not equal
            curr = curr -> next;
        }
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to insert a new node at the end of the list
void insertAtEnd(Node* &head, int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    cout << "Original List: ";
    printList(head);

    head = uniqueSortedList(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}


//tc - o(n)
//sc - o(1)