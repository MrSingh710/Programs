// Maximum and minimum number in an array

# include <iostream>
# include <limits.h>
using namespace std;

int maximum(int arr[], int size) {
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minimum(int arr[], int size) {
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size, arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum number in the array: " << maximum(arr, size) << endl;
    cout << "Minimum number in the array: " << minimum(arr, size) << endl;

}