// Implement cyclic right rotate with given number of steps.

#include <iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

int main() {
    int n, size, arr[100], temp;

    cout << "Enter the number of steps to be right shifted: ";
    cin >> n;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Entered elements are: ";
    printArray(arr, size);

    while (n) {
        temp = arr[size - 1];
        for (int i = 0; i <= size - 2; i++) {
            arr[size - i - 1] = arr[size - i - 2];
        }
        arr[0] = temp;
        n--;
    }

    cout << "\nElements after cyclic right shift: ";
    printArray(arr, size);
}