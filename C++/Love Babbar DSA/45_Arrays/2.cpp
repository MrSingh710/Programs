// Taking input in 2-D Arrays

#include<iostream>
using namespace std;

int main() {
    int arr[2][3];
    int rows = 2;
    int cols = 3;

    cout << "Input as row wise: ";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Printing the row wise input: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }


    cout << "Input as column wise: ";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cin >> arr[j][i];
        }
    }
    cout << "Printing the column wise input: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }


}