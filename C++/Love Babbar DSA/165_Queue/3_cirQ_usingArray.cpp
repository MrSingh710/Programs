#include <iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:

    CircularQueue(int size) {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Inserting
    void push(int data) {

        // Conditions for full queue
        if(rear - front == size - 1 || rear == front - 1) {
            cout << "Q is full" << endl;
        }

        // For first insertion
        else if(front = -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = data;
        }

        // For making the queue circular
        else if(rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        }

        // Normal case
        else {
            rear++;
            arr[rear] = data;
        }
    }

    // Removal
    void pop() {

        // Empty Check
        if(front == -1) {
            cout << "Q is empty" << endl;
        }

        // Single element
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // For making circular queue
        else if(front == size - 1) {
            arr[front] = -1;
            front = 0;
        }

        // Normal case
        else {
            arr[front] = -1;
            front++;
        } 
    }

    // Front element
    int getFront() {
        if(front == -1) {
            cout << "Q is empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    bool empty() {
        if(front == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    int getSize() {
        if(front == -1) {
            return 0;
        }
        else if(rear - front >= 0) {
            return rear - front + 1;
        }
        else {
            return front - rear + 1;
        }
        
    }

};

int main()  {
    CircularQueue q(4);

    q.push(5);
    q.push(15);

    cout << "Size of queue: " << q.getSize() << endl;

    q.pop();
    cout << "Size of queue: " << q.getSize() << endl;

    q.push(45);

    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Front of queue: " << q.getFront() << endl;

}