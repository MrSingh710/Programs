#include <iostream>

using namespace std;

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void printPascalPyramid(int n) {
    for (int i = 0; i < n; i++) {
        int spaces = n - i - 1;

        // Print leading spaces
        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            int coefficient = binomialCoefficient(i, j);
            cout << coefficient << " ";
        }

        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for the Pascal Pyramid: ";
    cin >> numRows;

    printPascalPyramid(numRows);

    return 0;
}
