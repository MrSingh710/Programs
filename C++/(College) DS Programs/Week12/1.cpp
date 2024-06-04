#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapify_down(int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heap.size() && heap[left] < heap[smallest])
            smallest = left;

        if (right < heap.size() && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapify_down(smallest);
        }
    }

    void heapify_up(int i) {
        if (i && heap[(i - 1) / 2] > heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            heapify_up((i - 1) / 2);
        }
    }

public:
    MinHeap() {}

    void insert_key(int key) {
        heap.push_back(key);
        int index = heap.size() - 1;
        heapify_up(index);
    }

    void delete_key(int i) {
        if (i < 0 || i >= heap.size()) {
            cout << "Index out of range\n";
            return;
        }
        decrease_key(i, INT_MIN);
        extract_min();
    }

    int extract_min() {
        if (heap.size() == 0)
            return INT_MAX;

        if (heap.size() == 1) {
            int root = heap[0];
            heap.pop_back();
            return root;
        }

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify_down(0);

        return root;
    }

    void decrease_key(int i, int new_val) {
        if (i < 0 || i >= heap.size()) {
            cout << "Index out of range\n";
            return;
        }
        heap[i] = new_val;
        heapify_up(i);
    }

    void increase_key(int i, int new_val) {
        if (i < 0 || i >= heap.size()) {
            cout << "Index out of range\n";
            return;
        }
        heap[i] = new_val;
        heapify_down(i);
    }

    void print_heap() {
        cout << "Heap array: ";
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h;
    h.insert_key(3);
    h.insert_key(2);
    h.delete_key(1);
    h.insert_key(15);
    h.insert_key(5);
    h.insert_key(4);
    h.insert_key(45);

    h.print_heap();

    cout << "Extracted min: " << h.extract_min() << endl;
    h.print_heap();

    h.decrease_key(2, 1);
    h.print_heap();

    return 0;
}
