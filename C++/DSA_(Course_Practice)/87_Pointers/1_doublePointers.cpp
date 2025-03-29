#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
    int** q = &p;

    cout << &a << endl;     // address of a
    cout << a << endl;      // value at a
    cout << p << endl;      // address in p
    cout << &p << endl;     // address of p
    cout << *p << endl;     // value at address stored in p
    cout << q << endl;      // address in q
    cout << &q << endl;     // address of q
    cout << *q << endl;     // value(address) at address stored in q 
    cout << **q << endl;      // value at address stored in p (address of p is stored in q) 
}