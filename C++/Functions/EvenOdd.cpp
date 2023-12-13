# include <iostream>
using namespace std;

int checkEven() {
    cout<< "Enter the number:";
    int a, check;
    cin>> a;
    check=a%2;
    return check;
}

int main()  {
    if (checkEven()==0) {
        cout<< "The number is even";
    }
    else {
        cout<< "The number is odd";
    }
}   