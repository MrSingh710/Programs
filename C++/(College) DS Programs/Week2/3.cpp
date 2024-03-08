# include <iostream>
# include <algorithm>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "     ";
    }
}

void removeDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    arr[j] = arr[j + 1];
                    count++;
                }
            }
        }
    }

    printArray(arr, size - count);

}

int main() {
    int size, arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    removeDuplicates(arr, size);


}