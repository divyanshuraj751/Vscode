#include <iostream>
using namespace std;

// Node class representing an element of the linked list
class Node {
    public:
    int data;
    Node* next;
    
    // Constructor to initialize the node
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse nodes of the linked list in groups of size k
Node* kReverse(Node* head, int k) {
    // Base case: If head is NULL, return NULL
    if (head == NULL) {
        return NULL;
    }

    // Step 1: Reverse the first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    // Reverse the first k nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Recursion for the remaining list
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // Step 3: Return the new head of the reversed list
    return prev;
}

// Helper function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
Node* createList(int arr[], int size) {
    if (size == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

int main() {
    // Example usage:
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    Node* head = createList(arr, size);

    cout << "Original list: ";
    printList(head);

    head = kReverse(head, k);

    cout << "Reversed list in groups of " << k << ": ";
    printList(head);

    return 0;
}

//tc - 0(n)
//sc - 0(n)