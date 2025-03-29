#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int size = 6;

    if(binary_search(v.begin(), v.end(), 3)) {
        cout << "Found in vector" << endl;
    }
    else {
        cout << "Not Found in vector" << endl;
    }

    if(binary_search(arr, arr + size, 6)) {
        cout << "Found in array" << endl;
    }
    else {
        cout << "Not Found in array" << endl;
    }

    int firstOccurance = lower_bound(v.begin(), v.end(), 4) - v.begin();
    cout << "First Occurance of 4: " << firstOccurance << endl;

    int lastOccurance = upper_bound(v.begin(), v.end(), 4) - v.begin();
    cout << "Last Occurance of 4: " << lastOccurance << endl;

} 