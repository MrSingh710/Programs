#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

// Function to find the Kth smallest element using a max-heap
int findKthSmallest(vector<int>& nums, int K) {
    priority_queue<int> maxHeap;
    for (int num : nums) {
        maxHeap.push(num);
        if (maxHeap.size() > K) {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

// Function to find the Kth largest element using a min-heap
int findKthLargest(vector<int>& nums, int K) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > K) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    vector<int> nums = {7, 10, 4, 3, 20, 15};
    int K = 3;

    cout << "Kth smallest element is " << findKthSmallest(nums, K) << endl;
    cout << "Kth largest element is " << findKthLargest(nums, K) << endl;

    return 0;
}
