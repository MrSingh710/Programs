#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    //push operation
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "stack is overflow" << endl;
        }
    }

    //pop operation
    void pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout << "stack is underflow" << endl;
        }
    }

    //peek/top element
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    //checking stack is empty or not
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int Size(int size){
        int count = 0;
        for(int i = 0; i < size; i ++){
            count ++;
        }
        return count;
    }

    void Display(int size){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(25);
    st.push(47);
    st.push(55);

    cout << "top is : " << st.peek() << endl;

    cout << "stack is empty or not : " << st.isEmpty() << endl;

    st.pop();
    st.pop();

    cout << "After poping ,top is : " << st.peek() << endl;

    cout << "Number of elements in the stack is : " << st.Size(5) << endl;

    cout << "stack content is : ";
    st.Display(5);

    return 0;
}