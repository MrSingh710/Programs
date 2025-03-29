// Middle element in a stack

#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> &s, int &size) {
    if(s.size() == 0) {
        cout << "There is no element in stack";
        return;
    }
    if(s.size() == size) {
        cout << "Middle element in the stack: " << s.top();
        return;
    }

    // Storing the top value in a temporary variable
    int temp = s.top();

    // Removing the top element
    s.pop();

    // Repeating the above process till we reach printMiddle element
    printMiddle(s, size);

    // After reaching the printMiddle element, pushback the elements which were removed 
    s.push(temp);

}


int main() {
    stack<int> s;
    s.push(10);
    s.push(20);  
    s.push(30);
    s.push(40);
    s.push(50);

    int size = s.size()/2 + 1;

    printMiddle(s, size);




}

