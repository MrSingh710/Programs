#include <iostream>
using namespace std;


int pivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while (s < e) {
        int mid = (s + e) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
    }
    return s;
}


int binarySearch(int arr[], int s, int e, int key) {
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}


int main() {
    int size, arr[100], key;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key value: ";
    cin >> key;

    int index = -1;
    int piv = pivot(arr, size);

    if(arr[piv] <= key  &&  key <= arr[size - 1]) {
        index = binarySearch(arr, piv, size - 1, key);
        cout<<"Element found at index: "<< index;
    }
    else {
        index = binarySearch(arr, 0, piv-1 ,key);
        cout<<"Element found at index: "<<index;
    }
}