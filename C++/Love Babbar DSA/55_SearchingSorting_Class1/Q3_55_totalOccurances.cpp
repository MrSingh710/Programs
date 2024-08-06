#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;

    int firstOcc = lower_bound(v.begin(), v.end(), target) - v.begin();
    int lastOcc = upper_bound(v.begin(), v.end(), target) - v.begin();

    cout << lastOcc << " - " << firstOcc << endl;
    cout << "Total number of occurances of 4: " << lastOcc - firstOcc;

} 