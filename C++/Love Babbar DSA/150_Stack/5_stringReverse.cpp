// Reversing a string

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "jaspreet";

    stack<char> s;

    for(int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }

}