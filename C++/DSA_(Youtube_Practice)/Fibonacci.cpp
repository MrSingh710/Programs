# include <iostream>
using namespace std;

int main()  {
    unsigned int first=0, sec=1, n, sum;
    cout<< "Enter the number till the series is to be printed:";
    cin>> n;
    if (n>=3) {
        cout<< "0 1 ";
    for (unsigned int i=1; i<=n-2; i++) {
        sum=first+sec;
        first=sec;
        sec=sum;
        cout<< sum << " ";
    } }
    else if (n==1) {
        cout<< "0";
    }
    else if (n==2) {
        cout<< "0 1";
    }
    else {
        cout<< "Invalid Number";
    }
}