// Transpose of a matrix(any)

#include <iostream>
using namespace std;

void printArray(int array[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
}

// If matrix is any rectangular matrix, we can store the transpose in another array
void transpose(int arr[][100], int transposeArr[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transposeArr[j][i] = arr[i][j];
        }
    } 
}


int main() {

    int arr[][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int aRows = 4;
    int aCols = 3;

    int transposeArr[100][100];
    int tRows = 3;
    int tCols = 4;

    cout << "2D array before transpose: " << endl;
    printArray(arr, aRows, aCols);

    transpose(arr, transposeArr, aRows, aCols);

    cout << "2D array after the transpose: " << endl;
    printArray(transposeArr, tRows, tCols);

}