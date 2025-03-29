#include <iostream>
using namespace std;

/**
 * Performs a binary search on a sorted array to find the target element.
 *
 * @param arr The sorted array to search in.
 * @param size The size of the array.
 * @param target The target element to search for.
 *
 * @returns The index of the target element if found, -1 otherwise.
 */
int binarySearch(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        // Element found
        if(arr[mid] == target) {
            return mid;
        }

        // Search in right part
        else if(arr[mid] < target) {
            start = mid + 1;
        }

        // Search in left part
        else {
            end = mid - 1;
        }
    }

    return -1;
}


int main() {

    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 12;

    int indexOfTarget = binarySearch(arr, size, target);

    if(indexOfTarget == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index: " << indexOfTarget << endl; 
    }

}