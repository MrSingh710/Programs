# include <iostream>
using namespace std;

int main()  {
    int a=123;
    cout << a << endl;
    int size1=sizeof(a);
    cout << "Size of a is :" << size1 << endl;
    
    char b='g';
    cout << b << endl;
    int size2=sizeof(b);
    cout << "Size of b is :" << size2 << endl;

    bool bl=true;
    cout << bl << endl;
    int size3=sizeof(bl);
    cout << "Size of bl is :" << size3 << endl;

    float f=1.2;
    cout << f << endl;
    int size4=sizeof(f);
    cout << "Size of f is :" << size4 << endl;

    double d=1.23;
    cout << d << endl;
    int size5=sizeof(d);
    cout << "Size of d is :" << size5 << endl;
} 