// 2 stacks in one array

#include <iostream>
using namespace std;

class Stack {

    int *arr;
    int size;
    int top1;
    int top2;

    public:

    Stack(int size) {
        arr = new int[size];
        this -> size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data) {
        if(top2 - top1 <= 1) {
            cout << "Stack Overflow in Stack 1";
            return;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data) {
        if(top2 - top1 <= 1) {
            cout << "Stack Overflow in Stack 2";
            return;
        }
        top2--;
        arr[top2] = data;
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Stack Underflow in Stack 1";
        }
        top1--;
    }

    void pop2() {
        if (top2 == size) {
            cout << "Stack Underflow in Stack 2";
        }
        top2++;
    }

    void print() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << "   ";
        }

    }

};

int main() {

    Stack s(5);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(40);
    s.push2(50);
    s.print();


    
    

}