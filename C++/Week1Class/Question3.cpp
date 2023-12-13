#include <iostream>
using namespace std;

int main()  {
    int n, n1, n2;
    char op;
    while (1) {
        cout<< "Enter the two integers: ";
        cin>> n1 >> n2;
        cout<< "Enter the operator: ";
        cin>> op;
        if (op=='+') {
            cout<< "Sum of the integers: " <<n1+n2 <<endl;
        }
        else if (op=='-') {
            cout<< "Subtraction of the integers: " <<n1-n2 <<endl;
        }
        else if (op=='*') {
            cout<< "Multiplication of the integers: " <<n1*n2 <<endl;
        }
        else if (op=='/') {
            cout<< "Division of the integers: " <<n1/n2 <<endl;
        }
        else if (op=='%') {
            cout<< "Remainder of the integers when divided: " <<n1%n2 <<endl;
        }
        cout<< "Enter 0 to exit or 1 to continue: ";
        cin>> n;
        if (n==0) {
            break;
        }
        else if (n==1) {
            continue;
        }
    }
}