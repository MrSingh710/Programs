// Maximum and minimum in 2D array

#include <iostream>
#include <limits.h>
using namespace std;

int maximum(int arr[][3], int rows, int cols) {
    int max = INT_MIN; 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }  
        }
    }
    return max;
}

int minimum(int arr[][3], int rows, int cols) {
    int min = INT_MAX; 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }  
        }
    }
    return min;
}

int main() {

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    cout << "Maximum element present: " << maximum(arr, rows, cols) << endl;
    cout << "Minimum element present: " << minimum(arr, rows, cols) << endl;
    
}