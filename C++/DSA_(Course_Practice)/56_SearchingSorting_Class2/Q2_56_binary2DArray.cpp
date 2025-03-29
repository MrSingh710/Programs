#include <iostream>
using namespace std;

int twoD_binarySearch(int arr[][4], int &rows, int &cols, int target) {
    int size = rows * cols;
    int s = 0;
    int e = size - 1;
    int columns = cols;
    
    while(s <= e) {
        int mid = s + (e - s) / 2;
        int i = mid / columns;
        int j = mid % columns;

        if(arr[i][j] == target) {
            rows = i;
            cols = j;
            return 0;
        }
        else if(arr[i][j] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    rows = -1;
    cols = -1;
}


int main() {
    int rows = 5;
    int cols = 4;
    int arr[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20} };

    int size = rows * cols;
    int target = 3;

    twoD_binarySearch(arr, rows, cols, target);

    if(rows == -1 && cols == -1) {
        cout << target << " is not found" << endl;
    }
    else {
        cout << target << " is found at " << rows << ", " << cols << endl;
    }

}