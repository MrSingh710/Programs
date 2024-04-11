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
        cout << "  <->  " << temp -> prev << "  | ";
        cout << temp -> data << " | ";
        cout << temp -> next;
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


int main() {

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;

    first -> next = second;
    second -> prev = first;
    second -> next = third;
    third -> prev = second;

    print(head);


}