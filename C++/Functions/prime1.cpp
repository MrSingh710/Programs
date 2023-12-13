# include <iostream>
using namespace std;

int checkPrime(int n)  {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return 0;
            break;
        }
        else return 1;
    }
}

int main()  {
    int n;
    cout<< "Enter the number:";
    cin>> n;
    if (checkPrime(n)==0) {
        cout<< "The number is not prime";
    }
    else
    cout<< "The number is prime";
}