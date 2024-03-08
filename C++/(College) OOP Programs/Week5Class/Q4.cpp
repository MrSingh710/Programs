# include <iostream>
using namespace std;

class Complex{
    public:
    int real, imaginary;
    Complex(int r=0, int ima=0) {
        real=r;
        imaginary=ima;
    }
    Complex addComp(Complex C1, Complex C2) {
        Complex temp;
        temp.real=C1.real+C2.real;
        temp.imaginary=C1.imaginary+C2.imaginary;
        return temp;
    }
};

int main() {
    Complex C1(3, 2);
    Complex C2(9, 5);
    cout<< "Complex number 1: " << C1.real << " + " << C1.imaginary << "i" <<endl;
    cout<< "Complex number 2: " << C2.real << " + " << C2.imaginary << "i" <<endl;
    Complex C3;
    C3=C3.addComp(C1, C2);
    cout<< "Sum of 2 complex numbers: " << C3.real << " + " << C3.imaginary << "i";
    return 0;  
}