#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <vector>
using namespace std;

// Comparator for the max-heap to compare pairs based on their frequency
class compare {
    public:
    bool operator()(pair<char, int> const& p1, pair<char, int> const& p2) {
        return p1.second < p2.second;
    }
};

string frequencySort(string s) {
    // Step 1: Calculate frequency of each character
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Create a max-heap based on the frequency
    priority_queue<pair<char, int>, vector<pair<char, int>>, compare> maxHeap;
    for (auto& entry : freq) {
        maxHeap.push(entry);
    }

    // Step 3: Build the result string
    string result;
    while (!maxHeap.empty()) {
        auto top = maxHeap.top();
        maxHeap.pop();
        result.append(top.second, top.first); // Append character 'top.first' 'top.second' times
    }

    return result;
}

int main() {
    string s = "tree";
    cout << "Original string: " << s << endl;
    string sortedString = frequencySort(s);
    cout << "Sorted string by frequency: " << sortedString << endl;

    return 0;
}
