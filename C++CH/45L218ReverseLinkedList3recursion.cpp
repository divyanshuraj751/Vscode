#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};
//it will return head of the reverse list
Node* reverse1(Node* head) {
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    } 
    Node* smallHead = reverse1(head -> next);
    head -> next -> next = head;
    head -> next = NULL;

    return smallHead;
}

Node* reverseLinkedList(Node *head) {
    return reverse1(head);
}

void printLinkedList(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int d) {
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d) {
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    //insert at start
    if(position == 1) {
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }
    //inserting at last position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

int main() {
    Node *node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtPosition(tail,head,2,20);
    insertAtPosition(tail,head,3,98);
    insertAtPosition(tail,head,4,73);
    insertAtPosition(tail,head,5,43);
    insertAtPosition(tail,head,6,53);
    insertAtPosition(tail,head,7,63);
    insertAtPosition(tail,head,8,3);

    cout << "Original Linked List: ";
    printLinkedList(head);

    Node *reversedHead = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printLinkedList(reversedHead);

    return 0;
}

//tc - 0(n)
//sc - 0(n)

