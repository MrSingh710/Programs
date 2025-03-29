#include <iostream>
using namespace std;

int fibonacci(int n) {

    // Base cases
    if(n == 1) {
        return 0;
    } 
    if(n == 2) {
        return 1;
    }

    // Recursive relation
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    
    return ans;
    
}


int main()  {

    int n;

    cout << "Enter the term of fibonacci series to be printed: ";
    cin >> n;

    cout << " Term " << n << " = " << fibonacci(n);

}