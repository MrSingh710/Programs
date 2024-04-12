#include <iostream>
using namespace std;

class Stack {
    
    int *arr;
    int top;
    int size;

    public:
    Stack(int size) {
        arr = new int[size];
        this -> size = size;
        top = -1;

    }   

    //Functions

    //Insertion
    void push(int data) {
        // Stack is full
        if(top >= size - 1) {
            cout << "Stack Overflow (Stack is full)" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    //Removal
    void pop() {
        // Stack is empty
        if(top == -1) {
            cout << "Stack Underflow (No element is present)" << endl;
            return;
        }

        top--;
    }

    // Returns top element
    int peek() {
        // Stack is empty
        if(top == -1) {
            cout << "Stack Underflow (No element is present)" << endl;
        }
        else {
            return arr[top];
        }
    }

    // Returns number of elements present in the stack
    int getSize() {
        return top + 1;
    }

    // Return 1 if stack is empty & 0 otherwise
    bool empty() {
        if(top == -1) {
            return true;
        }
        return false;
    }

};

int main() {

    //Creation
    Stack s(5);
    //Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    while(!s.empty()) {
        cout << s.peek() << "  ";
        s.pop();
    }

    cout << "\nSize of stack: " << s.getSize() << endl;

    s.pop();

}