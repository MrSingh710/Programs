#include <iostream>
using namespace std;

void solve(int*& p) {
    p = p + 1;
}

int main() {
    int a = 5;
    int* p = &a;
    cout << "Before:- " << endl;
    cout << p;

    solve(p);

    cout << "\nAfter:- " << endl;
    cout << p;
    
}