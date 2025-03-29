#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "Value in a: " << a << endl;      // Prints value of a   
    cout << "Address of a: " << &a << endl;     // Prints address of a

    int* ptr = &a;      // ptr is a pointer to 'a' which contain an integer data OR ptr is a pointer to integer data stored in variable a
    cout << "Value stored in ptr: " << ptr << endl;    // Prints the address stored in ptr
    cout << "Value at address stored in ptr: " << *ptr << endl;      // Prints the value using dereference operator
    cout << "Address of ptr: " << &ptr << endl;
     
} 