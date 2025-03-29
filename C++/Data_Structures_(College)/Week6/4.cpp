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

class Queue {
    Node* front;
    Node* rear;
    int count;
public:
    Queue() {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void enqueue(int element) {
        Node* newNode = new Node(element);
        if (isEmpty()) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1; 
        }
        int element = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
        if (front == NULL) {
            rear = NULL;
        }
        return element;
    }

    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; 
        }
        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }

    int size() {
        return count;
    }
};

int main() {
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Front: " << queue.frontElement() << endl;  
    cout << "Size: " << queue.size() << endl;  

    cout << "Dequeue: " << queue.dequeue() << endl;  
    cout << "Front: " << queue.frontElement() << endl;  

    queue.enqueue(6);
    cout << "Size: " << queue.size() << endl; 

    return 0;
}
