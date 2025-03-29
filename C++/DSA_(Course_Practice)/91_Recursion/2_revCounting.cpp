#include <iostream>
using namespace std;

void revCounting(int n) {

    // Base case
    if(n == 0) {
        return;
    } 

    // Processing
    cout << n << "   ";

    // Recursive relation
    revCounting(n - 1);
    
}


int main()  {

    int n;

    cout << "Enter the number from which reverse revCounting will be started: ";
    cin >> n;

    revCounting(n);

}