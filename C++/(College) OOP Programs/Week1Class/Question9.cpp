#include <iostream>
using namespace std;

int main()  {
    int n, digit, sum=0, check;
    cout<< "Enter the number to check if it is a happy number or not: ";
    cin>> n;
    for ( ; check!=1; ) {
        digit=n%10;
        sum=sum+(digit*digit);
        check=sum;
        n=n/10;
        if (n==0) {
            n=sum;
            check=sum;
            sum=0;
        }
    }
    if (n==1) {
        cout<< "True";
    }
    else{
        cout<< "False";
    }
}