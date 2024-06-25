#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* getMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != nullptr && fast -> next != nullptr) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

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

bool isPalindrome(Node* head) {
    if(head -> next == nullptr) {
        return true;
    }
    
   //step1 find middle
   Node* middle = getMid(head) ;

   //step2 -> reverse list after middle 
   Node* temp = middle -> next;
   middle -> next = reverse(temp);

   //step3 compare both halves
   Node* head1 = head;
   Node* head2 = middle-> next;

   while(head2 != nullptr) {
    if(head1 -> data != head2 -> data) {
        return false;
    }
    head1 = head1 -> next;
    head2 = head2 -> next;
   }

   //step4 repeat step2
   temp = middle -> next;
   middle -> next = reverse(temp);
   return true;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    cout << "Original list: ";
    printList(head);

    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    // Cleanup
    delete head;

    return 0;
}
