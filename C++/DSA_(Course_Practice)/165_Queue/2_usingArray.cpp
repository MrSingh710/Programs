#include <iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    

    Queue(int size) {
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Inserting
    void push(int data) {
        if(rear == size) {
            cout << "Q is full" << endl;
        }
        else {
            arr[rear] = data;
            rear++;
        }
    }

    // Removal
    void pop() {
        if(front == rear) {
            cout << "Q is empty" << endl;
            front == 0;
            rear == 0;
        }
        else {
            arr[front] = -1;
            front++;
        }
    }

    // Front element
    int getFront() {
        if(front == rear) {
            cout << "Q is empty" << endl;
            front == 0;
            rear == 0;
            return 0;
        }
        else {
            return arr[front];
        }
    }

    bool empty() {
        if(front == rear) {
            return true;
        }
        else {
            return false;
        }
    }

    int getSize() {
        return rear - front;
    }

};

int main()  {
    Queue q(4);

    q.push(5);
    q.push(15);

    cout << "Size of queue: " << q.getSize() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.push(45);

    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Front of queue: " << q.getFront() << endl;

}