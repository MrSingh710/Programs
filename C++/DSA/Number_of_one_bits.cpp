# include <iostream>
using namespace std;

int main()  {
    unsigned int n, count=0;
    cout<< "Enter the number:";
    cin>>  n;
    while (n!=0) {
        if (n&1) {
            count++;
        }
        n=n>>1;
    }
    cout<< count;
}