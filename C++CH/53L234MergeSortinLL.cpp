#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        this -> next = nullptr; 
    }
};

Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != nullptr && fast-> next != nullptr) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node* merge(Node* left,Node* right) {
    if(left == nullptr) {
        return right;
    }

    if(right == nullptr) {
        return left;
    }

    Node* ans = new Node(-1) ;
    Node* temp = ans;
    //merge 2 sorted linked list
    while(left != nullptr && right != nullptr) {
        if(left -> data < right -> data) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != nullptr) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != nullptr) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;
    return ans;
}

Node* mergeSort(Node *head) {
    //base call
    if(head == nullptr || head -> next == nullptr) {
        return head;
    }

    //break linked list into two halves, after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid -> next;
    mid -> next = nullptr;

    //recursive call to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right halves
    Node* result = merge(left,right);

    return result;
}