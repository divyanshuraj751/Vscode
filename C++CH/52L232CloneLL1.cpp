#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = nullptr;
        random = nullptr;
    }
};

void  insertAtTail(Node* &head,Node* &tail,int d) {
    Node* newNode = new Node(d);
    if(head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    else {
        tail -> next = newNode;
        tail = newNode;
    }

}

Node* copyList(Node* head) {
    //step1 create a clone list
    Node* cloneHead = nullptr;
    Node* cloneTail = nullptr;

    Node* temp = head;

    while(temp != nullptr) {
        insertAtTail(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
    }

    //step2 create map
    unordered_map<Node*, Node*> oldToNew;
    Node* orignalNode = head;
    Node* cloneNode = cloneHead;
    while(orignalNode != nullptr) {
        oldToNew[orignalNode] = cloneNode;
        orignalNode = orignalNode -> next;
        cloneNode = cloneNode -> next;
    }

    orignalNode = head;
    cloneNode = cloneHead;

    while(orignalNode != nullptr) {
        cloneNode -> random = oldToNew[orignalNode -> random];
        orignalNode = orignalNode -> next;
        cloneNode = cloneNode -> next;
    }
    return cloneHead;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "Node data: " << temp->data;
        if (temp->random) {
            cout << ", Random data: " << temp->random->data;
        } else {
            cout << ", Random data: NULL";
        }
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    // Create the original list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Set up random pointers
    head->random = head->next->next;         // 1 -> 3
    head->next->random = head;               // 2 -> 1
    head->next->next->random = head->next->next->next->next; // 3 -> 5
    head->next->next->next->random = head->next->next;       // 4 -> 3
    head->next->next->next->next->random = head->next;       // 5 -> 2

    cout << "Original list:" << endl;
    printList(head);

    Node* clonedList = copyList(head);

    cout << "Cloned list:" << endl;
    printList(clonedList);

    return 0;
}