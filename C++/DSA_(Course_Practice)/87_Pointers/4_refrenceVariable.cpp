#include <iostream>
using namespace std;

int main()  {
    int a = 5;
    int& b = a;

    cout << a << endl;
    cout << b << endl;

    a++;
    b++;

    cout << a << endl;
    cout << b << endl;

}