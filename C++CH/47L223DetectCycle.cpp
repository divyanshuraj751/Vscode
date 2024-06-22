#include <iostream>
#include<map>
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

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }
    map<Node*,bool> visited;

    Node* temp = head;

    while(temp!= NULL) {
        //cycle is present
        if(visited[temp] == true) {
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
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
    
    if(detectLoop(head)) {
        cout<<"Cylcle is present"<<endl;
    }
    else {
        cout<<"Cycle is absent"<<endl;
    }
    return 0;
}

//tc - o(n)
//sc - o(n)