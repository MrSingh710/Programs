#include <iostream>

using namespace std;

void printIncrementingPyramid(int n) {
    int count = 1;

    for (int i = 1; i <= n; i++) {
   
        for (int j = 1; j <= n - i; j++)
            cout << " ";

     
        for (int j = 1; j <= i; j++)
            cout << count++ << " ";

      
        for (int j = 1; j < i; j++)
            cout << count++ << " ";

        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for the incrementing pyramid: ";
    cin >> numRows;

    printIncrementingPyramid(numRows);

    return 0;
}
