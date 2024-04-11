#include <iostream>
using namespace std;

// Creating data structure Node
class Node {
    public:
    int data;
    Node* next;

    Node() {
        this -> data = 0;
        this -> next = NULL;
    }
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};


// Printing the LL
void print(Node* &head) {
    Node* temp = head;
    while(temp) {       // When temp will point to NULL, loop stops
        cout << temp -> data << " | ";
        cout << temp -> next << "  ->  ";
        temp = temp -> next;        // After printing the node(data & next pointer), head pointer will point to the next node 
    }
    cout << endl;
}

// Finding the length of LL
int findLength(Node* &head) {
    Node* temp = head;
    int length = 0;
    while(temp) {       // When temp will point to NULL, loop stops
        length++;
        temp = temp -> next;
    }
    return length;

}


// Insertion of nodes before the head node
void insertAtHead(Node* &head, Node* &tail, int data) {
    
    // Creation of new node
    Node* newNode = new Node(data);

    // When inserting first node
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;         // For coming out of the function
    }

    // Linking the new node to the head node
    newNode -> next = head;

    // Making the new node as head node
    head = newNode;

}


// Inserts the node at the end of the LL
void insertAtTail(Node* &head, Node* &tail, int data) {

    // Creation of new node
    Node* newNode = new Node(data);

    // Inserting first node
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

    // When first node is present
    else {

        // Linking of new node to the tail
        tail -> next = newNode;

        // Update tail
        tail = newNode;

    }
    
}


// For insertion at between the LL
void insertAtPosition(int position, Node* &head, Node* &tail, int data) {

    // Creation of new node
    Node* newNode = new Node(data);
    Node* prevNode = head;

    // Insertion at beginning
    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }
    
    // Insertion if length of the LL is not that much
    int length = findLength(head);
    if(position >= length) {        // Empty LL case is handled by this case
        insertAtTail(head, tail, data);
        return;
    }

    // Traversing to that position  
    while(--position) {
        prevNode = prevNode -> next;
    }

    // Inserting the new node in between
    newNode -> next = prevNode -> next;
    prevNode -> next = newNode;

}