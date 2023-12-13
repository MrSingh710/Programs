# include <iostream>
using namespace std;

int checkPrime(int n)  {
    int count=0;
    for (int i=2; i<n; i++) {
        int rem=n%i;
        if (rem==0) {
            count++;
        }
    }
    return count;
}

int main()  {
    int n;
    cout<< "Enter the number:";
    cin>> n;
    if (checkPrime(n)==0) {
        cout<< "The number is prime";
    }
    else
    cout<< "The number is not prime";
}