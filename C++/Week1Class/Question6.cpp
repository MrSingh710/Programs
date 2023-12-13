# include <iostream>
using namespace std;

int main()  {
    int rev=0, n, temp, digit;
    cout<< "Enter the number whose palindromic behaviour is to be checked: ";
    cin>> n;
    temp=n;
    for ( ; temp!=0; ) {
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    if (n<0) {
        cout<< "Negative numbers are not palindromic";
    }
    else if (rev==n) {
        cout<< n << " is a palindrome number";
    }
    else if (rev!=n) {
        cout<< n << " is not a palindrome number";
    }
}