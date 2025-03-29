#include <iostream>
using namespace std;

int main()  {
    int n, digit, sum=0, fact=1;
    cout<< "Enter the number: ";
    cin>> n;
    if (n%2==0) {
        for ( ; n!=0 ; ) {
            digit=n%10;
            sum=sum+digit;
            n=n/10;
        }
        cout<< "Sum of digits of the even number: " << sum;
    }
    else {
        for (int i=2; i<=n; i++) {
            fact=fact*i;
        }
        cout<< "Factorial of the number " << n << " is " << fact;
    }
}