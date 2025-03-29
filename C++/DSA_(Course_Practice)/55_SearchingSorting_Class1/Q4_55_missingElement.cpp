#include <iostream>
#include <vector>
using namespace std;

/**
 * Finds the missing element in a sorted vector of integers.
 *
 * This function uses binary search to find the missing element in a sorted vector of integers.
 *
 * @param v A sorted vector of integers.
 *
 * @returns The missing element in the vector.
 */
int missingElement(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(v[mid] == mid + 1) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return s + 1;
}

int main() {
    vector<int> v{1, 2, 3, 4, 6, 7, 8};

    cout << "Missing element: " << missingElement(v);

}