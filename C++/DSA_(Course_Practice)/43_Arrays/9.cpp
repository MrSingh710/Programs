// Extreme print in array

# include <iostream>
using namespace std;

void extreme(int arr[], int size) {
    // start = i & end = size - i - 1
    for(int i = 0; i <= size - i - 1; i++) {

        cout << arr[i] << "  ";

        if (i != size - i - 1) {
            cout << arr[size - i - 1] << "  ";
        }
    }

}

int main() {
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    extreme(arr, size);

}