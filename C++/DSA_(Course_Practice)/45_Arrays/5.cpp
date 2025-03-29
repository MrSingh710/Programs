// Linear search in 2D array

#include <iostream>
using namespace std;

bool linearFind(int arr[][3], int key) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
             if(arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    int key;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Enter the key to be found: ";
    cin >> key;

   if (linearFind(arr, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

}