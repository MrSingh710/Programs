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
int lengthOfLL(Node* &head) {
    Node* temp = head;
    int length = 0;
    while(temp) {       // When temp will point to NULL, loop stops
        length++;
        temp = temp -> next;
    }
    return length;

}


void reverse(Node* &head, Node* &tail) {
    // For Starting
    Node* current = head -> next;
    Node* nextNode = head -> next -> next;
    head -> next = NULL;
    // Default
    while(nextNode) {
        current -> next = head;
        head = current;
        current = nextNode;
        nextNode = nextNode -> next;
    }
    // For last 2 nodes
    current  -> next = head;
    head = current;
   
}


int main() {
    // Creation of nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking the nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;

    cout << "Before reversing: ";
    print(first);

    reverse(first, third);

    cout << "After reversing: ";
    print(first);
}