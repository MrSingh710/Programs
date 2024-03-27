// Missing elements from an array with duplicates
// (By marking method)

#include <iostream>
#include <vector>
using namespace std;

// Marking method
void missingElement(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]);
        if(arr[index - 1] > 0) {
            arr[index - 1] *= -1;
        }
    }
    
    cout << "Missing Elements: ";
    for(int i = 0; i < arr.size(); i++) {
        // All positive indexes's numbers are missing
        if(arr[i] > 0) {
            cout << i + 1 << "  ";
        }
    }
    
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    missingElement(arr);

}