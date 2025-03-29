#include <iostream>
using namespace std;

int main() {
    char name[10] = "Dreams";
    char* cptr = &name[0];
    //char *cptr = name; 

    cout << name << endl;           // full string
    cout << &name << endl;          // base address
    cout << *(name + 3) << endl;    // 4th letter in the string
    cout << cptr << endl;           // whole string (string from 0th index)
    cout << &cptr << endl;          // address of cptr
    cout << *(cptr + 3) << endl;    // 4th letter of the string
    cout << cptr + 2 << endl;       // string from 2nd index
    cout << *cptr << endl;          // first letter of the string
    cout << cptr + 8 << endl;       // string from 8th index

}