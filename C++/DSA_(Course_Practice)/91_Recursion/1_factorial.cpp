#include <iostream>
using namespace std;

int factorial(int n) {

    // Base case
    if(n == 0) {
        return 1;
    }
    
    // Recursive relation
    return n * factorial(n - 1);

}


int main()  {

    int n;

    cout << "Enter the number whose factorial is to be found: ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;

}