#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while(curr!= nullptr) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr ;
        curr = next;
    }
    return prev;
}

void insertAtTail(struct Node* &head,struct Node* &tail,int val) {
    Node* temp = new Node(val); 
    //empty list
    if(head == nullptr) {
        head = temp;
        tail = temp;
        return;
    }
    else {
        tail -> next = temp;
        tail = temp;
    }
}

struct Node* add(struct Node* first,struct Node* second) {
    int carry = 0;
    Node* ansHead = nullptr;
    Node* ansTail = nullptr;
    while(first != nullptr || second != nullptr || carry != 0) {
        int val1 = 0;
        if(first != nullptr) {
            val1 = first -> data;
        }

        int val2 = 0;
        if(second != nullptr) {
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;
        int digit = sum%10;
        //create node and add in answer linked list
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        if(first != nullptr)
            first = first -> next;
        if(second !=nullptr)
            second = second -> next;

    }
    return ansHead;
}

struct Node* addTwoLists(struct Node* first,struct Node* second) {
    //step1 reverse input linkedlist
    first = reverse(first);
    second = reverse(second);

    //step2 add2 ll
    Node* ans = add(first,second);

    //step3 
    ans = reverse(ans);
    return ans;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* first = new Node(3);
    first->next = new Node(4);
    first->next->next = new Node(2); // Represents the number 243

    Node* second = new Node(4);
    second->next = new Node(6);
    second->next->next = new Node(5); // Represents the number 564

    Node* result = addTwoLists(first, second); // Should represent the number 807

    printList(result); // Output: 8 0 7

    return 0;
}

//tc- o(m+n)
//sc- o(max(m,n))