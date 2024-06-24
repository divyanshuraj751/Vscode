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

bool checkPalindrome(vector<int> arr) {
    int n = arr.size();
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(arr[s]!= arr[e]) {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindrome(Node* head) {
    vector <int> arr;
    Node* temp = head;
    while(temp != nullptr) {
        arr.push_back(temp->data);
        temp = temp -> next; 
    }
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
    vector<int> values = {1, 2, 3, 2, 1};
    Node* head = createList(values);

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

