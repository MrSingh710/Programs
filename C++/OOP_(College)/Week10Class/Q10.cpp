#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> list1 = {1, 2, 3, 4, 5};
    vector<int> list2 = {3, 4, 5, 6, 7};

    if (list1.size() != list2.size()) {
        cerr << "Error: Lists must be of the same size." << endl;
        return 1;
    }

    vector<int> differenceList;
    transform(list1.begin(), list1.end(), list2.begin(), back_inserter(differenceList),
                   [](int a, int b) { return a - b; });

    cout << "Difference List: ";
    for (const auto& diff : differenceList) {
        cout << diff << " ";
    }
    cout << endl;

    return 0;
}