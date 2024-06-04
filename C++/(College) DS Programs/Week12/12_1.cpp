#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits.h>
using namespace std;

class MinHeap {
public:

    // Insert a new key
    void insert_key(int key) {
        heap.push_back(key);
        bubble_up(heap.size() - 1);
    }

    // Delete a key at index i
    void delete_key(int i) {
        if (i < 0 || i >= heap.size()) return;
        decrease_key(i, INT_MIN);
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
    }

    // Increase the value of key at index i to new_val
    void increase_key(int i, int new_val) {
        if (i < 0 || i >= heap.size() || new_val <= heap[i]) return;
        heap[i] = new_val;
        bubble_down(i);
    }

    // Decrease the value of key at index i to new_val
    void decrease_key(int i, int new_val) {
        if (i < 0 || i >= heap.size() || new_val >= heap[i]) return;
        heap[i] = new_val;
        bubble_up(i);
    }
    void print_heap();

private:
    vector<int> heap;

    void heapify(int i);
    void bubble_up(int i);
    void bubble_down(int i);
    void print_heap_recursively(int i, int indent);

    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
};

// Heapify the subtree rooted at index i
void MinHeap::heapify(int i) {
    int l = left(i);
    int r = right(i);
    int smallest = i;

    if (l < heap.size() && heap[l] < heap[smallest]) {
        smallest = l;
    }
    if (r < heap.size() && heap[r] < heap[smallest]) {
        smallest = r;
    }
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        heapify(smallest);
    }
}

// Bubble up the element at index i
void MinHeap::bubble_up(int i) {
    while (i != 0 && heap[parent(i)] > heap[i]) {
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

// Bubble down the element at index i
void MinHeap::bubble_down(int i) {
    heapify(i);
}

// Print the heap in a tree structure
void MinHeap::print_heap() {
    print_heap_recursively(0, 0);
}

void MinHeap::print_heap_recursively(int i, int indent) {
    if (i < heap.size()) {
        if (right(i) < heap.size()) {
            print_heap_recursively(right(i), indent + 4);
        }
        if (indent) {
            cout << setw(indent) << ' ';
        }
        if (right(i) < heap.size()) {
            cout << " /\n" << setw(indent) << ' ';
        }
        cout << heap[i] << "\n ";
        if (left(i) < heap.size()) {
            cout << setw(indent) << ' ' << " \\\n";
            print_heap_recursively(left(i), indent + 4);
        }
    }
}

int main() {
    MinHeap heap;

    heap.insert_key(3);
    heap.insert_key(2);
    heap.delete_key(1);
    heap.insert_key(15);
    heap.insert_key(5);
    heap.insert_key(4);
    heap.insert_key(45);

    cout << "Min-Heap array: " << endl;
    heap.print_heap();

    heap.decrease_key(2, 1);

    cout << "\nMin-Heap array after decreasing key: " << endl;
    heap.print_heap();

    return 0;
}
