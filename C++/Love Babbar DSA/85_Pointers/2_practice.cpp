#include <iostream>
using namespace std;

int main() {

    int arr[4] = {5, 6, 7, 8};
    int* p = arr;               
    int* q = arr + 1;
    cout << arr << endl;        // base address of arr
    cout << &arr << endl;       // base address of arr
    cout << arr[0] << endl;     // value at 0th index (base address)
    cout << &arr[0] << endl;    // base address of arr
    cout << p << endl;          // address of arr
    cout << &p << endl;         // address of p
    cout << *p << endl;         // value at the address stored in p
    cout << q << endl;          // address of arr + 1
    cout << &q << endl;         // address of q
    cout << *q << endl;         // value at the address stored in q
    cout << *p + 1 << endl;     // increments value at address stored in p by 1
    cout << *p + 2 << endl;     // increments value at address stored in p by 2
    cout << *q + 3 << endl;     // increments value at address stored in q by 3
    cout << *(q + 4) << endl;   // value at q + 4 (arr + 5) (Garbage value)
    
} 