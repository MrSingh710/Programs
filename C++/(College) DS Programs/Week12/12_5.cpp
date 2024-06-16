#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class MedianFinder {
private:
    priority_queue<int> maxHeap; // Max-heap for the lower half
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap for the upper half

public:
    // Function to add a number to the data structure
    void addNum(int num) {
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // Balance the heaps to ensure their sizes differ by at most 1
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    // Function to find the median of the numbers
    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        } else {
            return maxHeap.top();
        }
    }
};

int main() {
    MedianFinder medianFinder;

    vector<int> stream = {10, 30, 2, 6};
    for (int num : stream) {
        medianFinder.addNum(num);
        cout << "Current median: " << medianFinder.findMedian() << endl;
    }

    return 0;
}
