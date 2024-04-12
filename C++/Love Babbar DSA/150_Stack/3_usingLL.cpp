#include <iostream>
using namespace std;

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

class Stack {
    Node* top = NULL;
    int count = 0;      // For calculating size in O(1) TC

    public:

    void push(int data) {
        Node* newNode = new Node(data);
        if(top == NULL) {
            top = newNode;
            count++;
            return;
        }
        newNode -> next = top;
        top = newNode; 
        count++;
    }

    void pop() {
        if(top == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top -> next;
        temp -> next = NULL;
        delete temp;
        count--;
    }

    void peek() {
        if(top == NULL) {
            cout << "Stack Underflow (No element is present in the stack)" << endl;
        }
        else {
            int value = top -> data;
            cout << "Top element of the stack: " << value << endl;
        }
        
    }

    // O(n)
    // int size() {
    //     int c = 0;
    //     Node* temp = top;
    //     while(temp) {
    //         c++;
    //         temp = temp -> next;
    //     }
    //     return c;
    // }
    // O(1) TC
    int size() {
        return count;
    }

    bool empty() {
        if(top == NULL) {
            return true;
        }
        return false;
    }

    void display() {
        if(top == NULL) {
            cout << "Stack Underflow" << endl;
        }
        Node* temp = top;
        while(temp) {
            cout << temp -> data << "   ";
            temp = temp -> next;
        }
        cout << endl;
    }

};


int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.display();

    s.pop();
    s.display();

    s.peek();

    cout << "Size of the stack: " << s.size() << endl;

}