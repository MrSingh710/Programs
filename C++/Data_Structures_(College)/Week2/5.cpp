#include <iostream>
using namespace std;

int linearSearch(int arr[3][3], int key) {
    int comparisons = 0;
    int final = 0;
    int flag = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

             if(arr[i][j] == key) {
                cout << "Key found";
                final = comparisons;
                break;
            }

            comparisons++;
           
        }
    }
    if (flag == 0) {
        cout << "Key not found";
        final = comparisons;
    }

    return final;
    
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

    int c = linearSearch(arr, key);

    cout << "\n Number of comparisons: " << c;
}