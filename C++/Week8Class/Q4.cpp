#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex &other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex &other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex &other) const {
        double divisor = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / divisor,
                       (imag * other.real - real * other.imag) / divisor);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(2, 3);
    Complex num2(1, -1);

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    Complex prod = num1 * num2;
    Complex quot = num1 / num2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    cout << "Quotient: ";
    quot.display();

    return 0;
}
