# include <iostream>
using namespace std;
int main()  {
    int n, check=1;
    cout<< "Enter the number:";
    cin>> n;
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            check=0;
            break;
        }
    }
    if (check==0) {
        cout<< n << " is a not prime number";
    }
    else {
        cout<< n << " is a prime number";
    }
}