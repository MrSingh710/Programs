//  2D Arrays

#include<iostream>
using namespace std;

int main() {
    // Declaration of 2D array
    int arr[3][3];

    // Initialisation
    int brr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
        };

    cout << "Printing the array by row-wise" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << brr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Printing the array by column-wise" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << brr[j][i] << "  ";
        }
        cout << endl;
    }
}