#include <iostream>
#include <vector>

using namespace std;

vector<int> findPeakElements(const vector<int>& arr) {
    vector<int> peaks;

    int n = arr.size();
    if (n == 0) return peaks;

    // Check if the first element is a peak
    if (arr[0] >= arr[n - 1] && arr[0] >= arr[1])
        peaks.push_back(arr[0]);

    // Check for peak elements in the middle
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            peaks.push_back(arr[i]);
    }

    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2] && arr[n - 1] >= arr[0])
        peaks.push_back(arr[n - 1]);

    return peaks;
}

int main() {
    vector<int> arr = {100, 20, 15, -2, 23, 90, 67};
    vector<int> peaks = findPeakElements(arr);

    cout << "Peak elements: ";
    for (int peak : peaks)
        cout << peak << " ";
    cout << endl;

    return 0;
}