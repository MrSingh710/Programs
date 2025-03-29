# include <math.h>
# include <iostream>
using namespace std;

int main()  {
    int n, i, count=0;
    cout<< "Enter the number:";
    cin>> n;

    for(i=0; i<=30; i++) {
        if (n==pow(2,i)) {
            count++;
        }
    }
    if (count>0) {
        cout<< "True";
    }
    else {
        cout<< "False";
    }
}