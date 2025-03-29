#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    
    while(start <= end) {
        int mid = (start + end)/2;
        if(arr[mid] == target) {
            ans = mid;
            start = mid + 1;
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

    int lastOccuranceIndex = lastOccurance(arr, 4);

    if(lastOccuranceIndex == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Last occurance of the element is at index: " << lastOccuranceIndex << endl;
    }

}