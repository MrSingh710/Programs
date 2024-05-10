#include <iostream>
using namespace std;

void counting(int n) {

    // Base case
    if(n == 0) {
        return;
    }

    // Processing
    cout << n << "   ";

    // Recursive relation
    counting(n - 1);
    
}


int main()  {

    int n;

    cout << "Enter the number from which reverse counting will be started: ";
    cin >> n;

    counting(n);

}