#include <iostream>
using namespace std;

// Reverse Order
// void printDigits(int num) {
    
//     if(num == 0) {
//         return;
//     }

//     // 1 case solved by me
//     int digit = num % 10;
//     cout << digit << "  ";

//     // Rest recursion will handle
//     printDigits(num / 10);

// }

// Forward Order
void printDigits(int num) {
    
    if(num == 0) {
        return;
    }

    // Rest recursion will handle
    printDigits(num / 10);

    // 1 case solved by me
    int digit = num % 10;
    cout << digit << "  ";

}

int main() {

    int n;
    cout << "Enter the num: ";
    cin >> n;

    printDigits(n);

}