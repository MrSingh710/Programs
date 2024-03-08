// Find the nth largest and smallest element in an array.

#include <iostream>
#include <algorithm>
using namespace std;

int findNthLargest(int arr[], int size, int n) {
    sort(arr, arr + size);
    return arr[size - n];
}

int findNthSmallest(int arr[], int size, int n) {
    sort(arr, arr + size);
    return arr[n - 1];
}

int main() {
    int n, size, arr[100];

    cout << "Enter the order of the element: " << endl;
    cin >> n;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The " << n << "th largest element is: " << findNthLargest(arr, size, n) << endl;

    cout << "The " << n << "th smallest element is: " << findNthSmallest(arr, size, n) << endl;
    
}