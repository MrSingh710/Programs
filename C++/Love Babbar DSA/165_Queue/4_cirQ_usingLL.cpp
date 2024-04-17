#include <iostream>
using namespace std;

class Node{
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

class CircularQueue{
    Node* front;
    Node* rear;
    public:
    CircularQueue() {
        Node* head = new Node();
        front = head;
        Node* tail = new Node();
        rear = tail;
    }

    // Insert at tail
    void push(int data) {

        Node* newNode = new Node(data);

        // For inserting first node
        if(rear -> next == NULL && front -> next == NULL) {
            rear = newNode;
            front = newNode;
            rear -> next = front;
        }
        else {
            rear -> next = newNode;
            rear = newNode;
            // For making Q circular
            rear -> next = front;
        }
        
    }

    // Remove from head
    void pop() {

        if(rear -> next == NULL && front -> next == NULL) {
            cout << "Q is empty" << endl;
            return;
        }

        Node* temp = new Node();
        temp = front;

        // For deleting last node
        if(temp -> next == front) {     
            delete temp;
            front -> next = NULL;
            rear -> next = NULL;
            return;
        }

        front = front -> next;
        temp -> next = NULL;
        delete temp;

        rear -> next = front;

    }


    int getFront() {
        if(rear -> next == NULL && front -> next == NULL) {
            cout << "Q is empty";
            return 0;
        }
        return front -> data;
    }

    bool empty() {
        if(rear -> next == NULL && front -> next == NULL) {
            return true;
        }
        return false;
    }

    int size() {
        int count = 0;
        Node* temp = front;

        while(temp -> next == front) {
            count++;
            temp = temp -> next;
        }
        return count;
    }

    void display() {
        if(rear -> next == NULL && front -> next == NULL) {
            cout << "Q is empty" << endl;
            return;
        }
        Node* temp = new Node();
        temp = front;
        
        do {
            cout << temp -> data << "   ";
            temp = temp -> next;
        } while (temp != front);
        
        cout << endl;
    }

};

int main()  {

    CircularQueue cq;

    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.pop();
    cq.pop();
    cq.display();

}