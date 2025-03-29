#include <iostream>
using namespace std;

void counting(int n) {

    // Base case
    if(n == 0) {
        return;
    } 

    // Recursive relation
    counting(n - 1);

    // Processing
    cout << n << "   ";
    
}


int main()  {

    int n;

    cout << "Enter the number to which counting will be stopped: ";
    cin >> n;

    counting(n);

}