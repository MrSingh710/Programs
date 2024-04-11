#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node* top;
    int count;
public:
    Stack() {
        top = NULL;
        count = 0;
    }

    void push(int element) {
        Node* newNode = new Node(element);
        newNode->next = top;
        top = newNode;
        count++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int element = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        count--;
        return element;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; 
        }
        return top->data;
    }

    int peep(int i) {
        if (i < 1 || i > size()) {
            cout << "Invalid index" << endl;
            return -1;
        }
        Node* current = top;
        for (int j = 1; j < i; j++) {
            current = current->next;
        }
        return current->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    int size() {
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack is : " << endl;
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }

    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.display();  

    cout << "Peek: " << stack.peek() << endl;  
    cout << "Peep(2): " << stack.peep(2) << endl; 
    cout << "Size: " << stack.size() << endl;  

    cout << "Pop: " << stack.pop() << endl; 

    stack.display(); 

    return 0;
}
