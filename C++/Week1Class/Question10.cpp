#include <iostream>
using namespace std;

int main()  {
    int L, R, count=0;
    cout<< "Enter the number of pancakes in L stack: ";
    cin>> L;
    cout<< "Enter the number of pancakes in R stack: ";
    cin>> R;
    for (int i=1; L-i>=0 || R-i>=0; i++) {
        if (L<R) {
            R=R-i;
            count++;
        }
        else if (L>=R) {
            L=L-i;
            count++;
        }
    }
        cout<< "Number of customers: " << count <<endl;
        cout<< "Number of pancakes left on L stack: " << L <<endl;
        cout<< "Number of pancakes left on R stack: " << R;
}