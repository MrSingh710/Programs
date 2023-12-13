# include <iostream>
using namespace std;
int power(int a, int i);

int main() {
    int n, bit, binary=0;
    cout<< "Enter the number:";
    cin>> n;
    for (int i=0; n!=0; i++) {
        bit=n&1;
        binary+=bit*(power(10, i));
        n=n>>1;
    }
    cout<< binary;
}

int power(int a, int i)  {
    int ans=1;
    for (int j=1; j<=i; j++) {
        ans=ans*a;
    }
    return ans;
}