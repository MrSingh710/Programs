// Reverse an array

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

void reverse(int arr[], int size) {
    int temp = 0;

    for(int i = 0; i < size / 2; i++) {
        // start = i
        // end = size - i - 1
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;

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

    reverse(arr, size);

    printArray(arr, size);

}