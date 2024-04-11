#include<iostream>
using namespace std;

class Queue{

    public:
    int *arr;
    int qfront;
    int qrear;
    int size;

    public:
    //create constructor
    Queue(){
        size = 1000001;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }

    //push operation
    void enqueue(int data){
        if(qrear == size){
            cout << "queue is full" << endl;
        }
        else{
            arr[qrear] = data;
            qrear++;
        }
    }

    //pop operation
    int dequeue(){
        if(qfront == qrear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront ++;

            if(qfront == qrear){
                qfront = 0;
                qrear = 0;
            }
            return ans;
        }
    }

    //return front element
    int front(){
        if(qfront == qrear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    //checking if queue is empty or not
    bool isEmpty(){
        if(qfront == qrear){
            return true;
        }
        else{
            return false;
        }
    }

    //counting number of elements present in the queue;
    int Size(int size){
        int count = 0;
        for(int i = 0; i < size; i ++){
            count ++;
        }
        return count;
    }

};

int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    
    cout << "Front is pointing to the index : " << q.qfront << endl;
    cout << "Rear is pointing to the index : " << q.qrear << endl;
    cout << endl;

    cout << "Front is : " << q.front() << endl;

    cout << "Queue is empty or not : " << q.isEmpty() << endl;
    cout << endl;

    cout << "Number of element present in the queue is : " << q.Size(5) << endl;

    return 0;
}