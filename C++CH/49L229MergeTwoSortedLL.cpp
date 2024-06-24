#include <iostream>
using namespace std;
template <typename T>
class Node {
    public:
    T data;
    Node* next;

    Node(T data) {
        next = nullptr;
        this -> data = data;
    }

    ~Node() {
        if(next != nullptr) {
            delete next;
        }
    }
};

Node<int>* solve(Node<int>* first,Node<int>* second) {
    //if only one element is present in first list 
    if(first -> next == nullptr) {
        first -> next = second;
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    while(next1 != nullptr && curr2 != nullptr) {
        if((curr2 -> data >= curr1 -> data) && (curr2-> data <= next1->data)) {
            //add node between the first list 
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            //update pointer
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            //go one step ahead in first list
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == nullptr) {
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first,Node<int>* second) {
    if(first == nullptr) 
        return second;

    if(second == nullptr) 
        return first;
    
    if(first -> data <= second -> data) {
        solve(first,second);
    }
    else{
        solve(second,first);
    }
}

template <typename T>
void printList(Node<T>* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create two sorted linked lists
    Node<int>* first = new Node<int>(1);
    first->next = new Node<int>(3);
    first->next->next = new Node<int>(5);

    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(6);

    cout << "First list: ";
    printList(first);

    cout << "Second list: ";
    printList(second);

    Node<int>* mergedHead = sortTwoLists(first, second);

    cout << "Merged list: ";
    printList(mergedHead);

    // Cleanup (this is optional as we use destructors to delete nodes)
    delete mergedHead;

    return 0;
}


// tc - O(n)
//sc - O(1)