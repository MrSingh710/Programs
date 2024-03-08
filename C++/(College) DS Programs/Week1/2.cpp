// Implement left shift with given number of steps.

#include <iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

int main() {
    int n, size, arr[100] = {0};

    cout << "Enter the number of steps to be left shifted: ";
    cin >> n;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Entered elements are: ";
    printArray(arr, size);

    for (int i = 0; i < (size + n); i++) {
        arr[i] = arr[i + n];
    }
    
    cout << "\nElements after left shift: ";
    printArray(arr, size);
}