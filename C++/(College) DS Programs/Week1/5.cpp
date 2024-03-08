// Reverse a given array.

# include <iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = arr[size - i - 1];
        arr[size - i -1] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[100], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Entered elements: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "\n Reversed Array: ";
    printArray (arr, size);

}