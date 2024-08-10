#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << *ptr << endl;
    a + 1;
    cout << *ptr << endl;

} 