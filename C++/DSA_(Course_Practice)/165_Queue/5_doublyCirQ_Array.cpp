#include <iostream>
using namespace std;

class Deque{
    int *arr;
    int size;
    int front;
    int rear;
    public:

    Deque(int size) {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert at rear
    void push_back(int data) {

        // Conditions for full queue
        if(rear - front == size - 1 || rear == front - 1) {
            cout << "Q is full" << endl;
            return;
        }

        // For first insertion
        else if(front == -1) {
            front = 0;
            rear = 0;
        }

        // For making the queue circular
        else if(rear == size - 1 && front != 0) {
            rear = 0;
        }

        // Normal case
        else {
            rear++;
        }
        arr[rear] = data;
    }


    // Insert at front 
    void push_front(int data) {

        // Conditions for full queue
        if(rear - front == size - 1 || rear == front - 1) {
            cout << "Q is full" << endl;
            return;
        }
 
        // For first insertion
        else if(front == -1) {
            front = rear = 0;
        }

        // For making the queue circular
        else if(rear != size - 1 && front == 0) {
            front = size - 1;
        }

        // Normal case
        else {
            front--;
        }
        arr[front] = data;
    }

    // Remove from front
    void pop_front() {

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

        // Last element (Circular nature)
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

    // Remove from rear
    void pop_back() {

        // Empty Check
        if(rear == -1) {
            cout << "Q is empty" << endl;
        }

        // Single element
        else if(front == rear) {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }

        // Last element
        else if(rear == 0) {
            arr[rear] = -1;
            rear = size - 1;
        }

        // Normal case
        else {
            arr[rear] = -1;
            rear--;
        } 
    }

    // Only for analysis purposes
    void print() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << "   ";
        }
        cout << endl;
    }

};

int main()  {

    Deque dq(10);

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.print();

    dq.pop_front();
    dq.pop_back();
    dq.print();

    dq.push_back(50);
    dq.print(); 

}