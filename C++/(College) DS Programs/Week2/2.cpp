# include <iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

void removeElement(int arr[], int size, int element) {
    int n;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            n = i;
        }
    }

    for (int i = n; i < size; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int n, size, arr[100];

    cout << "Enter the element to be removed: ";
    cin >> n;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    removeElement(arr, size, n);

    printArray (arr, size - 1);
}