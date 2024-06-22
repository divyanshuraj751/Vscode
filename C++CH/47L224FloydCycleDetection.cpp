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

Node* floydDetectLoop(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL) {
        return NULL;
    }
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head) {
    if(head == NULL) {
        return;
    }
    Node* startofLoop = getStartingNode(head);
    
    Node* temp = startofLoop;

    while(temp -> next != startofLoop) {
        temp = temp -> next;
    }

    temp -> next = NULL;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
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

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtPosition(tail,head,4,22);
    print(head);

    tail -> next = head -> next;

    cout<<"head "<<head -> data <<endl;
    cout<<"tail "<<tail->data<<endl;
    
    if(floydDetectLoop(head)) {
        cout<<"Cycle is Present "<<endl;
    }
    else {
        cout<<"No cycle "<<endl;
    }
    Node* loop = getStartingNode(head);
    cout<<"Loop starts at "<< loop -> data <<endl;

    removeLoop(head);
    print(head);

    return 0;
}

//tc - o(n)
//sc - o(1)