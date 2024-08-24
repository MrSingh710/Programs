#include <iostream>
using namespace std;

int main() {
    char ch[10] = "Jassi";
    char* c = ch;

    cout << ch << endl;     // prints the whole string till null character
    cout << &ch << endl;    // prints the base address
    cout << ch[0] << endl;  // prints the first letter of the string

    cout << &c << endl;     // prints the address of the pointer c
    cout << *c << endl;     // prints the first letter of the array
    cout << c << endl;      // prints the whole string  
    
}