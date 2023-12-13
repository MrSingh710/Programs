# include <iostream>
using namespace std;
# include <limits.h>

int main() {
    int n, digit, ans=0;
    cout<< "Enter the number:";
    cin>> n;

    if ((n>INT_MAX/10) || (ans<INT_MIN/10)) {
            cout<< 0;
        }
    else
    while (n!=0) {
        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<< ans;
}