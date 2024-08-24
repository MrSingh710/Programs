#include <iostream>
using namespace std;

void update(int *p) {                                   // Address of a is stored in new pointer p             
    cout << "Address stored inside p: " << p << endl;   // address of a is stored in p 
    cout << "Address of p: " << &p << endl;

    *p = *p + 10;    

}


int main()  {
    int a = 5;
    cout << "Address of a: " << &a << endl;
    int* ptr = &a;
    cout << "Address stored in ptr: " << ptr << endl;   // Address of a is stored in ptr
    cout << "Address of ptr: " << &ptr << endl;

    update(ptr);                                        // ptr(address of a) is passed 

    cout << "Value of a: " << a << endl;  

}