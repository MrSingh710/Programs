#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
    cout << "Size of pointer p: " << sizeof(p) << endl;
    cout << "Size of int: " << sizeof(*p) << endl;          // Pointer p points to the int data type

    char ch = 'b';
    char* c = &ch;
    cout << "Size of pointer c: " << sizeof(c) << endl;
    cout << "Size of char: " << sizeof(*c) << endl;         // Pointer c points to the char data type

    double d = 1.03;
    double* dtr = &d;
    cout << "Size of pointer dtr: "  << sizeof(dtr) << endl;
    cout << "Size of double: " << sizeof(*dtr) << endl;       // Pointer dtr points to the double data type

}