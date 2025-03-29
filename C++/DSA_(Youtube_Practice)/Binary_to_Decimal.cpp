# include <iostream>
# include <math.h>
using namespace std;

int main() {
    int n, digit, ans=0;
    cout<< "Enter the binary form of a number:";
    cin>> n;
    for (int i=0; n!=0; i++) {
        digit=n%10;
        ans+=(digit*pow(2,i));
        n=n/10;
    }
    cout<< ans;
}