# include <iostream>
using namespace std;

int Factorial(int a)  {
    int fact=1;
    for (int i=2; i<=a; i++) {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)  {
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

int main()  {
    int n, r;
    cout<< "Enter the value of n and r:";
    cin>> n >> r;
    cout<< nCr(n, r);
}