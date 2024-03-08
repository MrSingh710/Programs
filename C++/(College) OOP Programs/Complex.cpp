# include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(int x, int y) {
        real = x;
        img = y;
    }

    Complex operator+ (Complex &c) {
        Complex sum(0, 0);
        sum.real = this->real + c.real;
        sum.img = this-> img + c.img;
        return sum;
    }

};

int main() {
    Complex c1(1, 2);
    Complex c2(1, 3);
    Complex c3 = c1+c2;         // Here, c1 calls the oprator function
    cout<< c3.real << " + " << c3.img << "i" <<endl;
} 