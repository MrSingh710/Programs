# include <iostream>
using namespace std;

template<typename T>
class Calculator {
    T a, b;
    public:
        Calculator(T a, T b) {
            this->a = a;
            this->b = b;
        }
        T add() {
            return a + b;
        }
        T subtract() {
            return a - b;
        }
        T multiply() {
            return a * b;
        }
        T divide() {
            return a / b;
        }
};

int main() {
    Calculator <float> number(7, 10);
    cout<< "Addition of 7 and 10: " << number.add() <<endl;
    cout<< "Subtraction of 7 and 10: " << number.subtract() <<endl;
    cout<< "Multiplication of 7 and 10: " << number.multiply() <<endl;
    cout<< "Division of 7 and 10: " << number.divide() <<endl;
}
