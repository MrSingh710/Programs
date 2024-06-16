#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class MinHeap {
private:
    vector<int> heap;
    
    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    
    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        
        if (l < heap.size() && heap[l] < heap[i])
            smallest = l;
        if (r < heap.size() && heap[r] < heap[smallest])
            smallest = r;
        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }
    
public:
    MinHeap() {}
    
    void insert_key(int key) {
        heap.push_back(key);
        int i = heap.size() - 1;
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }
    
    void delete_key(int i) {
        if (i >= heap.size()) return;
        decrease_key(i, INT_MIN);
        extract_min();
    }
    
    void increase_key(int i, int new_val) {
        if (i >= heap.size() || new_val <= heap[i]) return;
        heap[i] = new_val;
        heapify(i);
    }
    
    void decrease_key(int i, int new_val) {
        if (i >= heap.size() || new_val >= heap[i]) return;
        heap[i] = new_val;
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }
    
    int extract_min() {
        if (heap.size() <= 0)
            return INT_MAX;
        if (heap.size() == 1) {
            int root = heap[0];
            heap.pop_back();
            return root;
        }
        
        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
        
        return root;
    }
    
    void print_heap() {
        for (int i = 0; i < heap.size(); ++i)
            cout << heap[i] << " ";
        cout << "\n";
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
    
    cout << "Min-Heap array: ";
    h.print_heap();
    
    cout << "Extracted min: " << h.extract_min() << "\n";
    h.print_heap();
    
    h.decrease_key(2, 1);
    cout << "After decreasing key at index 2 to 1: ";
    h.print_heap();
    
    h.increase_key(2, 20);
    cout << "After increasing key at index 2 to 20: ";
    h.print_heap();
    
    return 0;
}
