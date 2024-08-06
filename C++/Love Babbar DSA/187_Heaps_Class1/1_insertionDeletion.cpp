#include <iostream>
using namespace std;

class Heap {
    int *arr;
    int size;
public:
    Heap() {
        size = 0;
    }

    void insertMaxHeap(int key) {
        size++;
        int index = size;
        arr[index] = key;
        while(arr[index] > arr[index/2] && index > 1) {
            swap(arr[index], arr[index/2]);
            index = index/2;
        }
    }

    void deleteHeap() {
        swap(arr[1], arr[size]);
        size--;
        int i = 1;
        while(2*i + 1 <= size) {
            
            if(arr[2*i] > arr[2*i + 1]) {
                swap(arr[2*i], arr[i]);
                i = 2*i;
            }
            else {
                swap(arr[2*i + 1], arr[i]);
                i = 2*i + 1;
            }
        }
        
    }

    void printArray() {
        for(int i = 1; i <= size; i++) {
            cout << arr[i] << "   ";
        }
        cout << endl;
    }

};

int main() {
    Heap h;

    h.insertMaxHeap(10);
    h.insertMaxHeap(4);
    h.insertMaxHeap(8);
    h.insertMaxHeap(2);
    h.insertMaxHeap(3);
    h.insertMaxHeap(6);
    h.insertMaxHeap(7);
    h.insertMaxHeap(9);
    
    cout << "Printing heap after insertion: ";
    h.printArray();

    h.deleteHeap();
    cout << "Printing heap after deletion: ";
    h.printArray();

}