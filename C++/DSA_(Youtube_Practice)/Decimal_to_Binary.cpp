# include <iostream>
# include <math.h>
using namespace std;

int main() {
    int n, bit, binary=0;
    cout<< "Enter the number:";
    cin>> n;
    for (int i=0; n!=0; i++) {
        bit=n&1;
        binary+=bit*(pow(10,i));
        n=n>>1;
    }
    cout<< binary;
}