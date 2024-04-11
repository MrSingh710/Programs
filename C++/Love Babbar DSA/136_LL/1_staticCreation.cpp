#include <iostream>
using namespace std;

// Creating data structure Node
class Node {
    public:
    int data;
    Node* next;

    Node() {                // how default constructor looks
        this -> data = 0;
        this -> next = NULL;
    }
    Node(int data) {        // Parameterised constructor for data input
        this -> data = data;
        this -> next = NULL;
    }
};

// Printing the LL
void print(Node* temp) {    // Passed by value as original LL shouldn't be changed (this creates a temp Node in which different nodes of LL are pushed)
    while(temp) {       // When temp will point to NULL, loop stops
        cout << temp -> data << " | ";
        cout << temp -> next << "  ->  ";
        temp = temp -> next;        // After printing the node(data & next pointer), temp pointer will point to the next node 
    }
}


int main() {

    // Creation of nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Linking the nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    print(first);

}