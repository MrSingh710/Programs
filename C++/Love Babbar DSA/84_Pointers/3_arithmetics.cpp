#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << (*ptr)++ << endl;   // prints 10 & then increments a by 1
    cout << ++(*ptr) << endl;   // increments a & then prints 12
    
    a = a + 1;
    cout << *ptr << endl;       // prints 13

    *ptr = *ptr + 2;
    cout << *ptr << endl;       // prints 15

    *ptr = *ptr * 3;
    cout << *ptr << endl;       // prints 45

    *ptr = *ptr / 5;
    cout << *ptr << endl;       // prints 9

} 