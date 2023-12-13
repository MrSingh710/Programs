# include <iostream>
using namespace std;

template <class T>
class Calculator {
    T n1, n2;
    public:
    Calculator (T a, T b) {
        n1 = a;
        n2 = b;
    }
    T add() {
        return n1+n2;
    }
};
int main() {
    Calculator<int> c1(2, 3);
    Calculator<float> c2(2.5, 6.3);
    Calculator<string> c3("Hello", "World");
    cout<< c1.add() <<endl;
    cout<< c2.add() <<endl;
    cout<< c3.add() <<endl;
}