#include <iostream>
#include <stack>
using namespace std;

int main() {
    //Creation
    stack<int> st;

    //Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //Remove
    st.pop();

    //Check element on top
    cout << "Element on top: " << st.top() << endl;

    //Size of stack
    cout << "Size of stack: " << st.size() << endl;

    if(st.empty()) {
        cout << "Stack is empty" << endl;
        
    }
    else {
        cout << "Stack is not empty" << endl;
    }


    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //Printing
    cout << "Elements in the stack: ";
    while(!s.empty()) {
        cout << s.top() << "   ";
        s.pop();
    }

} 