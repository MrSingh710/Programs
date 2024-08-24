#include <iostream>
using namespace std;

void util(int* p) { // another p pointer is made
    p = p + 1;      // changes are made in another p pointer
    // *p = *p + 1; // changes are made in the value at the address stored in p pointer
}

int main() {
    int a = 5;
    int* p = &a;

    cout << "Before:- " << endl;
    cout << a << endl;      // value in a
    cout << p << endl;      // address in p
    cout << *p << endl;     // value at address stored in p

    util(p);

    cout << "After:- " < < endl;
    cout << a << endl;      // value in a
    cout << p << endl;      // address in p
    cout << *p << endl;     // value at address stored in p

}