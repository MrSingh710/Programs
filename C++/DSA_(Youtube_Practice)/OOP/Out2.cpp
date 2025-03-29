# include <iostream>
using namespace std;

int func (int &a, int b, int c) {
    a += 10;
    b = b - ++c;
    c--;
    return a+b+c;
}

int main() {
    int a, b;
    cin>> a >> b;
    cout<< func(a, b, a) << " " << a << " " << b <<endl;
    return 0;
}
