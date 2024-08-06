#include <iostream>
using namespace std;

class Heap {
    int *arr;
    int size;
public:
    Heap() {
        size = 0;
    }
};

void heapify(int arr[], int size, int i) {
    if (2*i + 1 <= size) {
        if(arr[2*i] > arr[i] && arr[2*i] > arr[2*i +1]) {
            swap(arr[2*i], arr[i]);
            i = 2*i;
            heapify(arr, size, i);
        }
        else if(arr[2*i + 1] > arr[i] && arr[2*i + 1] > arr[2*i]){
            swap(arr[2*i + 1], arr[i]);
            i = 2*i + 1;
            heapify(arr, size, i);
        }
         
    }
    
}

void buildHeap(int arr[], int n) {
    for(int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }
}

void printArray(int arr[], int n) {
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << "   ";
    }
    cout << endl;
}

int main() {

    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 11;
    buildHeap(arr, n);

    cout << "Heap formed from the array: ";
    printArray(arr, n);


}