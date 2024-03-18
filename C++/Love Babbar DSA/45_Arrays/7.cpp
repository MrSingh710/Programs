// Transpose of a matrix(sqaure)

#include <iostream>
using namespace std;

void printArray(int arr[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

// we cannot use swap if matrix is not a square matrix
void transpose(int arr[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = i; j < cols; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    } 
}


int main() {

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int rows = 3;
    int cols = 3;

    cout << "2D array before transpose: " << endl;
    printArray(arr, rows, cols);

    transpose(arr, rows, cols);

    cout << "2D array after the transpose: " << endl;
    printArray(arr, rows, cols);

}