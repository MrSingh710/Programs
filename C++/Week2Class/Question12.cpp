#include<iostream>
using namespace std;

int main()
{
    int a = 1, b =1;
    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << a << "  " << b << "  ";
    while(n-2 > 0)
    {
        int c = a+ b;
        cout << c << "  ";
        a = b;
        b = c;
        n--;
    }
}