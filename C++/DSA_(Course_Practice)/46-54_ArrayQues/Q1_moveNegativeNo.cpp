// Move all the negative numbers to
// the left side of the array

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& arr) {
    for(auto value: arr) {
        cout << value << "  ";
    }
}

// Dutch National Flag Algorithm (2-Pointer Approach)
void moveNegative(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    
    while(s < e) {
        if(arr[s] < 0) {
            s++;
        }
        else if(arr[e] >= 0) {
            e--;
        }
        else {
            swap(arr[s], arr[e]);
        }
    }

}

int main() {
    vector<int> arr{-1, 2, -3, 4, -5, 0, -5, 7, 34};
    
    cout << "Elements before moving: ";
    printVector(arr);

    cout << "\nElements after moving: ";
    moveNegative(arr);
    printVector(arr);

}