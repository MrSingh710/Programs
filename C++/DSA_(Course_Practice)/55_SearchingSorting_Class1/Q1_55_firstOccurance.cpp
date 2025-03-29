#include <iostream>
#include <vector>
using namespace std;

/**
 * Finds the index of the first occurrence of a target element in a sorted vector.
 *
 * @param arr The sorted vector of integers.
 * @param target The target element to find.
 *
 * @returns The index of the first occurrence of the target element in the vector.
 *          Returns -1 if the target element is not found.
 */

int firstOccurance(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    
    while(start <= end) {
        int mid = (start + end)/2;
        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
    }
    return ans;
}

int main() {

    vector<int> arr{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};

    int firstOccuranceIndex = firstOccurance(arr, 4);

    if(firstOccuranceIndex == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "First occurance of the element is at index: " << firstOccuranceIndex << endl;
    }

}