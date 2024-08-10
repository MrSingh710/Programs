#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
    cout << sizeof(p) << endl;

    char ch = 'b';
    char* c = &ch;
    cout << sizeof(c) << endl;

    double d = 1.03;
    double* dtr = &d;
    cout << sizeof(dtr) << endl;

}