#include <iostream>
#include <vector>
#include <algorithm>  // Required for std::find
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 2, 3, 4, 1, 5, 9, 0, 4, 4, 6, 77};
    vector<int> uniqueElements;

    for (int i = 0; i < v.size(); ++i) {
        
        if (find(uniqueElements.begin(), uniqueElements.end(), v[i]) == uniqueElements.end()) {
            
            uniqueElements.push_back(v[i]);
        }
    }

    cout << "The unique elements are: ";
    for (auto x : uniqueElements)
        cout << x << " ";

    return 0;
}