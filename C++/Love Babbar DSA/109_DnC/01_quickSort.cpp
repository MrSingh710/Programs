#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

int partition(int arr[], int s, int e) {
    // Choose pivot
    int pivotIndex = s;

    // Find right position for pivot
    int count = 0;
    for(int i = s + 1; i <= e; i++) {
        if(arr[pivotIndex] >= arr[i]) {
            count++;
        }
    }

    // Swap the pivotIndex with its correctIndex
    int correctIndex = s + count;
    swap(arr[pivotIndex], arr[correctIndex]);
    pivotIndex = correctIndex;

    // Make sure that all the elements in the left part are be lesser and
    // all the elements in the right part are greater than the pivot
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= arr[pivotIndex]) {
            i++;
        }
        while(arr[j] > arr[pivotIndex]) {
            j--;
        }
        if( i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }  
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    if(s >= e) {
        return;
    }

    int pivot = partition(arr, s, e);
    
    quickSort(arr, s, pivot - 1);

    quickSort(arr, pivot + 1, e);

}


int main() {

    int arr[] = {5, 2, 7, 8, 4, 6, 9, 6, 6, 7, 4, 6, 5, 5, 10, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    print(arr, n);

}