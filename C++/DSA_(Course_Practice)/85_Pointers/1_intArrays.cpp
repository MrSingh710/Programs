#include <iostream>
using namespace std;

int main()  {
    int arr[4] = {12, 44, 6, 18};
    // cout << arr << endl;        // prints base address
    // cout << arr[0] << endl;     // prints value at 0th index
    // cout << &arr << endl;       // prints base address
    // cout << &arr[0] << endl;    // prints address of 0th index (base address)
    
    int* p = arr;
    // arr = arr + 1;               // We can't alter the array but we can alter the pointer which is pointing to starting
    p = p + 1;                      // of the array (we can change the starting of the array with the help of pointers)       
    cout << p << endl;          // prints the address stored in the pointer p
    cout << &p << endl;         // prints the address of the pointer p
    cout << *(p + 1) << endl;   // prints the value at 1st index of the pointer (2nd index of the array)
    cout << p[1] << endl;       // prints the value at 1st index of the pointer (2nd index of the array)

    cout << *arr << endl;           // prints value at base address
    cout << arr[0] << endl;         // prints value at 0th index
    cout << *arr + 1 << endl;       // prints the incremented value at base address
    cout << *(arr + 2) << endl;     // prints value at 2nd index
    cout << arr[2] << endl;         // prints value at 2nd index
    cout << 2[arr] << endl;         // prints value at 2nd index
    
}