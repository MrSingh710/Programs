// Row Sum 

#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3], int rows, int cols) {

    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
        cout << "Sum of " << i << " row = " << sum << endl;
    }

}


int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Enter the elements in the array: ";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    rowWiseSum(arr, rows, cols);

}