# include <iostream>
using namespace std;

int main()  {
    int dividend, divisor, quotient=0, sum=0;
    cout<< "Enter the dividend: ";
    cin>> dividend;
    cout<< "Enter the divisor: ";
    cin>> divisor;
    if (dividend>=0 && divisor>=0) {
        for ( ; sum<=dividend ; ) {
            sum=sum+divisor;
            quotient++;
        }
        cout<< "Quotient is " <<quotient-1;
    }   
    else if (dividend<0 && divisor<0) {
        for ( ; sum>=dividend ; ) {
            sum=sum+divisor;
            quotient++;
        }
        cout<< "Quotient is " <<quotient-1;
    }   
    else if (dividend<0 && divisor>=0) {
        for ( ; sum>=dividend ; ) {
            sum=sum-divisor;
            quotient++;
        }
        cout<< "Quotient is " <<0-(quotient-1);
    }   
    else if (dividend>=0 && divisor<0) {
        for ( ; sum<=dividend ; ) {
            sum=sum-divisor;
            quotient++;
        }
        cout<< "Quotient is " <<0-(quotient-1);
    }   
}