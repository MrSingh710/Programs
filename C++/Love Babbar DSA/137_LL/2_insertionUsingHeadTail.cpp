#include <iostream>
using namespace std;


class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    Node() {                // how default constructor looks
        this -> prev = NULL;
        this -> data = 0;
        this -> next = NULL;
    }
    Node(int data) {        // Parameterised constructor for data input
        this -> prev = NULL;
        this -> data = data;
        this -> next = NULL;
    }
};


// Printing the LL
void print(Node* &head) {
    Node* temp = head;
    while(temp) {       // When temp will point to NULL, loop stops
        cout << temp -> prev << "  | ";
        cout << temp -> data << " | ";
        cout << temp -> next << "  <->  ";
        temp = temp -> next;        // After printing the node(data & next pointer), head pointer will point to the next node 
    }
    cout << endl;
}

// Finding the length of LL
int lengthOfLL(Node* &head) {
    Node* temp = head;
    int length = 0;
    while(temp) {       // When temp will point to NULL, loop stops
        length++;
        temp = temp -> next;
    }
    return length;

}


void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    // If LL is empty
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;

}


void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    // When no node is present
    if(head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    // When only one node is present
    if(head == NULL) {
        head = tail;
    }
    else if(tail == NULL) {
        tail = head;
    }


    tail -> next = newNode;
    newNode -> prev = tail;
    tail = newNode;

}


void insertAtPosition(int position, Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    // When no node is present
    if(head == NULL && tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    // When only one node is present
    if(head == NULL) {
        head = tail;
    }
    else if(tail == NULL) {
        tail = head;
    }
    
    if(position == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    if(position > lengthOfLL(head)) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* prevNode = head;

    position--;
    while(--position) {
        prevNode = prevNode -> next;
    }

    newNode -> prev = prevNode;
    newNode -> next = prevNode -> next;
    prevNode -> next -> prev = newNode;
    prevNode -> next = newNode;

}
