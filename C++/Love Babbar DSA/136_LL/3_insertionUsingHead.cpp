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
void print(Node* temp) {
    while(temp) {       // When temp will point to NULL, loop stops
        cout << temp -> data << " | ";
        cout << temp -> next << "  ->  ";
        temp = temp -> next;        // After printing the node(data & next pointer), head pointer will point to the next node 
    }
    cout << endl;
}

// Insertion of nodes before the head node
void insertAtHead(Node* &head, int data) {

    // Creation of new node
    Node* newNode = new Node(data);

    // Linking the new node to the head node
    newNode -> next = head;

    // Making the new node as head node
    head = newNode;

}


// Inserts the node at the end of the LL
void insertAtTail(Node* &head, int data) {

    // Creation of new node
    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    
    while(temp -> next) {
        temp = temp -> next;
    }
    temp -> next = newNode;
    
}


int main() {
    Node* head = NULL;
    // print(head);
    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 50);
    // print(head);

    insertAtTail(head, 60);
    print(head);
    insertAtTail(head, 70);
    insertAtTail(head, 80);
    print(head);

}