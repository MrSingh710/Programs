# include <iostream>
using namespace std;

int main()  {
    int n, digit, sum=0, prod=1;
    cout<< "Enter the number:";
    cin>> n;
    while (n!=0) {
        digit=n%10;
        n=n/10;
        sum+=digit;
        prod=prod*=digit;
    }
    cout<< prod-sum;
}