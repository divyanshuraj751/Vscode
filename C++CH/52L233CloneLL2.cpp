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

void insertAtTail(Node* &head,Node* &tail,int d) {
    Node* newNode = new Node(d);

    if(head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail -> next = newNode;
        tail = newNode;
    }
}

Node* copyList(Node* head) {
    //step 1: create a clone list
    Node* cloneHead = nullptr;
    Node* cloneTail = nullptr;

    Node* temp = head;
    while(temp != nullptr) {
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp = temp -> next;
    }
    //step 2: cloneNodes add between Orignal List
    Node* orignalNode = head;
    Node* cloneNode = cloneHead;

    while(orignalNode != nullptr && cloneNode != nullptr) {
        Node* next = orignalNode-> next;
        orignalNode -> next = cloneNode;
        orignalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = orignalNode;
        cloneNode = next;
    }
    //step 3: random pointer copy
    temp = head;
    while(temp != nullptr) {
        if(temp -> next != nullptr ) {
            temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
        }
        temp = temp -> next -> next;
    }
    //step 4: revert changes made in step2
    orignalNode = head;
    cloneNode = cloneHead;

    while(orignalNode != nullptr && cloneNode != nullptr) {
        orignalNode -> next = cloneNode -> next;
        orignalNode = orignalNode -> next;
        if(orignalNode!=nullptr) {
        cloneNode -> next = orignalNode -> next;
        }
        cloneNode = cloneNode ->next;
    }

    //step: return ans
    return cloneHead;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << "Node data: " << head->data;
        if (head->random) {
            cout << ", Random points to: " << head->random->data << endl;
        } else {
            cout << ", Random points to: nullptr" << endl;
        }
        head = head->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Setting up random pointers
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head->next;

    cout << "Original list:" << endl;
    printList(head);

    Node* cloneHead = copyList(head);

    cout << "\nCloned list:" << endl;
    printList(cloneHead);

    return 0;
}

//tc - o(n)
//sc - o(1)